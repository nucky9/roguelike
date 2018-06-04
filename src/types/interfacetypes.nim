import
  sdl2

type
  UIState* = object
    mouseCoords*: tuple[x, y: int32]
    mouseDrag*: tuple[x, y: int32]
    leftMouseDown*: bool
    middleMouseDown*: bool
    rightMouseDown*: bool
    leftMouseUp*: bool
    middleMouseUp*: bool
    rightMouseUp*: bool
    doubleClick*: bool
    mouseWheelDelta*: int
    keyReleased*: Scancode


