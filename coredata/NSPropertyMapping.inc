{ Parsed from CoreData.framework NSPropertyMapping.h }

{$ifdef TYPES}
type
  NSPropertyMappingPtr = ^NSPropertyMapping;
{$endif}

{$ifdef CLASSES}

type
  NSPropertyMapping = objcclass external (NSObject)
  private
    {$if (not defined(__OBJC2__))}
    _reserved: pointer;
    _transformValidations: NSArray;
    _propertyTransforms: NSArray;
    _name: NSString;
    _valueExpression: NSExpression;
    _userInfo: NSDictionary;
    __propertyMappingFlags: bitpacked record
      case byte of
        0: (_anonBitField___propertyMappingFlags0: cuint);
        1: (
          _isInUse: 0..1;
          _reservedPropertyMapping: 0..((1 shl 31)-1);
        );
      end;
    {$endif}
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setValueExpression(newValue: NSExpression); message 'setValueExpression:';
    function valueExpression: NSExpression; message 'valueExpression';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
  end;
{$endif}
