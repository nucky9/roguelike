import
  sdl2,
  sdl2.ttf,
  sdl2.image,
  math,
  /renderer/renderer,
  /renderer/initrenderer,
  /renderer/fontbitmap,
  /renderer/types/maptypes
  


proc initGame*() =  
  let fontFile = "../assets/fonts/Days.ttf"

  discard initScreen(cellSz = (20, 20), res = (960, 480), title = "RogueLike")
  let Days20WhiteBMP = fontBitmapC(fontFile, 20)

