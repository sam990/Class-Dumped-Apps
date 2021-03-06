//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGAddPartnerTaggingViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemLoggingProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemVideoLoggingProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemWithCarouselLoggingProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGInteractiveDismissTransitionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGNavigationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGNotificationBarListener-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetNavigationControllerPresentDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetTapListener-Protocol.h>
#import <InstagramAppCoreFramework/IGRotationProvidingViewControllerType-Protocol.h>
#import <InstagramAppCoreFramework/IGTVAdItemActionsControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVFeedItemActionsControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVGuideContainerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVGuideViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVUpNextViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVVideoFeedViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGAddPartnerManager, IGAudioSessionClient, IGBusinessToolAlertViewController, IGDirectRecipientListViewConfiguration, IGDirectionalPanGestureRecognizer, IGFeedItem, IGPartialModalSheetViewController, IGTVAdItemActionsController, IGTVFeedItemActionsController, IGTVGuideActionsConfig, IGTVGuideContainerViewController, IGTVGuideViewController, IGTVSeriesNotificationToastController, IGTVUpNextViewController, IGTVVideoFeedViewController, IGTVViewerConfig, IGTVViewerLoggingContext, IGUserSession, NSString, UITapGestureRecognizer;
@protocol IGDirectShareSheetControlling, IGInteractiveDismissTransitionControllerType, IGTVChannelDataSourceType, IGTVGuideDataSource;

@interface IGTVViewerViewController : IGViewController <IGAddPartnerTaggingViewControllerDelegate, IGDirectShareSheetControllerDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemLoggingProviderDelegate, IGFeedItemVideoLoggingProviderDelegate, IGFeedItemWithCarouselLoggingProviderDelegate, IGInteractiveDismissTransitionControllerDelegate, IGNavigationControllerDelegate, IGNotificationBarListener, IGPartialModalSheetListener, IGPartialModalSheetTapListener, IGPartialModalSheetNavigationControllerPresentDelegate, IGTVAdItemActionsControllerDelegate, IGTVFeedItemActionsControllerDelegate, IGTVGuideContainerDelegate, IGTVGuideViewControllerDelegate, IGTVUpNextViewControllerDelegate, IGTVVideoFeedViewControllerDelegate, UIGestureRecognizerDelegate, IGGestureHandler, IGRotationProvidingViewControllerType>
{
    IGUserSession *_userSession;
    _Bool _rotationSupported;
    IGAudioSessionClient *_audioSessionClient;
    UITapGestureRecognizer *_tvGuideDismissTapGesture;
    IGDirectionalPanGestureRecognizer *_upNextSheetPresentationPanGesture;
    IGDirectRecipientListViewConfiguration *_directRecipientConfiguration;
    IGTVSeriesNotificationToastController *_toastController;
    IGAddPartnerManager *_addPartnerManager;
    _Bool _endScreenFromFeedPreviewEnabled;
    _Bool _upNextSheetEnabled;
    _Bool _upNextSheetWithBrowseButtonEnabled;
    _Bool _hasConfiguredForInitialDestination;
    IGTVVideoFeedViewController *_videoFeedViewController;
    IGTVGuideViewController *_tvGuideViewController;
    id <IGTVGuideDataSource> _tvGuideDataSource;
    IGTVGuideActionsConfig *_tvGuideActionsConfig;
    IGTVViewerConfig *_viewerConfig;
    IGTVViewerLoggingContext *_loggingContext;
    IGTVGuideContainerViewController *_tvGuideContainerViewController;
    _Bool _userHasSelectedOtherVideoUsingTVGuideOrUpNext;
    id <IGDirectShareSheetControlling> _directShareSheetController;
    _Bool _isPausedForDirectShareSheetController;
    IGFeedItem *_directFeedItem;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    _Bool _shouldPauseForPartialModalSheet;
    _Bool _isPausedForPartialModalSheet;
    double _partialModalSheetOffset;
    double _partialModalSheetPresentationProgress;
    IGTVFeedItemActionsController *_feedItemActionsController;
    IGTVAdItemActionsController *_adItemActionsController;
    _Bool _isPausedForFeedItemActionsController;
    id <IGTVChannelDataSourceType> _upNextDataSource;
    IGTVUpNextViewController *_tvUpNextViewController;
    _Bool _browseButtonFromBottomsUpSheetTapped;
    _Bool _isShowingUpNextSheet;
    IGBusinessToolAlertViewController *_alertViewController;
    id <IGInteractiveDismissTransitionControllerType> _transitionController;
}

