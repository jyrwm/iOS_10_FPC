{ Parsed from Photos.framework PHAssetCreationRequest.h }

{$ifdef TYPES}
type
  PHAssetResourceCreationOptionsPtr = ^PHAssetResourceCreationOptions;
  PHAssetCreationRequestPtr = ^PHAssetCreationRequest;
{$endif}

{$ifdef CLASSES}

type
  PHAssetResourceCreationOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setOriginalFilename(newValue: NSString); message 'setOriginalFilename:';
    function originalFilename: NSString; message 'originalFilename';
    procedure setUniformTypeIdentifier(newValue: NSString); message 'setUniformTypeIdentifier:';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    procedure setShouldMoveFile(newValue: boolean); message 'setShouldMoveFile:';
    function shouldMoveFile: boolean; message 'shouldMoveFile';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHAssetCreationRequest = objcclass external (PHAssetChangeRequest)
  public
    class function creationRequestForAsset: instancetype; message 'creationRequestForAsset';
    class function supportsAssetResourceTypes (types: NSNumber *ProtocolPtr): boolean; message 'supportsAssetResourceTypes:';
    procedure addResourceWithType_fileURL_options (type_: PHAssetResourceType; fileURL: NSURL; options: nullable PHAssetResourceCreationOptionsPtr); message 'addResourceWithType:fileURL:options:';
    procedure addResourceWithType_data_options (type_: PHAssetResourceType; data: NSData; options: nullable PHAssetResourceCreationOptionsPtr); message 'addResourceWithType:data:options:';
  end;
{$endif}

