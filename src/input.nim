import
  sdl2,
  /types/interfacetypes

var uiState: UIState

proc getInput*(): UIState =
  var
    event = sdl2.defaultEvent
    uiState: UIState
 
  while (pollEvent(event)):
    case (event.kind)
      of sdl2.MouseMotion:
        uiState.mouseDrag.x = event.motion.xrel
        uiState.mouseDrag.y = event.motion.yrel

      of sdl2.KeyUp:
        uiState.keyReleased = event.key.keysym.scancode
      
      of sdl2.MouseButtonDown:
        if event.button.button == sdl2.ButtonLeft:
          uiState.leftMouseDown = true
        elif event.button.button == sdl2.ButtonMiddle:
          uiState.middleMouseDown = true
        elif event.button.button == sdl2.ButtonRight:
          uiState.rightMouseDown = true

      of sdl2.MouseButtonUp:
        if event.button.button == sdl2.ButtonLeft:
          uiState.leftMouseUp = true
        elif event.button.button == sdl2.ButtonMiddle:
          uiState.middleMouseUp = true
        elif event.button.button == sdl2.ButtonRight:
          uiState.rightMouseUp = true
        
        if event.button.clicks == 2:
          uiState.doubleClick = true

      of QuitEvent:
        quit(0) 
      
      else:
        discard    
    
  discard sdl2.getMouseState(uiState.mouseCoords.x, uiState.mouseCoords.y)

  return uiState