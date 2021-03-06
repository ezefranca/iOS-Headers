/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "AirPlayRemoteSlideshowDelegate-Protocol.h"
#import "PLAirPlayControllerDelegate-Protocol.h"
#import "PLAirPlaySessionDataSource-Protocol.h"
#import "PLAirTunesServicePickerViewControllerDelegate-Protocol.h"
#import "PLAssetChangeObserver-Protocol.h"
#import "PLAssetContainerListChangeObserver-Protocol.h"
#import "PLAssetContainerObserver-Protocol.h"
#import "PLDeletePhotosActionControllerDelegate-Protocol.h"
#import "PLDismissableViewController-Protocol.h"
#import "PLPhotoScrubberDataSource-Protocol.h"
#import "PLPhotoTileViewControllerDelegate-Protocol.h"
#import "PLSlideshowPluginDelegate-Protocol.h"
#import "PLSlideshowSettingsViewControllerDelegate-Protocol.h"
#import "PLVideoViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPageControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumberFormatter, NSString, NSTimer, PLActivityViewController, PLAirPlayBackgroundView, PLAirPlayController, PLAirPlaySession, PLAssetContainerDataSource, PLDeletePhotosActionController, PLEditPhotoController, PLLibraryImageDataProvider, PLManagedAsset, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, PLProgressHUD, PLProgressView, PLPublishingAgent, PLSlideshowSettingsViewController, PLVideoRemaker, PLVideoView, UIActionSheet, UIAlertView, UIBarButtonItem, UIImage, UIImageView, UILongPressGestureRecognizer, UINavigationBar, UINavigationController, UIPageController, UIPopoverController, UIScrollView, UITransitionView, UIView, UIWindow;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLAirPlayControllerDelegate, PLDeletePhotosActionControllerDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowSettingsViewControllerDelegate, PLSlideshowPluginDelegate, PLAirTunesServicePickerViewControllerDelegate, AirPlayRemoteSlideshowDelegate, PLDismissableViewController, PLAssetContainerObserver, PLAssetContainerListChangeObserver, PLAssetChangeObserver>
{
    id <PLPhotoBrowserControllerDelegate> __delegate;
    NSMutableDictionary *_tileCache;
    UIPageController *_pageController;
    UIScrollView *_scroller;
    UIView *_fadeToBlackView;
    UITransitionView *_slideshowTransitionView;
    UITransitionView *_cameraTransitionView;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_deletedIndexPath;
    NSIndexPath *_priorIndexPath;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    int _slideshowStatus;
    _Bool _showingNextImage;
    _Bool _tvOutOn;
    _Bool _playingVideo;
    _Bool _animating;
    struct CGSize _contentStartSize;
    float _startScale;
    float _endScale;
    UIView *_remakerContainerView;
    UIActionSheet *_actionView;
    UIAlertView *_alertView;
    PLProgressHUD *_savingPhotoHud;
    double _slideshowDelay;
    NSTimer *_slideshowTimer;
    SEL _photoAction;
    id _photoActionInvoker;
    PLManagedAsset *_pendingPhoto;
    UIWindow *_tvOutWindow;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    NSMutableDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    struct CGRect _animationFrame;
    UIView *_animationView;
    UIViewController *_composeSheetViewController;
    unsigned int _didDisplayComposeSheet:1;
    unsigned int _didSlideImageDown:1;
    unsigned int _isAnimatingSendToEmail:1;
    id _attachmentIdentifier;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLPublishingAgent *_currentPublishingAgent;
    PLPublishingAgent *_publishingAgentToPresent;
    int _remakerMode;
    PLVideoRemaker *_remaker;
    PLManagedAsset *_currentVideo;
    UINavigationController *_mmsController;
    double _maximumTrimLength;
    UILongPressGestureRecognizer *_recognizer;
    SEL _actionAfterForcedRotation;
    _Bool _canDelayImageLoading;
    _Bool _delayImageLoading;
    int _autohideControlCount;
    PLEditPhotoController *_editController;
    PLActivityViewController *_activityViewController;
    NSArray *_currentAirplayRoutes;
    unsigned int _statusBarIsLocked;
    unsigned int _rotationDisabled;
    unsigned int _videoEditingMode:1;
    unsigned int _remaking:1;
    unsigned int _isEditingPhoto:1;
    unsigned int _clearingFullScreenView:1;
    unsigned int _scrolling:1;
    unsigned int _canShowCopyCallout:1;
    unsigned int _viewIsDisappearing:1;
    unsigned int _didRotate:1;
    unsigned int _navigationBarDisabled;
    unsigned int _bottomBarDisabled;
    unsigned int _appInteractionDisabled;
    unsigned int _isAnimatingTrash:1;
    unsigned int _isPlayingMusic:1;
    unsigned int _didStartMusicPlayback:1;
    unsigned int _rotationDisabledUnderCropOverlay:1;
    unsigned int _didSetSimpleRemotePriority:1;
    unsigned int _paging:1;
    unsigned int _collapsing:1;
    unsigned int _rotating:1;
    unsigned int _reloadPhotoScrubber:1;
    unsigned int _videoViewWillBeginEditing:1;
    unsigned int _playVideoOnActivation:1;
    unsigned int _remakingWasCancelled:1;
    unsigned int _canUploadHDVideoOver3G:1;
    unsigned int _didSetHDVideoUploadCapability:1;
    unsigned int _didShowHDRPrompt:1;
    unsigned int _imagesAreShuffled:1;
    unsigned int _isEditingComment:1;
    NSIndexPath *_scrubbedImageIndexPath;
    long long _scrubberAssetContainerIndex;
    PLLibraryImageDataProvider *_imageDataProvider;
    NSMutableSet *_imageRequests;
    UIImage *_loadedImage;
    PLPhotoScrubber *_photoScrubber;
    UIImageView *_viewForTrashCanAnimation;
    PLPhotoTileViewController *_deletedTile;
    int _currentAirTunesMode;
    unsigned long long _slideshowItemsToShow;
    unsigned long long _slideshowItemsShown;
    NSIndexPath *_slideshowEndIndexPath;
    _Bool _fadingToBlack;
    _Bool _slideshowIsOrigami;
    _Bool _slideshowStartedInFullScreen;
    _Bool _slideshowIsLoading;
    _Bool _slideshowIsEnding;
    PLPictureFramePlugin *_slideshowPlugin;
    UIView *_slideshowView;
    UIBarButtonItem *_slideshowSettingsPopoverDisplayedFromItem;
    UIPopoverController *_slideshowSettingsPopover;
    PLSlideshowSettingsViewController *_slideshowSettingsViewController;
    NSIndexPath *_lastStreamedPhotoIndexPath;
    NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
    NSString *_currentAirTunesTransition;
    NSArray *_availableAirTunesServices;
    UIBarButtonItem *_airTunesServicePickerPopoverDisplayedFromItem;
    UIPopoverController *_airTunesServicePickerPopover;
    PLAirPlayController *_airplayController;
    PLAirPlaySession *_airplaySession;
    unsigned int _slideShowIsStreamed:1;
    unsigned int _airTunesSlideShowIsEnding:1;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    UIPopoverController *_activityControllerPopover;
    PLDeletePhotosActionController *_deleteController;
    int _commentsInteractionMode;
    UINavigationBar *_commentsEditBar;
    _Bool _commentsTableWasVisible;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    NSMutableArray *_pendingAssetChangeNotifications;
    NSManagedObjectID *_currentAssetObjectID;
    NSString *_currentAssetPublicGlobalUUID;
    NSString *_currentAssetContainerUUID;
    id _activityTarget;
    SEL _activityAction;
    _Bool shouldShowOverlaysWhenViewAppears;
    _Bool shouldShowOverlaysWhenViewDisappears;
    _Bool _isCameraApp;
    _Bool _deletesDuplicatesWhenNecessary;
    _Bool _shouldPlayVideoWhenViewAppears;
    PLAssetContainerDataSource *_assetContainerDataSource;
    PLPhotoTileViewController *_mostRecentlyActiveTile;
}

