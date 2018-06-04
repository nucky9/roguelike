import
  sdl2,
  input,
  /fontprocs/fontbitmap,
  /fontprocs/renderchar,
  /helperprocs/initrenderer,
  /types/interfacetypes



let (window, renderer) = initRenderer(1280, 960)
let testFont = sizedTTFToBitMap(renderer, "../assets/fonts/Days.ttf", 12)

renderer.clear()
var rect: Rect
rect.x = 0
rect.y = 0
rect.w = testFont.texPtrWidth.cint
rect.h = testFont.texPtrHeight.cint

renderer.copy(testFont.fontTexPtr, nil, rect.addr)
# renderer.renderChar(testFont, 20, 60, 55)
# renderer.renderChar(testFont, 0 + testFont.fontSideLength, 20, 'b')
# renderer.clear()

var x = 10
for i in 32..126:
  renderString("../assets/fonts/OxygenMono-Regular.ttf", 8,renderer, i.char, x)
  x += 10
renderer.present()

while true:
  let input = getInput()
  if input.keyReleased == SDL_SCANCODE_ESCAPE:
    quit(0)



