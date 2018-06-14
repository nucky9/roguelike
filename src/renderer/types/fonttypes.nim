import
  sdl2

type
  BitmappedFont* = ref object
    fontSideLength*: int
    startingAsciiNum*: int
    numColumns*: int
    numRows*: int
    texPtrWidth*: int
    texPtrHeight*: int
    fontTexPtr*: TexturePtr