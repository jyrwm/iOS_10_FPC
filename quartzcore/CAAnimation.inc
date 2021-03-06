{ Parsed from QuartzCore.framework CAAnimation.h }

{$ifdef TYPES}
type
  CAAnimationPtr = ^CAAnimation;
  CAPropertyAnimationPtr = ^CAPropertyAnimation;
  CABasicAnimationPtr = ^CABasicAnimation;
  CAKeyframeAnimationPtr = ^CAKeyframeAnimation;
  CASpringAnimationPtr = ^CASpringAnimation;
  CATransitionPtr = ^CATransition;
  CAAnimationGroupPtr = ^CAAnimationGroup;
  CAAnimationDelegateProtocolPtr = ^CAAnimationDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  CAAnimation = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol, CAMediaTimingProtocol, CAActionProtocol)
  private
    _attr: pointer;
    _flags: cuint32;
  public
    class function animation: instancetype; message 'animation';
    class function defaultValueForKey (key: NSString): nullable id; message 'defaultValueForKey:';
    function shouldArchiveValueForKey (key: NSString): boolean; message 'shouldArchiveValueForKey:';
    procedure setTimingFunction(newValue: CAMediaTimingFunction); message 'setTimingFunction:';
    function timingFunction: CAMediaTimingFunction; message 'timingFunction';
    procedure setDelegate(newValue: CAAnimationDelegateProtocol); message 'setDelegate:';
    function delegate: CAAnimationDelegateProtocol; message 'delegate';
    procedure setRemovedOnCompletion(newValue: boolean); message 'setRemovedOnCompletion:';
    function isRemovedOnCompletion: boolean; message 'isRemovedOnCompletion';

    { Adopted protocols }
    procedure setAutoreverses(newValue: boolean); message 'setAutoreverses:';
    function autoreverses: boolean; message 'autoreverses';
    procedure setBeginTime(newValue: CFTimeInterval); message 'setBeginTime:';
    function beginTime: CFTimeInterval; message 'beginTime';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure setDuration(newValue: CFTimeInterval); message 'setDuration:';
    function duration: CFTimeInterval; message 'duration';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure setFillMode(newValue: NSString); message 'setFillMode:';
    function fillMode: NSString; message 'fillMode';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    procedure setRepeatCount(newValue: single); message 'setRepeatCount:';
    function repeatCount: single; message 'repeatCount';
    procedure setRepeatDuration(newValue: CFTimeInterval); message 'setRepeatDuration:';
    function repeatDuration: CFTimeInterval; message 'repeatDuration';
    procedure runActionForKey_object_arguments (event: NSString; anObject: id; dict: nullable NSDictionaryPtr); message 'runActionForKey:object:arguments:';
    procedure setSpeed(newValue: single); message 'setSpeed:';
    function speed: single; message 'speed';
    procedure setTimeOffset(newValue: CFTimeInterval); message 'setTimeOffset:';
    function timeOffset: CFTimeInterval; message 'timeOffset';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CAAnimationDelegateProtocol = objcprotocol external name 'CAAnimationDelegate' (NSObjectProtocol)
  optional
    procedure animationDidStart (anim: CAAnimation); message 'animationDidStart:';
    procedure animationDidStop_finished (anim: CAAnimation; flag: boolean); message 'animationDidStop:finished:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAPropertyAnimation = objcclass external (CAAnimation)
  public
    class function animationWithKeyPath (path: nullable NSStringPtr): instancetype; message 'animationWithKeyPath:';
    procedure setKeyPath(newValue: NSString); message 'setKeyPath:';
    function keyPath: NSString; message 'keyPath';
    procedure setAdditive(newValue: boolean); message 'setAdditive:';
    function isAdditive: boolean; message 'isAdditive';
    procedure setCumulative(newValue: boolean); message 'setCumulative:';
    function isCumulative: boolean; message 'isCumulative';
    procedure setValueFunction(newValue: CAValueFunction); message 'setValueFunction:';
    function valueFunction: CAValueFunction; message 'valueFunction';
  end;

type
  CABasicAnimation = objcclass external (CAPropertyAnimation)
  public
    procedure setFromValue(newValue: id); message 'setFromValue:';
    function fromValue: id; message 'fromValue';
    procedure setToValue(newValue: id); message 'setToValue:';
    function toValue: id; message 'toValue';
    procedure setByValue(newValue: id); message 'setByValue:';
    function byValue: id; message 'byValue';
  end;

type
  CAKeyframeAnimation = objcclass external (CAPropertyAnimation)
  public
    procedure setValues(newValue: NSArray); message 'setValues:';
    function values: NSArray; message 'values';
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure setKeyTimes(newValue: NSNumber *ProtocolPtr); message 'setKeyTimes:';
    function keyTimes: NSNumber *ProtocolPtr; message 'keyTimes';
    procedure setTimingFunctions(newValue: CAMediaTimingFunction *ProtocolPtr); message 'setTimingFunctions:';
    function timingFunctions: CAMediaTimingFunction *ProtocolPtr; message 'timingFunctions';
    procedure setCalculationMode(newValue: NSString); message 'setCalculationMode:';
    function calculationMode: NSString; message 'calculationMode';
    procedure setTensionValues(newValue: NSNumber *ProtocolPtr); message 'setTensionValues:';
    function tensionValues: NSNumber *ProtocolPtr; message 'tensionValues';
    procedure setContinuityValues(newValue: NSNumber *ProtocolPtr); message 'setContinuityValues:';
    function continuityValues: NSNumber *ProtocolPtr; message 'continuityValues';
    procedure setBiasValues(newValue: NSNumber *ProtocolPtr); message 'setBiasValues:';
    function biasValues: NSNumber *ProtocolPtr; message 'biasValues';
    procedure setRotationMode(newValue: NSString); message 'setRotationMode:';
    function rotationMode: NSString; message 'rotationMode';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAAnimationLinear: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationDiscrete: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationPaced: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationCubic: NSString { available starting in 10.7, 4.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationCubicPaced: NSString { available starting in 10.7, 4.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationRotateAuto: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAAnimationRotateAutoReverse: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CASpringAnimation = objcclass external (CABasicAnimation)
  public
    procedure setMass(newValue: CGFloat); message 'setMass:';
    function mass: CGFloat; message 'mass';
    procedure setStiffness(newValue: CGFloat); message 'setStiffness:';
    function stiffness: CGFloat; message 'stiffness';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setInitialVelocity(newValue: CGFloat); message 'setInitialVelocity:';
    function initialVelocity: CGFloat; message 'initialVelocity';
    function settlingDuration: CFTimeInterval; message 'settlingDuration';
  end;

type
  CATransition = objcclass external (CAAnimation)
  public
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setSubtype(newValue: NSString); message 'setSubtype:';
    function subtype: NSString; message 'subtype';
    procedure setStartProgress(newValue: single); message 'setStartProgress:';
    function startProgress: single; message 'startProgress';
    procedure setEndProgress(newValue: single); message 'setEndProgress:';
    function endProgress: single; message 'endProgress';
    procedure setFilter(newValue: id); message 'setFilter:';
    function filter: id; message 'filter';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCATransitionFade: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionMoveIn: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionPush: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionReveal: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionFromRight: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionFromLeft: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionFromTop: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransitionFromBottom: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CAAnimationGroup = objcclass external (CAAnimation)
  public
    procedure setAnimations(newValue: CAAnimation *ProtocolPtr); message 'setAnimations:';
    function animations: CAAnimation *ProtocolPtr; message 'animations';
  end;
{$endif}

