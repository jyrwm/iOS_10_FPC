{ Parsed from CoreImage.framework CIImageProvider.h }
{$ifdef CLASSES}

type
  CIImage_CIImageProvider = objccategory external name 'CIImageProvider' (CIImage)
    class function imageWithImageProvider_size_format_colorSpace_options (p: id; width: size_t; f: CIFormat; cs: nullable CGColorSpaceRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithImageProvider:size:format:colorSpace:options:'; { available in 10_4, 9_0 }
    function initWithImageProvider_size_format_colorSpace_options (p: id; width: size_t; f: CIFormat; cs: nullable CGColorSpaceRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithImageProvider:size:format:colorSpace:options:'; { available in 10_4, 9_0 }
  end;

type
  CIImageProvider = objccategory external (NSObject)
    procedure provideImageData_bytesPerRow_origin_size_userInfo (data: pointer; rowbytes: size_t; x: size_t; width: size_t; info: nullable id); message 'provideImageData:bytesPerRow:origin:size:userInfo:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIImageProviderTileSize: NSString { available in 10_4, 9_0 }; cvar; external;
  kCIImageProviderUserInfo: NSString { available in 10_4, 9_0 }; cvar; external;
{$endif}

