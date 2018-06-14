import
  strutils

type
  SDLException* = object of Exception
  GeneralException* = object of Exception

template sdlFailIf*(cond: typed, error: string) =
  if cond: 
    raise SDLException.newException(error & ", SDL error: " & $getError())

template newError*(cond: bool, error: string) =
  let programPos = instantiationInfo()
  if cond: 
    raise GeneralException.newException("Error at $1:$2 with '$3'" % [programPos.filename, $programPos.line, error])
