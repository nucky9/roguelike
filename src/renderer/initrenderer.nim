import
  sdl2,
  sdl2.image,
  sdl2.ttf,
  math,
  renderer,
  fontbitmap,
  sdlerrorhandling,
  /types/maptypes

const
  defaultCellNum: Vector2 = (32, 24)
  defaultResolution: Vector2 = (640, 480)
  defaultCellSize: Vector2 = (20, 20)

proc initRenderer*(title: string, resolution: tuple[x, y:int]): (WindowPtr, RendererPtr) =

  let 
    screenWidth = resolution.x.cint
    screenHeight = resolution.y.cint

  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "sdl2.init failed"

  var window = createWindow(title, 100, 100, screenWidth, screenHeight, SDL_WINDOW_SHOWN)
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

proc calculateScreenProperties(cellNum, cellSize, resolution: Vector2): (Vector2, Vector2, Vector2, int) =
  # TODO: log errors
  var
    calculateCellNum = false
    calculateCellSize = false  
    calculateResolution = false
    returnCode = 0

  if cellNum == (0, 0):
    calculateCellNum = true
  if cellSize == (0, 0):
      calculateCellSize = true
  if resolution == (0, 0):
    calculateResolution = true
  
  var
    cellNumCalc = cellNum
    cellSizeCalc = cellSize
    resolutionCalc = resolution
  
  # No parameters supplied
  if calculateCellNum and calculateCellSize and calculateResolution:
    cellNumCalc = cellNum
    resolutionCalc = cellSize
    cellSizeCalc = resolution
    returnCode = 0

  # cellSize and resolution supplied
  elif calculateCellNum and not calculateCellSize and not calculateResolution:
    if resolution.x / cellSize.x mod 1 != 0 or resolution.y / cellSize.y mod 1 != 0:
      # TODO: Error handling
      echo "error, invalid cell size/resolution!"
      returnCode = -1
    else:
        cellNumCalc.x = resolution.x div cellSize.x
        cellNumCalc.y = resolution.y div cellSize.y
        returnCode = 0
  
  # cellNum and resolution supplied
  elif not calculateCellNum and calculateCellSize and not calculateResolution:
    if resolution.x / cellNum.x mod 1 != 0 or resolution.y / cellNum.y mod 1 != 0:
      echo "error, invalid cell size"
      returnCode = -1
    else:
      cellSizeCalc.x = resolution.x div cellNum.x
      cellSizeCalc.y = resolution.y div cellNum.y
      returnCode = 0

  # cellNum and cellSize provided    
  elif not calculateCellNum and not calculateCellSize and calculateResolution:
    resolutionCalc = (cellNum.x * cellSize.x, cellNum.y * cellSize.y)
    if resolutionCalc.x == 0 or resolutionCalc.y == 0:
    # TODO: error
      echo "error, invalid resolution"
      resolutionCalc = defaultResolution
      returnCode = -1
    
  # resolution provided, calculate cellNum based on default cellSize  
  elif calculateCellNum and calculateCellSize:
    if resolution.x / defaultCellSize.x mod 1 != 0 or resolution.y / defaultCellSize.y mod 1 != 0:
      echo "error, invalid cell size/resolution!"
      returnCode = -1
    else:
      cellNumCalc.x = resolution.x div defaultCellSize.x
      cellNumCalc.y = resolution.y div defaultCellSize.y
      cellSizeCalc = defaultCellSize
      returnCode = 0

  # cellNum provided, calculate cellSize based on default resolution
  elif calculateCellSize and calculateResolution:
    if defaultResolution.x / cellNum.x mod 1 != 0 or defaultResolution.y / cellNum.y mod 1 != 0:
      echo "error, invalid cell size"
      returnCode = -1
    else:
      cellSizeCalc.x = defaultResolution.x div cellNum.x
      cellSizeCalc.y = defaultResolution.y div cellNum.y
      resolutionCalc = defaultResolution
      returnCode = 0
      
  # cellSize provided, calculate cellNum based on default resolution
  elif calculateCellNum and calculateResolution:
    if defaultResolution.x / cellSize.x mod 1 != 0 or defaultResolution.y / cellSize.y mod 1 != 0:
      echo "error, invalid cell size"
      returnCode = -1
    else:
      cellNumCalc.x = defaultResolution.x div cellSize.x
      cellNumCalc.y = defaultResolution.y div cellSize.y
      resolutionCalc = defaultResolution
      returnCode = 0

  if returnCode == -1:
    cellNumCalc = defaultCellNum
    resolutionCalc = defaultResolution
    cellSizeCalc = defaultCellSize

  return (cellNumCalc, cellSizeCalc, resolutionCalc, returnCode)

proc initializeGraphics*(title: string, resolution: Vector2):int =
  let (mainWindow, mainRenderer) = initRenderer(title, resolution)
  setWindowRenderer(mainWindow, mainRenderer) 
  if mainWindow.isNil or mainRenderer.isNil:
    return -1
  else:
    return 0 


proc initScreen*(cellNum: Vector2 = (0, 0), cellSz: Vector2 = (0, 0), res: Vector2 = (0, 0), title: string): int  =
  let (cellNumber, cellSize, resolution, errorCode) = calculateScreenProperties(cellNum, cellSz, res)
  if initializeGraphics(title, resolution) != 0:
    # TODO: handle error
    discard
  setCellProperties(cellNumber, cellSize)
  initFontToBitmap(getRenderer())
  # TODO: Deal with error code