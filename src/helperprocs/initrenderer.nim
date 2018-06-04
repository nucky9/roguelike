import
  sdl2,
  sdl2.image,
  sdl2.ttf,
  errorhandling
  
proc initRenderer*(screenWidth, screenHeight: cint): (WindowPtr, RendererPtr) =

  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "sdl2.init failed"

  var window = createWindow("SpaceRL", 100, 100, screenWidth, screenHeight, SDL_WINDOW_SHOWN)
  sdlFailIf(window.isNil):
    "createWindow failed"
  
  var renderer = window.createRenderer(-1, (Renderer_Accelerated or Renderer_PresentVsync))
  
  sdlFailIf(renderer.isNil): "Renderer could not be created"
  discard sdl2.setHint("SDL_HINT_RENDER_SCALE_QUALITY", "1")

  sdlFailIf(image.init(IMG_INIT_PNG) != IMG_INIT_PNG):
    "SDL2 Image initialization failed"  
  
  # init sdl2.TTF 
  sdlFailIf(ttfInit() == SdlError): "SDL2 TTF initialization failed"

  return (window, renderer)


