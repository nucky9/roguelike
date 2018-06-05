import
  math,
  sdl2,
  sdl2.ttf,
  sdl2.image,
  ../helperprocs/errorhandling,
  ../helperprocs/initrenderer,
  ../types/fonttypes

var
  rMask*: uint32
  gMask*: uint32
  bMask*: uint32
  aMask*: uint32
  
if cpuEndian == bigEndian:
  rMask = 0xff000000.uint32
  gMask = 0x00ff0000.uint32
  bMask = 0x0000ff00.uint32
  aMask = 0x000000ff.uint32
else:
  rMask = 0x000000ff.uint32
  gMask = 0x0000ff00.uint32
  bMask = 0x00ff0000.uint32
  aMask = 0xFF000000.uint32

proc renderString*(fontFile: string, fontSize: cint, renderer: RendererPtr, charRend: char, xPos: int) =
  var font = openFont(fontFile, fontSize)
  setFontHinting(font, TTF_HINTING_LIGHT)
  let colour = color(255,255,255,0)
  var textSurface = renderGlyphBlended(font, charRend.uint16, colour)
  let fontWidth = textSurface.w
  let fontHeight = textSurface.h
  var srcRect: Rect
  srcRect.x = 0.cint
  srcRect.y = 0.cint
  srcRect.w = fontWidth
  srcRect.h = fontHeight

  
  var dstRect: Rect
  dstRect.x = xPos.cint
  dstRect.y = 80.cint
  dstRect.w = fontWidth
  dstRect.h = fontHeight
  
  var compositeSurface = createRGBSurface(0, fontWidth, fontHeight, 24, rMask, gMask, bMask, aMask)
  blitSurface(textSurface, nil, compositeSurface, nil)

  let fontTexPtr = createTextureFromSurface(renderer, compositeSurface)
  renderer.copy(fontTexPtr, nil, dstRect.addr)
  renderer.present()

proc generateTextureDimensions(totalChars, rectSide: int): (int, int) =
  var
    texWidth = 2
    texHeight = 2
  
  while true:
    var
      numColumns: int
      numRows: int
    numColumns = (texWidth / rectSide).int 
    numRows = (texHeight / rectSide).int 

    if (numColumns * numRows) >= totalChars:
      break
    else:
      texWidth *= 2
    numColumns = (texWidth / rectSide).int 
    numRows = (texHeight / rectSide).int 
    if (numColumns * numRows) >= totalChars:
      break
    else:
      texHeight *= 2

  return (texWidth, texHeight)

proc fontBitmapByCellSize*(renderer: RendererPtr, fontFile: string, cellSize: int, hinting = TTF_HINTING_NORMAL, asciiStartCharNum = 32, asciiEndCharNum = 126): BitmappedFont =
  discard

proc fontBitmapByFontSize*(renderer: RendererPtr, fontFile: string, fontSize: cint, hinting = TTF_HINTING_NORMAL, asciiStartCharNum = 32, asciiEndCharNum = 126): BitmappedFont =
  result = BitmappedFont()
  result.startingAsciiNum = asciiStartCharNum

  let
    whiteColour = color(255, 255, 255, 0)
    totalChars = asciiEndCharNum - asciiStartCharNum + 1
    
  var font = openFont(fontFile, fontSize)
  sdlFailIf font.isNil: "error!"
    # TODO: Better error handling
    
  let
    rectSides = fontHeight(font) # need this to calculate the square that bounds the fonts (to make monospaced)
  setFontHinting(font, hinting.cint)
  
  var
    textureWidth: int
    textureHeight: int

  (textureWidth, textureHeight) = generateTextureDimensions(totalChars, rectSides) 

  var compositeSurface = createRGBSurface(0, textureWidth.cint, textureHeight.cint, 24, rMask, gMask, bMask, aMask)
  
  result.numColumns = textureWidth div rectSides
  result.numRows = textureHeight div rectSides
  result.texPtrWidth = textureWidth
  result.texPtrHeight = textureHeight
  
  
  var i = asciiStartCharNum
  for y in 0..<result.numRows:
    for x in 0..<result.numColumns:
      if i <= asciiEndCharNum:
        let textSurface = renderGlyphBlended(font, i.uint16, whiteColour)

        
        if textSurface.isNil:
          echo "even here?!"
          # TODO: better error handling
      
        var
          minX: cint
          maxX: cint
          minY: cint
          maxY: cint
          advance: cint
          dstRect: Rect
        
        discard glyphMetrics(font, i.uint16, minX.addr, maxX.addr, minY.addr, maxY.addr, advance.addr)
        if minX == 0 and maxX == 0:
          dstRect.x = (x * rectSides).cint
        else: 
          dstRect.x = ((x * rectSides) + (rectSides / 2).int - ((minX + maxX) / 2).int).cint
        dstRect.y = (y * rectSides).cint 
        dstRect.w = textSurface.w
        dstRect.h = textSurface.h
        blitSurface(textSurface, nil, compositeSurface, dstRect.addr)
        if compositeSurface.isNil:
          echo "wtf!!"
          # TODO: better error handling
        
        i.inc
        freeSurface(textSurface)
      else:
        break
    if i > asciiEndCharNum:    
      break
      
  
  let fontTexPtr = createTextureFromSurface(renderer, compositeSurface)
  if fontTexPtr.isNil:
    echo "here too!"
  result.fontTexPtr = fontTexPtr
  result.fontSideLength = rectSides
  result.startingAsciiNum = asciiStartCharNum

  freeSurface(compositeSurface)

  close(font)
  return result