+ (void)setPageControllerScrollViewClass:(Class)arg1;
@property(retain, nonatomic) PLPhotoTileViewController *mostRecentlyActiveTile; // @synthesize mostRecentlyActiveTile=_mostRecentlyActiveTile;
@property(readonly, nonatomic) PLAssetContainerDataSource *assetContainerDataSource; // @synthesize assetContainerDataSource=_assetContainerDataSource;
@property(nonatomic) _Bool shouldPlayVideoWhenViewAppears; // @synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears;
@property(nonatomic) _Bool deletesDuplicatesWhenNecessary; // @synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary;
@property(nonatomic) _Bool isCameraApp; // @synthesize isCameraApp=_isCameraApp;
@property(retain, nonatomic, setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:) NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath; // @synthesize _lastDisplayedRemoteSlideshowPhotoIndexPath;
@property(retain, nonatomic, setter=_setScrubbedImageIndexPath:) NSIndexPath *_scrubbedImageIndexPath; // @synthesize _scrubbedImageIndexPath;
@property(retain, nonatomic, setter=_setSlideshowEndIndexPath:) NSIndexPath *_slideshowEndIndexPath; // @synthesize _slideshowEndIndexPath;
@property(retain, nonatomic, setter=_setDeletedIndexPath:) NSIndexPath *_deletedIndexPath; // @synthesize _deletedIndexPath;
@property(retain, nonatomic, setter=_setPriorIndexPath:) NSIndexPath *_priorIndexPath; // @synthesize _priorIndexPath;
@property(nonatomic) _Bool shouldShowOverlaysWhenViewDisappears; // @synthesize shouldShowOverlaysWhenViewDisappears;
@property(nonatomic) _Bool shouldShowOverlaysWhenViewAppears; // @synthesize shouldShowOverlaysWhenViewAppears;
- (_Bool)_didSetDataForCurrentItem;
- (_Bool)_isScrolling;
@property(readonly, nonatomic) _Bool canEditPhoto;
- (_Bool)isEditing;
- (_Bool)currentItemIsPlaying;
- (void)_capabilitiesChanged;
- (_Bool)shouldShowPlayButton;
- (_Bool)shouldShowActionMenu;
- (_Bool)_currentItemIsVideo;
- (_Bool)_canUploadHDVideo;
@property(readonly, nonatomic) id <PLRootLibraryNavigationController> rootNavigationController;
@property(readonly, nonatomic) UIView *pageControllerView;
@property(readonly, nonatomic) UIPageController *pageController;
- (_Bool)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (_Bool)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id)arg3;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2;
- (id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2;
- (void)_airTunesSlideShowViewWasTapped;
- (void)_startAirTunesSlideShow;
- (void)_stopAirTunesSlideShow:(_Bool)arg1;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_airTunesSlideShowTimerFired;
- (id)_nextAirTunesSlideshowPhoto;
- (void)airTunesServicePickerViewController:(id)arg1 didSelectRoute:(id)arg2;
@property(readonly, nonatomic) _Bool showsAirTunesOption;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (void)_endAirTunesPicker;
- (void)_dismissAirtunesServicePickerPopover;
- (void)displayAirplaySheetFromItem:(id)arg1;
- (int)airTunesMode;
- (void)setAirTunesMode:(int)arg1;
- (void)airplayControllerPickableRoutesDidChange:(id)arg1;
- (void)_cleanUpCurrentAirplaySession;
- (void)_verifyAirplayRouteIsPicked;
- (void)_airplaySetup;
- (void)_invalidateAirplayCache;
- (void)_airplayRouteWasPicked:(id)arg1;
- (void)_setSelectedAirplayRoute:(id)arg1 changeSystemRoute:(_Bool)arg2;
- (void)_getRotationContentSettings:(CDStruct_ebaa735e *)arg1;
- (void)_longPressRecognized:(id)arg1;
@property(nonatomic) _Bool canShowCopyCallout;
- (void)_removeTVOutWindow;
- (void)_prepareForTVOut;
- (void)_externalScreenGotDisconnected;
- (void)_configureTVOutPageController;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)_actionViewRootView;
- (void)_redisplayPopovers;
- (void)_redisplayDeleteController:(id)arg1;
- (void)_redisplayActionSheet:(id)arg1;
- (void)_repositionPopoversIfNecessary;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_hideCallout;
- (void)_forceDismissDeleteController:(_Bool)arg1 enableToolbarTimer:(_Bool)arg2;
- (void)_forceDismissActionSheet:(_Bool)arg1 enableToolbarTimer:(_Bool)arg2;
- (void)_forceDismissAlertView:(_Bool)arg1 enableToolbarTimer:(_Bool)arg2;
- (_Bool)dismissPopovers;
- (_Bool)statusBarIsLocked;
- (void)setStatusBarIsLocked:(_Bool)arg1;
- (void)_updateStatusBarVisibilityWithDuration:(double)arg1;
- (_Bool)wantsPhotoBrowserStyleStatusBar;
- (void)removeRemakerContainerView;
@property(readonly, nonatomic) UIView *remakerContainerView;
- (void)updateBarsAnimated:(_Bool)arg1;
- (_Bool)barsAreVisible;
- (void)updateOverlaysAnimated:(_Bool)arg1;
- (void)updateProgressView;
- (void)_updateProgressView;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_clearPublishingAgent:(id)arg1;
- (void)_removeProgressView;
- (void)_cancelProgressTimer;
- (id)photoScrollerTitle;
- (id)photoCountFormatter;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(_Bool)arg3;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (void)_commonDidBeginRemaking;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)trimVideo:(id)arg1;
- (int)videoRemakerMode;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_delayedExitEditingMode;
- (void)cancelVideoEditingMode:(id)arg1;
- (_Bool)isEditingVideo;
- (void)setVideoEditingMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVideoEditingMode:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canEditVideo;
- (void)_dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)sendViaMMSClicked;
- (void)_showMMSComposeSheet;
- (void)_enterVideoEditingMode;
- (void)_showVideoTooLongAlert;
- (void)_transcodeVideoUsingMode:(int)arg1;
- (void)_cancelRemaking;
- (double)_durationForCurrentVideo;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_commonDidFinishEmailAnimation:(_Bool)arg1;
- (void)_composeSheetDidDisplay;
- (void)_finishedSlidingImageDown:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)slideImageOverMessage;
- (void)_displayComposeSheet;
- (void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_animateSendToEmail;
- (void)_reallySendViaEmail:(id)arg1;
- (void)_performSendViaEmail;
- (void)sendViaEmailClicked;
- (void)prepareToSendViaEmail;
- (void)_setComposeSheetViewController:(id)arg1;
- (id)_mailComposeViewControllerWithPhoto:(id)arg1 attachmentIdentifier:(id *)arg2;
- (struct CGRect)_animationDestinationRectForImageSize:(struct CGSize)arg1;
- (void)didEndEditingPhoto;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (void)publishingActivityNeedsVideoEditMode:(id)arg1;
- (_Bool)prepareToDisplayActivitySheet;
- (void)_dismissActivityControllerPopover;
- (void)_endActivityController;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject *)arg1;
- (void)copy:(id)arg1;
- (void)deleteImageClicked:(id)arg1;
- (void)beginEditingPhoto:(id)arg1;
- (void)_dismissEditControllerWithOldStatusBarStyle:(long long)arg1;
- (long long)_presentEditPhotoController;
- (void)_configureEditNavigationController:(id)arg1;
- (void)pauseCurrentMedia:(id)arg1;
- (void)playCurrentMedia:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)arg1;
- (_Bool)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (_Bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewController:(id)arg1 didDisappear:(_Bool)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(_Bool)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(_Bool)arg2;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
@property(nonatomic) _Bool delayImageLoading;
@property(nonatomic) _Bool canDelayImageLoading;
- (void)_didLoadImage:(id)arg1 forObjectID:(id)arg2;
- (void)_loadImageForTile:(id)arg1 format:(int)arg2;
- (_Bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (void)setBottomBarDisabled:(_Bool)arg1;
- (void)setNavigationBarDisabled:(_Bool)arg1;
- (id)videoViewRequestsPickedAirplayRoute:(id)arg1;
- (_Bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(_Bool)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (_Bool)videoViewCanBeginPlayback:(id)arg1;
- (_Bool)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewDidCreateAttachments:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)mainScrollerDidEndSmoothScroll;
- (void)_showTileCache;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(_Bool)arg2;
- (void)_flushTileCache;
- (void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2;
- (void)_validateTileCache:(id)arg1;
- (void)_prepareForDelete;
- (void)_didDeleteCurrentAsset;
- (void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)removeCurrentPhoto:(id)arg1;
- (int)allowedDeleteOperationForAsset:(id)arg1;
- (void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(_Bool)arg2;
- (void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_performCATransition:(id)arg1;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(_Bool)arg6;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 insideCurrentAssetContainer:(_Bool)arg5;
- (_Bool)canShowPreviousImage;
- (_Bool)canShowNextImage;
@property(retain, nonatomic) NSIndexPath *currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(_Bool)arg2;
- (void)_setCurrentIndexPath:(id)arg1;
@property(nonatomic) unsigned long long currentTileIndex;
- (void)setCurrentTileIndex:(unsigned long long)arg1 updateAfterAnimation:(_Bool)arg2;
- (_Bool)_canTrimCurrentVideoInPlace;
- (id)_playbackVideoView;
- (id)_currentTVOutVideoView;
@property(readonly, nonatomic) PLVideoView *currentVideoView;
@property(readonly, nonatomic) PLManagedAsset *currentAssetForZoomTransition;
@property(nonatomic) PLManagedAsset *currentAsset;
- (id)_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (void)_loadSlideshowPlugin;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayRoute:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayRoute:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (void)_updateAfterAnimation;
- (void)_updateTVOutAfterAnimation;
- (void)updateAfterCollapse;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(_Bool)arg2;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1;
- (void)_stopVideoPlaybackForIndexPath:(id)arg1;
- (void)_fadeIn;
- (void)_fadeToViewContents;
- (void)_fadeOut;
- (void)_prepareToFade;
- (void)setAppInteractionDisabled:(_Bool)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(_Bool)arg1;
- (void)_endSlideshowSettingsAnimated:(_Bool)arg1;
- (void)_handleCancelSlideshowSettings:(id)arg1;
- (void)displaySlideshowSheetFromItem:(id)arg1;
- (void)_setMusicIsPlaying:(_Bool)arg1 forPhoto:(id)arg2;
- (void)_setMusicIsPlaying:(_Bool)arg1;
- (void)_slideshowPlayCurrentSlide;
- (void)_slideshowPlayTimerFired:(id)arg1;
- (_Bool)_stopSlideshow;
- (_Bool)_pauseSlideshow;
- (_Bool)_playSlideshow;
- (_Bool)_startingSlideshow;
- (_Bool)setNextSlideshowState:(int)arg1;
- (void)_endSlideshow;
- (void)togglePlayPause:(id)arg1;
@property(readonly, nonatomic) _Bool isPlayingSlideshow;
- (_Bool)_slideshowNotRunning;
- (void)_slideshowWillEnd;
- (void)_slideshowWillBegin;
- (id)_suppresionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)animateToIndex;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(_Bool)arg2 atIndex:(long long)arg3 forLoupe:(_Bool)arg4;
- (long long)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_scrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_scrubberDidBeginScrubbing:(id)arg1;
@property(retain, nonatomic) PLPhotoScrubber *photoScrubber;
- (void)_setupPhotoScrubber:(_Bool)arg1;
- (void)_discardPhotoScrubber;
- (void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2;
- (void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2;
- (void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2;
- (void)_updateForCommentsControllerEditMode:(id)arg1;
- (void)_showCommentTableIfNecessary:(double)arg1;
- (void)_hideCommentsTableIfNecessary:(double)arg1;
- (void)revealComment:(id)arg1;
- (_Bool)showingCommentsTable;
- (void)hideCommentsTable;
- (void)showCommentsTable;
- (void)pageControllerDidEndPaging:(id)arg1;
- (void)_updateCurrentIndexForPageController:(id)arg1;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (id)pageController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (void)_willDisplayTileController:(id)arg1;
- (id)rotatingFooterView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didLoadFullScreenImage:(id)arg1 forPhotoAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) UIView *commentsView;
@property(readonly, nonatomic) UIScrollView *mainScroller;
@property(readonly, nonatomic) PLLibraryImageDataProvider *imageDataProvider;
@property(readonly, nonatomic) int albumFilter;
- (void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2;
@property(readonly, nonatomic) unsigned long long allAssetsCount;
@property(readonly, nonatomic) id <PLAssetContainerList> assetContainerList;
@property(readonly, nonatomic) id <PLAssetContainer> currentAssetContainerForZoomTransition;
@property(readonly, nonatomic) id <PLAssetContainer> currentAssetContainer;
- (void)setMainScrollerEnabled:(_Bool)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_processAssetsDidChange:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)_processAssetContainerDidChange:(id)arg1 withCurrentContainer:(id)arg2;
- (void)_cancelEditControllerIfEditedPhotoDeleted;
- (void)assetContainerDidChange:(id)arg1;
- (void)_updateCachedIndexesForAssetContainerDidChange:(id)arg1;
- (void)_processAssetContainerListDidChangeNotification:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (id)_updateIndexPath:(id)arg1 insertedSections:(id)arg2 deletedSections:(id)arg3;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (_Bool)_shouldPauseOrStopVideo;
- (id)_buttonItemViewWithTag:(int)arg1;
- (_Bool)isRotationEnabled;
- (id)navigationBar;
- (void)setRotationDisabled:(_Bool)arg1;
- (_Bool)isActiveViewControllerInNavigationController;
- (void)_showHDRPromptIfNeeded;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_forceRemoveSavingPhotoHUD;
- (void)_stopSlideshowTimer;
- (void)_startSlideshowTimer;
- (void)_disableIdleTimer;
- (id)_currentTVOutTile;
- (void)transitionDidEnd;
- (void)transitionWillBegin;
@property(readonly, nonatomic) PLPhotoTileViewController *currentTileForZoomTransition;
@property(readonly, nonatomic) PLPhotoTileViewController *currentTile;
- (void)_configureVideoViewInTile:(id)arg1;
- (void)_dereferenceTile:(id)arg1;
- (id)_tileForAsset:(id)arg1 shouldCreate:(_Bool)arg2 tileCache:(id)arg3;
- (id)_fullScreenPreviewImageForPhoto:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (_Bool)_mainScrollerIsVisible;
- (void)_clearFullScreenView;
- (void)_updateFilteredImagesAndShuffle:(_Bool)arg1;
- (void)setUsesPhotoBrowserStyleStatusBar:(_Bool)arg1 animated:(_Bool)arg2;
- (id)newToolbar;
- (id)newNavigationBar;
- (id)contentScrollView;
@property(retain, nonatomic) UIScrollView *pageControllerScrollView;
- (Class)_pageControllerScrollViewClass;
@property(nonatomic) id <PLPhotoBrowserControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithImageDataProvider:(id)arg1;

@end

