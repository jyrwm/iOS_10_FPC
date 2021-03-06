{ Parsed from GameplayKit.framework GKSKNodeComponent.h }

{$ifdef TYPES}
type
  GKSKNodeComponentPtr = ^GKSKNodeComponent;
{$endif}

{$ifdef CLASSES}

type
  GKSKNodeComponent = objcclass external (GKComponent, GKAgentDelegateProtocol)
  public
    class function componentWithNode (node: SKNode): instancetype; message 'componentWithNode:';
    function initWithNode (node: SKNode): instancetype; message 'initWithNode:';
    procedure setNode(newValue: SKNode); message 'setNode:';
    function node: SKNode; message 'node';

    { Adopted protocols }
    procedure agentDidUpdate (agent: GKAgent); message 'agentDidUpdate:';
    procedure agentWillUpdate (agent: GKAgent); message 'agentWillUpdate:';
  end;
{$endif}

