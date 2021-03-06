{ Parsed from QuartzCore.framework CALayer.h }

{$ifdef TYPES}
type
  CALayerPtr = ^CALayer;
  CAActionProtocolPtr = ^CAActionProtocol;
  CALayerDelegateProtocolPtr = ^CALayerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CAEdgeAntialiasingMask = cuint;
  CAEdgeAntialiasingMaskPtr = ^CAEdgeAntialiasingMask;

const
  kCALayerLeftEdge = 1 shl 0;
  kCALayerRightEdge = 1 shl 1;
  kCALayerBottomEdge = 1 shl 2;
  kCALayerTopEdge = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CALayer = objcclass external (NSObject, NSCodingProtocol, CAMediaTimingProtocol)
  private
    _CALayerIvars: record
      refcount: cint32;
      magic: cuint32;
      layer_: pointer;
      {$if defined(TARGET_OS_MAC) and not defined(TARGET_RT_64_BIT)}
      unused1:array[0..7] of pointer;
      {$endif}
    end;
  public
    class function layer: instancetype; message 'layer';
    function init: instancetype; message 'init';
    function initWithLayer (layer_: id): instancetype; message 'initWithLayer:';
    function presentationLayer: instancetype; message 'presentationLayer';
    function modelLayer: instancetype; message 'modelLayer';
    class function defaultValueForKey (key: NSString): id; message 'defaultValueForKey:';
    class function needsDisplayForKey (key: NSString): boolean; message 'needsDisplayForKey:';
    function shouldArchiveValueForKey (key: NSString): boolean; message 'shouldArchiveValueForKey:';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setPosition(newValue: CGPoint); message 'setPosition:';
    function position: CGPoint; message 'position';
    procedure setZPosition(newValue: CGFloat); message 'setZPosition:';
    function zPosition: CGFloat; message 'zPosition';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setAnchorPointZ(newValue: CGFloat); message 'setAnchorPointZ:';
    function anchorPointZ: CGFloat; message 'anchorPointZ';
    procedure setTransform(newValue: CATransform3D); message 'setTransform:';
    function transform: CATransform3D; message 'transform';
    function affineTransform: CGAffineTransform; message 'affineTransform';
    procedure setAffineTransform (m: CGAffineTransform); message 'setAffineTransform:';
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setDoubleSided(newValue: boolean); message 'setDoubleSided:';
    function isDoubleSided: boolean; message 'isDoubleSided';
    procedure setGeometryFlipped(newValue: boolean); message 'setGeometryFlipped:';
    function isGeometryFlipped: boolean; message 'isGeometryFlipped';
    function contentsAreFlipped: boolean; message 'contentsAreFlipped';
    function superlayer: CALayer; message 'superlayer';
    procedure removeFromSuperlayer; message 'removeFromSuperlayer';
    procedure setSublayers(newValue: CALayer *ProtocolPtr); message 'setSublayers:';
    function sublayers: CALayer *ProtocolPtr; message 'sublayers';
    procedure addSublayer (layer_: CALayer); message 'addSublayer:';
    procedure insertSublayer_atIndex (layer_: CALayer; idx: cuint); message 'insertSublayer:atIndex:';
    procedure insertSublayer_below (layer_: CALayer; sibling:  CALayerPtr); message 'insertSublayer:below:';
    procedure insertSublayer_above (layer_: CALayer; sibling:  CALayerPtr); message 'insertSublayer:above:';
    procedure replaceSublayer_with (layer_: CALayer; layer2: CALayer); message 'replaceSublayer:with:';
    procedure setSublayerTransform(newValue: CATransform3D); message 'setSublayerTransform:';
    function sublayerTransform: CATransform3D; message 'sublayerTransform';
    procedure setMask(newValue: CALayer); message 'setMask:';
    function mask: CALayer; message 'mask';
    procedure setMasksToBounds(newValue: boolean); message 'setMasksToBounds:';
    function masksToBounds: boolean; message 'masksToBounds';
    function convertPoint_fromLayer (p: CGPoint; l:  CALayerPtr): CGPoint; message 'convertPoint:fromLayer:';
    function convertPoint_toLayer (p: CGPoint; l: CALayerPtr): CGPoint; message 'convertPoint:toLayer:';
    function convertRect_fromLayer (r: CGRect; l:  CALayerPtr): CGRect; message 'convertRect:fromLayer:';
    function convertRect_toLayer (r: CGRect; l:  CALayerPtr): CGRect; message 'convertRect:toLayer:';
    function convertTime_fromLayer (t: CFTimeInterval; l:  CALayerPtr): CFTimeInterval; message 'convertTime:fromLayer:';
    function convertTime_toLayer (t: CFTimeInterval; l:  CALayerPtr): CFTimeInterval; message 'convertTime:toLayer:';
    function hitTest (p: CGPoint):  CALayerPtr; message 'hitTest:';
    function containsPoint (p: CGPoint): boolean; message 'containsPoint:';
    procedure setContents(newValue: id); message 'setContents:';
    function contents: id; message 'contents';
    procedure setContentsRect(newValue: CGRect); message 'setContentsRect:';
    function contentsRect: CGRect; message 'contentsRect';
    procedure setContentsGravity(newValue: NSString); message 'setContentsGravity:';
    function contentsGravity: NSString; message 'contentsGravity';
    procedure setContentsScale(newValue: CGFloat); message 'setContentsScale:';
    function contentsScale: CGFloat; message 'contentsScale';
    procedure setContentsCenter(newValue: CGRect); message 'setContentsCenter:';
    function contentsCenter: CGRect; message 'contentsCenter';
    procedure setContentsFormat(newValue: NSString); message 'setContentsFormat:';
    function contentsFormat: NSString; message 'contentsFormat';
    procedure setMinificationFilter(newValue: NSString); message 'setMinificationFilter:';
    function minificationFilter: NSString; message 'minificationFilter';
    procedure setMagnificationFilter(newValue: NSString); message 'setMagnificationFilter:';
    function magnificationFilter: NSString; message 'magnificationFilter';
    procedure setMinificationFilterBias(newValue: single); message 'setMinificationFilterBias:';
    function minificationFilterBias: single; message 'minificationFilterBias';
    procedure setOpaque(newValue: boolean); message 'setOpaque:';
    function isOpaque: boolean; message 'isOpaque';
    procedure display; message 'display';
    procedure setNeedsDisplay; message 'setNeedsDisplay';
    procedure setNeedsDisplayInRect (r: CGRect); message 'setNeedsDisplayInRect:';
    function needsDisplay: boolean; message 'needsDisplay';
    procedure displayIfNeeded; message 'displayIfNeeded';
    procedure setNeedsDisplayOnBoundsChange(newValue: boolean); message 'setNeedsDisplayOnBoundsChange:';
    function needsDisplayOnBoundsChange: boolean; message 'needsDisplayOnBoundsChange';
    procedure setDrawsAsynchronously(newValue: boolean); message 'setDrawsAsynchronously:';
    function drawsAsynchronously: boolean; message 'drawsAsynchronously';
    procedure drawInContext (ctx: CGContextRef); message 'drawInContext:';
    procedure renderInContext (ctx: CGContextRef); message 'renderInContext:';
    procedure setEdgeAntialiasingMask(newValue: CAEdgeAntialiasingMask); message 'setEdgeAntialiasingMask:';
    function edgeAntialiasingMask: CAEdgeAntialiasingMask; message 'edgeAntialiasingMask';
    procedure setAllowsEdgeAntialiasing(newValue: boolean); message 'setAllowsEdgeAntialiasing:';
    function allowsEdgeAntialiasing: boolean; message 'allowsEdgeAntialiasing';
    procedure setBackgroundColor(newValue: CGColorRef); message 'setBackgroundColor:';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    procedure setCornerRadius(newValue: CGFloat); message 'setCornerRadius:';
    function cornerRadius: CGFloat; message 'cornerRadius';
    procedure setBorderWidth(newValue: CGFloat); message 'setBorderWidth:';
    function borderWidth: CGFloat; message 'borderWidth';
    procedure setBorderColor(newValue: CGColorRef); message 'setBorderColor:';
    function borderColor: CGColorRef; message 'borderColor';
    procedure setOpacity(newValue: single); message 'setOpacity:';
    function opacity: single; message 'opacity';
    procedure setAllowsGroupOpacity(newValue: boolean); message 'setAllowsGroupOpacity:';
    function allowsGroupOpacity: boolean; message 'allowsGroupOpacity';
    procedure setCompositingFilter(newValue: id); message 'setCompositingFilter:';
    function compositingFilter: id; message 'compositingFilter';
    procedure setFilters(newValue: NSArray); message 'setFilters:';
    function filters: NSArray; message 'filters';
    procedure setBackgroundFilters(newValue: NSArray); message 'setBackgroundFilters:';
    function backgroundFilters: NSArray; message 'backgroundFilters';
    procedure setShouldRasterize(newValue: boolean); message 'setShouldRasterize:';
    function shouldRasterize: boolean; message 'shouldRasterize';
    procedure setRasterizationScale(newValue: CGFloat); message 'setRasterizationScale:';
    function rasterizationScale: CGFloat; message 'rasterizationScale';
    procedure setShadowColor(newValue: CGColorRef); message 'setShadowColor:';
    function shadowColor: CGColorRef; message 'shadowColor';
    procedure setShadowOpacity(newValue: single); message 'setShadowOpacity:';
    function shadowOpacity: single; message 'shadowOpacity';
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setShadowRadius(newValue: CGFloat); message 'setShadowRadius:';
    function shadowRadius: CGFloat; message 'shadowRadius';
    procedure setShadowPath(newValue: CGPathRef); message 'setShadowPath:';
    function shadowPath: CGPathRef; message 'shadowPath';
    function preferredFrameSize: CGSize; message 'preferredFrameSize';
    procedure setNeedsLayout; message 'setNeedsLayout';
    function needsLayout: boolean; message 'needsLayout';
    procedure layoutIfNeeded; message 'layoutIfNeeded';
    procedure layoutSublayers; message 'layoutSublayers';
    class function defaultActionForKey (event: NSString):  CAActionProtocol; message 'defaultActionForKey:';
    function actionForKey (event: NSString):  CAActionProtocol; message 'actionForKey:';
    procedure setActions(newValue: NSDictionary>Ptr); message 'setActions:';
    function actions: NSDictionary>Ptr; message 'actions';
    procedure addAnimation_forKey (anim: CAAnimation; key:  NSStringPtr); message 'addAnimation:forKey:';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    function animationKeys:  NSString *ProtocolPtr; message 'animationKeys';
    function animationForKey (key: NSString):  CAAnimationPtr; message 'animationForKey:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setDelegate(newValue: CALayerDelegateProtocol); message 'setDelegate:';
    function delegate: CALayerDelegateProtocol; message 'delegate';
    procedure setStyle(newValue: NSDictionary); message 'setStyle:';
    function style: NSDictionary; message 'style';

    { Adopted protocols }
    procedure setAutoreverses(newValue: boolean); message 'setAutoreverses:';
    function autoreverses: boolean; message 'autoreverses';
    procedure setBeginTime(newValue: CFTimeInterval); message 'setBeginTime:';
    function beginTime: CFTimeInterval; message 'beginTime';
    procedure setDuration(newValue: CFTimeInterval); message 'setDuration:';
    function duration: CFTimeInterval; message 'duration';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure setFillMode(newValue: NSString); message 'setFillMode:';
    function fillMode: NSString; message 'fillMode';
    function initWithCoder (aDecoder: NSCoder):  instancetype; message 'initWithCoder:';
    procedure setRepeatCount(newValue: single); message 'setRepeatCount:';
    function repeatCount: single; message 'repeatCount';
    procedure setRepeatDuration(newValue: CFTimeInterval); message 'setRepeatDuration:';
    function repeatDuration: CFTimeInterval; message 'repeatDuration';
    procedure setSpeed(newValue: single); message 'setSpeed:';
    function speed: single; message 'speed';
    procedure setTimeOffset(newValue: CFTimeInterval); message 'setTimeOffset:';
    function timeOffset: CFTimeInterval; message 'timeOffset';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CAActionProtocol = objcprotocol external name 'CAAction'
    procedure runActionForKey_object_arguments (event: NSString; anObject: id; dict:  NSDictionaryPtr); message 'runActionForKey:object:arguments:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAActionAdditions = objccategory external (NSNull)
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CALayerDelegateProtocol = objcprotocol external name 'CALayerDelegate' (NSObjectProtocol)
  optional
    procedure displayLayer (layer: CALayer); message 'displayLayer:';
    procedure drawLayer_inContext (layer: CALayer; ctx: CGContextRef); message 'drawLayer:inContext:';
    procedure layerWillDraw (layer: CALayer); message 'layerWillDraw:'; { available starting in 10.12, 10.0, 10.0, 3.0 }
    procedure layoutSublayersOfLayer (layer: CALayer); message 'layoutSublayersOfLayer:';
    function actionForLayer_forKey (layer: CALayer; event: NSString):  CAActionProtocol; message 'actionForLayer:forKey:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAGravityCenter: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityTop: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityBottom: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityLeft: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityRight: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityTopLeft: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityTopRight: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityBottomLeft: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityBottomRight: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityResize: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityResizeAspect: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAGravityResizeAspectFill: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAContentsFormatRGBA8Uint: NSString; cvar; external;
  kCAContentsFormatRGBA16Float: NSString; cvar; external;
  kCAContentsFormatGray8Uint: NSString; cvar; external;
  kCAFilterNearest: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAFilterLinear: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAFilterTrilinear: NSString { available starting in 10.6, 3.0, 9.0, 2.0 }; cvar; external;
  kCAOnOrderIn: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAOnOrderOut: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransition: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
{$endif}

