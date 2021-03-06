{ Parsed from WebKit.framework WKPreviewElementInfo.h }

{$ifdef TYPES}
type
  WKPreviewElementInfoPtr = ^WKPreviewElementInfo;
{$endif}

{$if defined(WK_API_ENABLED) and defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKPreviewElementInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function linkURL: NSURL; message 'linkURL';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
