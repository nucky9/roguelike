import
  sdl2,
  ../types/fonttypes

var
  cellWidth: int = 0
  cellHeight: int = 0
  cellSizeSet = false

proc setCellSize*(w, h: int) =
  cellWidth = w
  cellHeight = h
  cellSizeSet = true


proc renderCharToPixel*(renderer: RendererPtr, font: BitMappedFont, x, y: int, charIndex: int) =
  let charNum = charIndex - font.startingAsciiNum
  var column: int

  let
    row = charNum div font.numColumns
  if charNum > font.numColumns:
    column = charNum - (row * font.numColumns)
  else:
    column = charNum
  
  let
    xPos = column * font.fontSideLength
    yPos = row * font.fontSideLength

  var srcRect: Rect
  srcRect.x = xPos.cint
  srcRect.y = yPos.cint
  srcRect.w = font.fontSideLength.cint
  srcRect.h = font.fontSideLength.cint

  var dstRect: Rect
  dstRect.x = x.cint
  dstRect.y = y.cint
  dstRect.w = font.fontSideLength.cint
  dstRect.h = font.fontSideLength.cint


  renderer.copy(font.fontTexPtr, srcRect.addr, dstRect.addr)
   

proc renderCharToPixel*(renderer: RendererPtr, font: BitMappedFont, x, y: int, character: char) =
  renderCharToPixel(renderer, font, x, y, character.int)

  
proc renderCharToCell*(renderer: RendererPtr, font: BitMappedFont, cellX, cellY: int, charIndex: int): int =
  let
    pixelX = cellX * cellWidth
    pixelY = cellY * cellHeight
  
  if cellSizeSet:
    renderCharToPixel(renderer, font, pixelX, pixelY, charIndex)
    return 1
  else:
    return 0


proc renderCharToCell*(renderer: RendererPtr, font: BitMappedFont, cellX, cellY: int, character: char):int =
  return renderCharToCell(renderer, font, cellX, cellY, character.int)
