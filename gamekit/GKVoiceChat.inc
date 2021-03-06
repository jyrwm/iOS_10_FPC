{ Parsed from GameKit.framework GKVoiceChat.h }

{$ifdef TYPES}
type
  GKVoiceChatPtr = ^GKVoiceChat;
{$endif}

{$ifdef TYPES}
type
  GKVoiceChatPlayerState = NSInteger;
  GKVoiceChatPlayerStatePtr = ^GKVoiceChatPlayerState;

const
  GKVoiceChatPlayerConnected = 0;
  GKVoiceChatPlayerDisconnected = 1;
  GKVoiceChatPlayerSpeaking = 2;
  GKVoiceChatPlayerSilent = 3;
  GKVoiceChatPlayerConnecting = 4;
{$endif}

{$ifdef CLASSES}

type
  GKVoiceChat = objcclass external (NSObject)
  public
    procedure start; message 'start';
    procedure stop; message 'stop';
    procedure setPlayer_muted (player: GKPlayer; isMuted: boolean); message 'setPlayer:muted:'; { available in 10_10, 8_0 }
    procedure setPlayerVoiceChatStateDidChangeHandler(newValue: OpaqueCBlock); message 'setPlayerVoiceChatStateDidChangeHandler:';
    function playerVoiceChatStateDidChangeHandler: OpaqueCBlock; message 'playerVoiceChatStateDidChangeHandler';
    function name: NSString; message 'name';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    function players: GKPlayer *ProtocolPtr; message 'players';
    class function isVoIPAllowed: boolean; message 'isVoIPAllowed';
  end;


type
  Deprecated = objccategory external (GKVoiceChat)
    function playerIDs: NSString *ProtocolPtr; message 'playerIDs';
    procedure setPlayerStateUpdateHandler(newValue: OpaqueCBlock); message 'setPlayerStateUpdateHandler:';
    function playerStateUpdateHandler: OpaqueCBlock; message 'playerStateUpdateHandler';
    procedure setMute_forPlayer (isMuted: boolean; playerID: NSString); message 'setMute:forPlayer:'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "use setPlayer:muted:"';
  end;
{$endif}

