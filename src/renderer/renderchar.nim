import
  sdl2,
  /types/fonttypes

var
  cellWidth: int = 0
  cellHeight: int = 0
  cellSizeSet = false

# proc setCellSize*(w, h: int) =
#   ## Sets the dimensions of a single cell, so that chars can be rendered to a cell.
#   ## Note: If the size of the cell matches the size of the bitmapped chars, then the char will be placed in the centre of the cell. 
#   cellWidth = w
#   cellHeight = h
#   cellSizeSet = true


proc renderCharToPixel*(renderer: RendererPtr, font: BitMappedFont, x, y: int, charIndex: int) =
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
  dstRect.x = x.cint
  dstRect.y = y.cint
  dstRect.w = font.fontSideLength.cint
  dstRect.h = font.fontSideLength.cint


  renderer.copy(font.fontTexPtr, srcRect.addr, dstRect.addr)
   

proc renderCharToPixel*(renderer: RendererPtr, font: BitMappedFont, x, y: int, character: char) =
  ## Renders the given char from the font bitmap to a pixel coordinate.
  renderCharToPixel(renderer, font, x, y, character.int)

  
proc renderCharToCell*(renderer: RendererPtr, font: BitMappedFont, cellX, cellY: int, charIndex: int): int =
  ## Renders the given char (referenced by ascii index) from the font bitmap to a cell coordinate.
  let
    pixelX = cellX * cellWidth
    pixelY = cellY * cellHeight
  
  if cellSizeSet:
    renderCharToPixel(renderer, font, pixelX, pixelY, charIndex)
    return 1
  else:
    return 0


proc renderCharToCell*(renderer: RendererPtr, font: BitMappedFont, cellX, cellY: int, character: char):int =
  ## Renders the given char from the font bitmap to a cell coordinate.
  return renderCharToCell(renderer, font, cellX, cellY, character.int)
