import
  sdl2,
  /types/maptypes,
  /types/fonttypes


var
  mainWindow: WindowPtr
  mainRenderer: RendererPtr

  cellNumber: Vector2
  cellSize: Vector2

#region Getters and Setters
proc setCellProperties*(cellNum, cellSz: Vector2) =
  cellNumber = cellNum
  cellSize = cellSz

proc getRenderer*(): RendererPtr =
  return mainRenderer

proc setWindowRenderer*(wnd: WindowPtr, rend: RendererPtr) =
  mainWindow = wnd
  mainRenderer = rend
#endregion

#region Render Chars
proc renderCharToPixel*(font: BitMappedFont, coords: Vector2, charIndex: int) =
  ## Renders the given char (referenced by ascii index) from the font bitmap to a pixel coordinate.
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
  dstRect.x = coords.x.cint
  dstRect.y = coords.y.cint
  dstRect.w = font.fontSideLength.cint
  dstRect.h = font.fontSideLength.cint


  mainRenderer.copy(font.fontTexPtr, srcRect.addr, dstRect.addr)
   

proc renderCharToPixel*(renderer: RendererPtr, font: BitMappedFont, coords: Vector2, character: char) =
  ## Renders the given char from the font bitmap to a pixel coordinate.
  renderCharToPixel(font, coords, character.int)

  
proc renderCharToCell*(font: BitMappedFont, pixCoords: Vector2, charIndex: int) =
  ## Renders the given char (referenced by ascii index) from the font bitmap to a cell coordinate.
  let
    pixelX = pixCoords.x * cellSize.x
    pixelY = pixCoords.y * cellSize.y
  
    pixelCoords: Vector2 = (pixelX, pixelY)
  
  renderCharToPixel(font, pixelCoords, charIndex)


proc renderCharToCell*(font: BitMappedFont, pixelCoords: Vector2, character: char) =
  ## Renders the given char from the font bitmap to a cell coordinate.
  renderCharToCell(font, pixelCoords, character.int)

#endregion

proc testRender*(font1, font2: BitmappedFont) =
  mainRenderer.clear()
  renderCharToCell(font1, (20, 20), '@')
  renderCharToCell(font2, (10, 10), '@')
  for i in 0..<50:
    renderCharToCell(font1, (i, 0), '#')

  mainRenderer.present()
