{ Parsed from GameplayKit.framework GKPath.h }

{ Types from GKPath }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKPathPtr = ^GKPath;
{$endif}

{$ifdef CLASSES}

type
  GKPath = objcclass external (NSObject)
  public
    procedure setRadius(newValue: single); message 'setRadius:';
    function radius: single; message 'radius';
    function numPoints: NSUInteger; message 'numPoints';
    procedure setCyclical(newValue: boolean); message 'setCyclical:';
    function isCyclical: boolean; message 'isCyclical';
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    class function pathWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'pathWithPoints:count:radius:cyclical:';
    function initWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'initWithPoints:count:radius:cyclical:';
    class function pathWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'pathWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    function initWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'initWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    {$else}
    class function pathWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'pathWithPoints:count:radius:cyclical:';
    function initWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'initWithPoints:count:radius:cyclical:';
    class function pathWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'pathWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    function initWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: boolean): instancetype; message 'initWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    {$endif}
    class function pathWithGraphNodes_radius (graphNodes: GKGraphNode*ProtocolPtr; radius_: single): instancetype; message 'pathWithGraphNodes:radius:';
    function initWithGraphNodes_radius (graphNodes: GKGraphNode*ProtocolPtr; radius_: single): instancetype; message 'initWithGraphNodes:radius:';
    function pointAtIndex (index: NSUInteger): vector_float2; message 'pointAtIndex:'; deprecated 'in 10_11, 10_12, 9_0, 10_0';
    function float2AtIndex (index: NSUInteger): vector_float2; message 'float2AtIndex:'; { available in 10_12, 10_0 }
    function float3AtIndex (index: NSUInteger): vector_float3; message 'float3AtIndex:'; { available in 10_12, 10_0 }
  end;
{$endif}

