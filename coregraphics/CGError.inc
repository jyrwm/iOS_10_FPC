{ Parsed from CoreGraphics.framework CGError.h }

{$ifndef CGERROR_H_}
{$ifdef TYPES}
type
  CGError = cint32;
  CGErrorPtr = ^CGError;

const
  kCGErrorSuccess = 0;
  kCGErrorFailure = 1000;
  kCGErrorIllegalArgument = 1001;
  kCGErrorInvalidConnection = 1002;
  kCGErrorInvalidContext = 1003;
  kCGErrorCannotComplete = 1004;
  kCGErrorNotImplemented = 1006;
  kCGErrorRangeCheck = 1007;
  kCGErrorTypeCheck = 1008;
  kCGErrorInvalidOperation = 1010;
  kCGErrorNoneAvailable = 1011;
{$endif}

{$endif}
