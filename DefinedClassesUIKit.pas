{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesUIKit;
interface

type
  NSDataAsset = objcclass external;
  NSFileProviderExtension = objcclass external;
  NSLayoutAnchor = objcclass external;
  NSLayoutConstraint = objcclass external;
  NSLayoutDimension = objcclass external;
  NSLayoutManager = objcclass external;
  NSLayoutXAxisAnchor = objcclass external;
  NSLayoutYAxisAnchor = objcclass external;
  NSMutableParagraphStyle = objcclass external;
  NSParagraphStyle = objcclass external;
  NSShadow = objcclass external;
  NSStringDrawingContext = objcclass external;
  NSTextAttachment = objcclass external;
  NSTextContainer = objcclass external;
  NSTextStorage = objcclass external;
  NSTextTab = objcclass external;
  UIAcceleration = objcclass external;
  UIAccelerometer = objcclass external;
  UIAccessibilityCustomAction = objcclass external;
  UIAccessibilityCustomRotor = objcclass external;
  UIAccessibilityCustomRotorItemResult = objcclass external;
  UIAccessibilityCustomRotorSearchPredicate = objcclass external;
  UIAccessibilityElement = objcclass external;
  UIActionSheet = objcclass external;
  UIActivity = objcclass external;
  UIActivityIndicatorView = objcclass external;
  UIActivityItemProvider = objcclass external;
  UIActivityViewController = objcclass external;
  UIAlertAction = objcclass external;
  UIAlertController = objcclass external;
  UIAlertView = objcclass external;
  UIApplication = objcclass external;
  UIApplicationShortcutIcon = objcclass external;
  UIApplicationShortcutItem = objcclass external;
  UIAttachmentBehavior = objcclass external;
  UIBarButtonItem = objcclass external;
  UIBarButtonItemGroup = objcclass external;
  UIBarItem = objcclass external;
  UIBezierPath = objcclass external;
  UIBlurEffect = objcclass external;
  UIButton = objcclass external;
  UICloudSharingController = objcclass external;
  UICollectionReusableView = objcclass external;
  UICollectionView = objcclass external;
  UICollectionViewCell = objcclass external;
  UICollectionViewController = objcclass external;
  UICollectionViewFlowLayout = objcclass external;
  UICollectionViewFlowLayoutInvalidationContext = objcclass external;
  UICollectionViewFocusUpdateContext = objcclass external;
  UICollectionViewLayout = objcclass external;
  UICollectionViewLayoutAttributes = objcclass external;
  UICollectionViewLayoutInvalidationContext = objcclass external;
  UICollectionViewTransitionLayout = objcclass external;
  UICollectionViewUpdateItem = objcclass external;
  UICollisionBehavior = objcclass external;
  UIColor = objcclass external;
  UIControl = objcclass external;
  UICubicTimingParameters = objcclass external;
  UIDatePicker = objcclass external;
  UIDevice = objcclass external;
  UIDictationPhrase = objcclass external;
  UIDocument = objcclass external;
  UIDocumentInteractionController = objcclass external;
  UIDocumentMenuViewController = objcclass external;
  UIDocumentPickerExtensionViewController = objcclass external;
  UIDocumentPickerViewController = objcclass external;
  UIDynamicAnimator = objcclass external;
  UIDynamicBehavior = objcclass external;
  UIDynamicItemBehavior = objcclass external;
  UIDynamicItemGroup = objcclass external;
  UIEvent = objcclass external;
  UIFeedbackGenerator = objcclass external;
  UIFieldBehavior = objcclass external;
  UIFocusAnimationCoordinator = objcclass external;
  UIFocusGuide = objcclass external;
  UIFocusUpdateContext = objcclass external;
  UIFont = objcclass external;
  UIFontDescriptor = objcclass external;
  UIGestureRecognizer = objcclass external;
  UIGraphicsImageRenderer = objcclass external;
  UIGraphicsImageRendererContext = objcclass external;
  UIGraphicsImageRendererFormat = objcclass external;
  UIGraphicsPDFRenderer = objcclass external;
  UIGraphicsPDFRendererContext = objcclass external;
  UIGraphicsPDFRendererFormat = objcclass external;
  UIGraphicsRenderer = objcclass external;
  UIGraphicsRendererContext = objcclass external;
  UIGraphicsRendererFormat = objcclass external;
  UIGravityBehavior = objcclass external;
  UIImage = objcclass external;
  UIImageAsset = objcclass external;
  UIImagePickerController = objcclass external;
  UIImageView = objcclass external;
  UIImpactFeedbackGenerator = objcclass external;
  UIInputView = objcclass external;
  UIInputViewController = objcclass external;
  UIInterpolatingMotionEffect = objcclass external;
  UIKeyCommand = objcclass external;
  UILabel = objcclass external;
  UILayoutGuide = objcclass external;
  UILexicon = objcclass external;
  UILexiconEntry = objcclass external;
  UILocalNotification = objcclass external;
  UILocalizedIndexedCollation = objcclass external;
  UILongPressGestureRecognizer = objcclass external;
  UIManagedDocument = objcclass external;
  UIMarkupTextPrintFormatter = objcclass external;
  UIMenuController = objcclass external;
  UIMenuItem = objcclass external;
  UIMotionEffect = objcclass external;
  UIMotionEffectGroup = objcclass external;
  UIMutableApplicationShortcutItem = objcclass external;
  UIMutableUserNotificationAction = objcclass external;
  UIMutableUserNotificationCategory = objcclass external;
  UINavigationBar = objcclass external;
  UINavigationController = objcclass external;
  UINavigationItem = objcclass external;
  UINib = objcclass external;
  UINotificationFeedbackGenerator = objcclass external;
  UIPageControl = objcclass external;
  UIPageViewController = objcclass external;
  UIPanGestureRecognizer = objcclass external;
  UIPasteboard = objcclass external;
  UIPercentDrivenInteractiveTransition = objcclass external;
  UIPickerView = objcclass external;
  UIPinchGestureRecognizer = objcclass external;
  UIPopoverBackgroundView = objcclass external;
  UIPopoverController = objcclass external;
  UIPopoverPresentationController = objcclass external;
  UIPresentationController = objcclass external;
  UIPress = objcclass external;
  UIPressesEvent = objcclass external;
  UIPreviewAction = objcclass external;
  UIPreviewActionGroup = objcclass external;
  UIPreviewInteraction = objcclass external;
  UIPrintFormatter = objcclass external;
  UIPrintInfo = objcclass external;
  UIPrintInteractionController = objcclass external;
  UIPrintPageRenderer = objcclass external;
  UIPrintPaper = objcclass external;
  UIPrinter = objcclass external;
  UIPrinterPickerController = objcclass external;
  UIProgressView = objcclass external;
  UIPushBehavior = objcclass external;
  UIReferenceLibraryViewController = objcclass external;
  UIRefreshControl = objcclass external;
  UIRegion = objcclass external;
  UIResponder = objcclass external;
  UIRotationGestureRecognizer = objcclass external;
  UIScreen = objcclass external;
  UIScreenEdgePanGestureRecognizer = objcclass external;
  UIScreenMode = objcclass external;
  UIScrollView = objcclass external;
  UISearchBar = objcclass external;
  UISearchContainerViewController = objcclass external;
  UISearchController = objcclass external;
  UISearchDisplayController = objcclass external;
  UISegmentedControl = objcclass external;
  UISelectionFeedbackGenerator = objcclass external;
  UISimpleTextPrintFormatter = objcclass external;
  UISlider = objcclass external;
  UISnapBehavior = objcclass external;
  UISplitViewController = objcclass external;
  UISpringTimingParameters = objcclass external;
  UIStackView = objcclass external;
  UIStepper = objcclass external;
  UIStoryboard = objcclass external;
  UIStoryboardPopoverSegue = objcclass external;
  UIStoryboardSegue = objcclass external;
  UIStoryboardUnwindSegueSource = objcclass external;
  UISwipeGestureRecognizer = objcclass external;
  UISwitch = objcclass external;
  UITabBar = objcclass external;
  UITabBarController = objcclass external;
  UITabBarItem = objcclass external;
  UITableView = objcclass external;
  UITableViewCell = objcclass external;
  UITableViewController = objcclass external;
  UITableViewFocusUpdateContext = objcclass external;
  UITableViewHeaderFooterView = objcclass external;
  UITableViewRowAction = objcclass external;
  UITapGestureRecognizer = objcclass external;
  UITextChecker = objcclass external;
  UITextField = objcclass external;
  UITextInputAssistantItem = objcclass external;
  UITextInputMode = objcclass external;
  UITextInputStringTokenizer = objcclass external;
  UITextPosition = objcclass external;
  UITextRange = objcclass external;
  UITextSelectionRect = objcclass external;
  UITextView = objcclass external;
  UIToolbar = objcclass external;
  UITouch = objcclass external;
  UITraitCollection = objcclass external;
  UIUserNotificationAction = objcclass external;
  UIUserNotificationCategory = objcclass external;
  UIUserNotificationSettings = objcclass external;
  UIVibrancyEffect = objcclass external;
  UIVideoEditorController = objcclass external;
  UIView = objcclass external;
  UIViewController = objcclass external;
  UIViewPrintFormatter = objcclass external;
  UIViewPropertyAnimator = objcclass external;
  UIVisualEffect = objcclass external;
  UIVisualEffectView = objcclass external;
  UIWebView = objcclass external;
  UIWindow = objcclass external;
  NSLayoutManagerDelegateProtocol = objcprotocol external name 'NSLayoutManagerDelegate';
  NSTextAttachmentContainerProtocol = objcprotocol external name 'NSTextAttachmentContainer';
  NSTextLayoutOrientationProviderProtocol = objcprotocol external name 'NSTextLayoutOrientationProvider';
  NSTextStorageDelegateProtocol = objcprotocol external name 'NSTextStorageDelegate';
  UIAccelerometerDelegateProtocol = objcprotocol external name 'UIAccelerometerDelegate';
  UIAccessibilityIdentificationProtocol = objcprotocol external name 'UIAccessibilityIdentification';
  UIAccessibilityReadingContentProtocol = objcprotocol external name 'UIAccessibilityReadingContent';
  UIActionSheetDelegateProtocol = objcprotocol external name 'UIActionSheetDelegate';
  UIActivityItemSourceProtocol = objcprotocol external name 'UIActivityItemSource';
  UIAdaptivePresentationControllerDelegateProtocol = objcprotocol external name 'UIAdaptivePresentationControllerDelegate';
  UIAlertViewDelegateProtocol = objcprotocol external name 'UIAlertViewDelegate';
  UIAppearanceContainerProtocol = objcprotocol external name 'UIAppearanceContainer';
  UIAppearanceProtocol = objcprotocol external name 'UIAppearance';
  UIApplicationDelegateProtocol = objcprotocol external name 'UIApplicationDelegate';
  UIBarPositioningDelegateProtocol = objcprotocol external name 'UIBarPositioningDelegate';
  UIBarPositioningProtocol = objcprotocol external name 'UIBarPositioning';
  UICloudSharingControllerDelegateProtocol = objcprotocol external name 'UICloudSharingControllerDelegate';
  UICollectionViewDataSourcePrefetchingProtocol = objcprotocol external name 'UICollectionViewDataSourcePrefetching';
  UICollectionViewDataSourceProtocol = objcprotocol external name 'UICollectionViewDataSource';
  UICollectionViewDelegateFlowLayoutProtocol = objcprotocol external name 'UICollectionViewDelegateFlowLayout';
  UICollectionViewDelegateProtocol = objcprotocol external name 'UICollectionViewDelegate';
  UICollisionBehaviorDelegateProtocol = objcprotocol external name 'UICollisionBehaviorDelegate';
  UIContentContainerProtocol = objcprotocol external name 'UIContentContainer';
  UIContentSizeCategoryAdjustingProtocol = objcprotocol external name 'UIContentSizeCategoryAdjusting';
  UICoordinateSpaceProtocol = objcprotocol external name 'UICoordinateSpace';
  UIDataSourceModelAssociationProtocol = objcprotocol external name 'UIDataSourceModelAssociation';
  UIDocumentInteractionControllerDelegateProtocol = objcprotocol external name 'UIDocumentInteractionControllerDelegate';
  UIDocumentMenuDelegateProtocol = objcprotocol external name 'UIDocumentMenuDelegate';
  UIDocumentPickerDelegateProtocol = objcprotocol external name 'UIDocumentPickerDelegate';
  UIDynamicAnimatorDelegateProtocol = objcprotocol external name 'UIDynamicAnimatorDelegate';
  UIDynamicItemProtocol = objcprotocol external name 'UIDynamicItem';
  UIFocusEnvironmentProtocol = objcprotocol external name 'UIFocusEnvironment';
  UIFocusItemProtocol = objcprotocol external name 'UIFocusItem';
  UIGestureRecognizerDelegateProtocol = objcprotocol external name 'UIGestureRecognizerDelegate';
  UIGuidedAccessRestrictionDelegateProtocol = objcprotocol external name 'UIGuidedAccessRestrictionDelegate';
  UIImagePickerControllerDelegateProtocol = objcprotocol external name 'UIImagePickerControllerDelegate';
  UIInputViewAudioFeedbackProtocol = objcprotocol external name 'UIInputViewAudioFeedback';
  UIKeyInputProtocol = objcprotocol external name 'UIKeyInput';
  UILayoutSupportProtocol = objcprotocol external name 'UILayoutSupport';
  UINavigationBarDelegateProtocol = objcprotocol external name 'UINavigationBarDelegate';
  UINavigationControllerDelegateProtocol = objcprotocol external name 'UINavigationControllerDelegate';
  UIObjectRestorationProtocol = objcprotocol external name 'UIObjectRestoration';
  UIPageViewControllerDataSourceProtocol = objcprotocol external name 'UIPageViewControllerDataSource';
  UIPageViewControllerDelegateProtocol = objcprotocol external name 'UIPageViewControllerDelegate';
  UIPickerViewAccessibilityDelegateProtocol = objcprotocol external name 'UIPickerViewAccessibilityDelegate';
  UIPickerViewDataSourceProtocol = objcprotocol external name 'UIPickerViewDataSource';
  UIPickerViewDelegateProtocol = objcprotocol external name 'UIPickerViewDelegate';
  UIPopoverBackgroundViewMethodsProtocol = objcprotocol external name 'UIPopoverBackgroundViewMethods';
  UIPopoverControllerDelegateProtocol = objcprotocol external name 'UIPopoverControllerDelegate';
  UIPopoverPresentationControllerDelegateProtocol = objcprotocol external name 'UIPopoverPresentationControllerDelegate';
  UIPreviewActionItemProtocol = objcprotocol external name 'UIPreviewActionItem';
  UIPreviewInteractionDelegateProtocol = objcprotocol external name 'UIPreviewInteractionDelegate';
  UIPrintInteractionControllerDelegateProtocol = objcprotocol external name 'UIPrintInteractionControllerDelegate';
  UIPrinterPickerControllerDelegateProtocol = objcprotocol external name 'UIPrinterPickerControllerDelegate';
  UIResponderStandardEditActionsProtocol = objcprotocol external name 'UIResponderStandardEditActions';
  UIScrollViewAccessibilityDelegateProtocol = objcprotocol external name 'UIScrollViewAccessibilityDelegate';
  UIScrollViewDelegateProtocol = objcprotocol external name 'UIScrollViewDelegate';
  UISearchBarDelegateProtocol = objcprotocol external name 'UISearchBarDelegate';
  UISearchControllerDelegateProtocol = objcprotocol external name 'UISearchControllerDelegate';
  UISearchDisplayDelegateProtocol = objcprotocol external name 'UISearchDisplayDelegate';
  UISearchResultsUpdatingProtocol = objcprotocol external name 'UISearchResultsUpdating';
  UISplitViewControllerDelegateProtocol = objcprotocol external name 'UISplitViewControllerDelegate';
  UIStateRestoringProtocol = objcprotocol external name 'UIStateRestoring';
  UITabBarControllerDelegateProtocol = objcprotocol external name 'UITabBarControllerDelegate';
  UITabBarDelegateProtocol = objcprotocol external name 'UITabBarDelegate';
  UITableViewDataSourcePrefetchingProtocol = objcprotocol external name 'UITableViewDataSourcePrefetching';
  UITableViewDataSourceProtocol = objcprotocol external name 'UITableViewDataSource';
  UITableViewDelegateProtocol = objcprotocol external name 'UITableViewDelegate';
  UITextDocumentProxyProtocol = objcprotocol external name 'UITextDocumentProxy';
  UITextFieldDelegateProtocol = objcprotocol external name 'UITextFieldDelegate';
  UITextInputDelegateProtocol = objcprotocol external name 'UITextInputDelegate';
  UITextInputProtocol = objcprotocol external name 'UITextInput';
  UITextInputTokenizerProtocol = objcprotocol external name 'UITextInputTokenizer';
  UITextInputTraitsProtocol = objcprotocol external name 'UITextInputTraits';
  UITextViewDelegateProtocol = objcprotocol external name 'UITextViewDelegate';
  UITimingCurveProviderProtocol = objcprotocol external name 'UITimingCurveProvider';
  UIToolbarDelegateProtocol = objcprotocol external name 'UIToolbarDelegate';
  UITraitEnvironmentProtocol = objcprotocol external name 'UITraitEnvironment';
  UIVideoEditorControllerDelegateProtocol = objcprotocol external name 'UIVideoEditorControllerDelegate';
  UIViewAnimatingProtocol = objcprotocol external name 'UIViewAnimating';
  UIViewControllerAnimatedTransitioningProtocol = objcprotocol external name 'UIViewControllerAnimatedTransitioning';
  UIViewControllerContextTransitioningProtocol = objcprotocol external name 'UIViewControllerContextTransitioning';
  UIViewControllerInteractiveTransitioningProtocol = objcprotocol external name 'UIViewControllerInteractiveTransitioning';
  UIViewControllerPreviewingDelegateProtocol = objcprotocol external name 'UIViewControllerPreviewingDelegate';
  UIViewControllerPreviewingProtocol = objcprotocol external name 'UIViewControllerPreviewing';
  UIViewControllerRestorationProtocol = objcprotocol external name 'UIViewControllerRestoration';
  UIViewControllerTransitionCoordinatorContextProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinatorContext';
  UIViewControllerTransitionCoordinatorProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinator';
  UIViewControllerTransitioningDelegateProtocol = objcprotocol external name 'UIViewControllerTransitioningDelegate';
  UIViewImplicitlyAnimatingProtocol = objcprotocol external name 'UIViewImplicitlyAnimating';
  UIWebViewDelegateProtocol = objcprotocol external name 'UIWebViewDelegate';

type
  CADisplayLink = objcclass external;
  CAGradientLayer = objcclass external;
  CALayer = objcclass external;
  CKContainer = objcclass external;
  CKShare = objcclass external;
  CKShareMetadata = objcclass external;
  CLRegion = objcclass external;
  NSArray = objcclass external;
  NSDictionary = objcclass external;
  NSExtensionContext = objcclass external;
  NSFileWrapper = objcclass external;
  NSManagedObjectContext = objcclass external;
  NSManagedObjectModel = objcclass external;
  NSMutableDictionary = objcclass external;
  NSNotification = objcclass external;
  NSPersistentStoreCoordinator = objcclass external;
  NSSet = objcclass external;
  NSTextAlternatives = objcclass external;
  NSURL = objcclass external;
  NSUndoManager = objcclass external;
  UIStatusBar = objcclass external;
  UIStatusBarWindow = objcclass external;
  UITextFieldAtomBackgroundView = objcclass external;
  UITextFieldBackgroundView = objcclass external;
  UITextFieldBorderView = objcclass external;
  UITextFieldLabel = objcclass external;
  UITextInputTraits = objcclass external;
  UITextInteractionAssistant = objcclass external;
  UITextSelectionView = objcclass external;
  UIWebViewInternal = objcclass external;
  UITextSelectingProtocol = objcprotocol external name 'UITextSelecting';

implementation
end.
