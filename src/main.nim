import
  sdl2,
  input,
  initgame,
  /renderer/renderer,
  /renderer/fontbitmap,
  /renderer/consts/colours,
  /types/interfacetypes

initGame()
let fontFile = "../assets/fonts/Days.ttf"
let Days20WhiteBMP = fontBitmapC(fontFile, 20)
let Days20RedBMP = fontBitmapC(fontFile, 20, red)



while true:
  let input = getInput()
  if input.keyReleased == SDL_SCANCODE_ESCAPE:
    quit(0)
    
  testRender(Days20WhiteBMP, Days20RedBMP)


