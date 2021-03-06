{ Parsed from EventKit.framework EKEvent.h }

{$ifdef TYPES}
type
  EKEventPtr = ^EKEvent;
{$endif}

{$ifdef TYPES}
type
  EKEventAvailability = NSInteger;
  EKEventAvailabilityPtr = ^EKEventAvailability;

const
  EKEventAvailabilityNotSupported = -1;
  EKEventAvailabilityBusy = 0;
  EKEventAvailabilityFree = 1;
  EKEventAvailabilityTentative = 2;
  EKEventAvailabilityUnavailable = 3;

type
  EKEventStatus = NSInteger;
  EKEventStatusPtr = ^EKEventStatus;

const
  EKEventStatusNone = 0;
  EKEventStatusConfirmed = 1;
  EKEventStatusTentative = 2;
  EKEventStatusCanceled = 3;
{$endif}

{$ifdef CLASSES}

type
  EKEvent = objcclass external (EKCalendarItem)
  private
  public
    class function eventWithEventStore (eventStore: EKEventStore): EKEvent; message 'eventWithEventStore:';
    function eventIdentifier: NSString; message 'eventIdentifier';
    procedure setAllDay(newValue: boolean); message 'setAllDay:';
    function isAllDay: boolean; message 'isAllDay';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    procedure setStructuredLocation(newValue: EKStructuredLocation); message 'setStructuredLocation:';
    function structuredLocation: EKStructuredLocation; message 'structuredLocation';
    function compareStartDateWithEvent (other: EKEvent): NSComparisonResult; message 'compareStartDateWithEvent:';
    function organizer: EKParticipant; message 'organizer';
    procedure setAvailability(newValue: EKEventAvailability); message 'setAvailability:';
    function availability: EKEventAvailability; message 'availability';
    function status: EKEventStatus; message 'status';
    function isDetached: boolean; message 'isDetached';
    function occurrenceDate: NSDate; message 'occurrenceDate';
    function refresh: boolean; message 'refresh';
    function birthdayContactIdentifier: NSString; message 'birthdayContactIdentifier';
    function birthdayPersonID: NSInteger; message 'birthdayPersonID';
    function birthdayPersonUniqueID: NSString; message 'birthdayPersonUniqueID';
  end;
{$endif}

