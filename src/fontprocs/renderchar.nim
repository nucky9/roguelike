import
  sdl2,
  ../types/fonttypes

proc renderChar*(renderer: RendererPtr, font: BitMappedFont, x, y: int, character: char) =
  var column: int

  let
    charNum = character.int - font.startingAsciiNum
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

proc renderChar*(renderer: RendererPtr, font: BitMappedFont, x, y: int, charIndex: int) =
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

  echo font.fontSideLength

  renderer.copy(font.fontTexPtr, srcRect.addr, dstRect.addr)