@property(retain, nonatomic) id <IGInteractiveDismissTransitionControllerType> transitionController; // @synthesize transitionController=_transitionController;
- (void).cxx_destruct;
- (_Bool)_canOpenTVGuideOrUpNextSheet;
- (_Bool)_shouldShowBrowseButton;
- (void)_navigateToBrowse;
- (void)_updateUpNextDataSourceIfNeededWithFeedItem:(id)arg1;
- (void)_tryResumePlaybackAfterActionsControllerDidFinish;
- (void)_presentTVGuideOrUpNextSheetWithPresentingGesture:(id)arg1;
- (id)_exposeAndGenerateUpNextConfig;
- (void)_presentViewsAndLikesViewControllerForFeedItem:(id)arg1;
- (void)_presentCommentsViewControllerForFeedItem:(id)arg1 entryPoint:(long long)arg2 focusedCommentId:(id)arg3;
- (void)_handleOrganicProfileTapForUser:(id)arg1 fromFeedItem:(id)arg2;
- (void)_handleUpNextPanRecognizer:(id)arg1;
- (void)_unsetStatusBarVolumeViewConfiguration;
- (void)_setStatusBarVolumeViewConfiguration;
- (void)_tryFadeChromeAfterDelay;
- (void)_resetChromeToVisible;
- (void)_cancelPendingChromeFade;
- (long long)_videoOrientation;
- (struct CGRect)_videoViewFrame;
- (void)_handleNewBusinessPartnerTagged:(id)arg1;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)arg1;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)arg1 viewController:(id)arg2;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)arg1 viewController:(id)arg2;
- (void)cameraTransitionController:(id)arg1 didDragToDismissViewController:(id)arg2;
- (id)extraDictionaryForFeedItem:(id)arg1 carouselItemIndex:(long long)arg2;
- (id)extraVideoLoggingDictionaryForFeedItem:(id)arg1;
- (id)followControllerContextStringForFeedItem:(id)arg1;
- (id)customModuleForFeedItem:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sessionId;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPost:(id)arg6;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2;
- (void)adItemActionsController:(id)arg1 didHideAdItem:(id)arg2 withReason:(id)arg3;
- (void)adItemActionsControllerDidFinish:(id)arg1;
- (id)_sponsorToRemoveFeedItem:(id)arg1 removeTagInitiatedBySponsor:(_Bool)arg2;
- (void)_showConfirmRemoveSponsorPartnerAlertForFeedItem:(id)arg1 removeTagInitiatedBySponsor:(_Bool)arg2;
- (void)actionsControllerDidFinish:(id)arg1;
- (void)actionsController:(id)arg1 didTapInsightsForFeedItem:(id)arg2;
- (void)actionsController:(id)arg1 didTapEditBusinessPartnerForFeedItem:(id)arg2;
- (void)_presentAddPartnerFlowFeedItem:(id)arg1;
- (void)actionsController:(id)arg1 didTapTagBusinessPartnerForFeedItem:(id)arg2;
- (void)actionsController:(id)arg1 didTapEditForFeedItem:(id)arg2;
- (void)_showErrorAlertBarAndResumePlayback;
- (_Bool)_canReachServer;
- (void)_removeSponsorPartner:(id)arg1 feedItem:(id)arg2;
- (void)actionsController:(id)arg1 didTapRemoveBrandedContentTagForFeedItem:(id)arg2;
- (void)_dismissTapped;
- (void)actionsController:(id)arg1 didTapLikeAction:(_Bool)arg2 feedItem:(id)arg3 parentMediaPK:(id)arg4;
- (void)actionsController:(id)arg1 didTapAboutBrandedContentForFeedItem:(id)arg2;
- (void)partialModalSheetNavigationController:(id)arg1 didPresentViewController:(id)arg2;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)partialModalSheetDidTapDimmingBackgroundView:(id)arg1;
- (struct CGAffineTransform)_portraitVideoFeedViewTransformForHalfSheetOffset:(double)arg1;
- (double)_landscapeVideoFeedControllerAlphaForHalfSheetProgress:(double)arg1 offset:(double)arg2;
- (struct CGAffineTransform)_landscapeVideoFeedViewTransformForHalfSheetOffset:(double)arg1;
- (void)_updateVideoFeedViewTransformAndAlpha;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)notificationBarTapped:(id)arg1;
- (void)tvVideoFeedDidShowEndScreen:(id)arg1;
- (void)tvVideoFeedDidPlayOrScrubToEndAndMediaIsPausedOnCompletion:(id)arg1;
- (void)tvVideoFeed:(id)arg1 didFollowUser:(id)arg2 withSeriesInfo:(id)arg3;
- (void)tvVideoFeed:(id)arg1 didTapSeriesInfo:(id)arg2 user:(id)arg3;
- (void)tvVideoFeedDidTapExitLandscape:(id)arg1;
- (void)tvVideoFeedDidTapEnterLandscape:(id)arg1;
- (struct CGSize)tvVideoFeedDidRequestVideoSize:(id)arg1;
- (_Bool)tvVideoFeedCanAutoAdvance:(id)arg1;
- (_Bool)tvVideoFeedCanResumePlayback:(id)arg1;
- (void)tvVideoFeed:(id)arg1 withLinkService:(id)arg2 didTapURL:(id)arg3;
- (void)tvVideoFeed:(id)arg1 didTapUser:(id)arg2 forAdItem:(id)arg3;
- (void)tvVideoFeed:(id)arg1 didTapUser:(id)arg2 forOrganicFeedItem:(id)arg3;
- (void)tvVideoFeed:(id)arg1 didFocusFeedItem:(id)arg2 inChannelPK:(id)arg3;
- (id)_makePartialModalSheetWithViewController:(id)arg1 presentingGestureRecognizer:(id)arg2 navigationBarTitle:(id)arg3 prefersNavigationBarHidden:(_Bool)arg4 canExpandToFullScreen:(_Bool)arg5;
- (void)_presentPartialModalSheetWithViewController:(id)arg1 presentingGestureRecognizer:(id)arg2 navigationBarTitle:(id)arg3 prefersNavigationBarHidden:(_Bool)arg4 canExpandToFullScreen:(_Bool)arg5 shouldPauseVideo:(_Bool)arg6 animated:(_Bool)arg7;
- (void)tvVideoFeedDidTapOpenDebugReactions:(id)arg1 forFeedItem:(id)arg2;
- (void)tvVideoFeed:(id)arg1 didTapOverflowForAdItem:(id)arg2;
- (void)tvVideoFeed:(id)arg1 didTapOverflowForFeedItem:(id)arg2 inChannelPK:(id)arg3;
- (void)tvVideoFeed:(id)arg1 didTapDirectForFeedItem:(id)arg2;
- (void)tvVideoFeed:(id)arg1 didTapViewsForFeedItem:(id)arg2;
- (void)tvVideoFeed:(id)arg1 didTapCommentsForFeedItem:(id)arg2;
- (void)tvVideoFeedDidTapOpenBrowse:(id)arg1;
- (void)tvVideoFeedDidTapOpenTVGuide:(id)arg1;
- (void)tvVideoFeedWillDisplaySurvey:(id)arg1;
- (void)tvVideoFeedDidTapClose:(id)arg1;
- (void)tvGuideViewControllerDidFetchGuide:(id)arg1;
- (void)tvGuideViewController:(id)arg1 didSelectItem:(id)arg2 inChannelWithDataSource:(id)arg3;
- (void)upNextViewControllerDidTapOpenBrowseButton:(id)arg1;
- (void)upNextViewController:(id)arg1 didSelectItem:(id)arg2 inChannelWithDataSource:(id)arg3;
- (_Bool)tvGuideContainerCanBeginInteractivePresentation:(id)arg1;
- (void)tvGuideContainerDidDismiss:(id)arg1;
- (void)tvGuideContainerWillDismiss:(id)arg1;
- (void)tvGuideContainerWillPresent:(id)arg1 isFromGesture:(_Bool)arg2;
- (void)tvGuideContainer:(id)arg1 didUpdatePresentationProgress:(double)arg2;
- (id)analyticsModule;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTVGuideDismissTap:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didSelectTagPartnerCTAForFeedItem:(id)arg1;
- (void)_makeAlertViewControllerIfNeededForFeedItem:(id)arg1;
- (void)_dismissEligibilityLearnMoreViewControllerAndPresentConfirmationDialog:(id)arg1 feedItem:(id)arg2;
- (void)_openEligibilityLearnMoreViewControllerForFeedItem:(id)arg1;
- (void)_openAddPartnerTaggingViewControllerForFeedItem:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (struct UIEdgeInsets)preferredContentInsets;
- (unsigned long long)supportedInterfaceOrientations;
- (double)_toastBottomInset;
- (id)_toastContainerView;
- (struct UIEdgeInsets)_videoFeedInsets;
- (struct CGRect)_videoFeedFrame;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 rotationSupported:(_Bool)arg2 tvGuideDataSource:(id)arg3 tvGuideActionsConfig:(id)arg4 viewerConfig:(id)arg5 loggingContext:(id)arg6 adInsertionHandler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

