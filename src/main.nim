import
  sdl2,
  sdl2.ttf,
  input,
  /fontprocs/fontbitmap,
  /fontprocs/renderchar,
  /helperprocs/initrenderer,
  /types/interfacetypes



let (window, renderer) = initRenderer(1280, 960)
let testFont = fontBitmapByFontSize(renderer, "../assets/fonts/Days.ttf", 12, TTF_HINTING_LIGHT)
let cellWidth = testFont.fontSideLength
let cellHeight = testFont.fontSideLength

setCellSize(cellWidth, cellHeight)

renderer.clear()
var rect: Rect
rect.x = 0
rect.y = 0
rect.w = testFont.texPtrWidth.cint
rect.h = testFont.texPtrHeight.cint

# renderer.copy(testFont.fontTexPtr, nil, rect.addr)
# renderer.renderChar(testFont, 20, 60, 55)
# renderer.renderChar(testFont, 0 + testFont.fontSideLength, 20, 'b')
# renderer.clear()

var x = 1
var y = 1
for i in 32..126:
  echo renderCharToCell(renderer, testfont, x, y, i)
  x += 1
  if x == 10:
    x = 1
    y.inc
    
renderer.present()

while true:
  let input = getInput()
  if input.keyReleased == SDL_SCANCODE_ESCAPE:
    quit(0)



