//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingCameraCoordinatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingCheckoutBridgeControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingLightboxAnimationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPDefaultProductVariantSelectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselARSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselDataControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPInterstitialsNetworkerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPLightboxViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPListKitDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPModuleHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPVariantsControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductLaunchTimerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductViewerHeaderControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSessionTracking-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCreationViewControllerNavigationDelegate-Protocol.h>

@class IGActionableConfirmationToastController, IGFeedItem, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGSaveProductLogger, IGScrollPerfLogger, IGSessionTracker, IGShoppingBagLogger, IGShoppingCameraCoordinator, IGShoppingCheckoutBridgeController, IGShoppingConsumptionFeedItemLogger, IGShoppingConsumptionTimespentLogger, IGShoppingFeedNetworker, IGShoppingPDPDefaultProductVariantSelectionController, IGShoppingPDPHeroCarouselDataController, IGShoppingPDPInterstitialsNetworker, IGShoppingPDPLightboxAnimationController, IGShoppingPDPLightboxViewController, IGShoppingPDPListKitDataSource, IGShoppingPDPPerformanceLogger, IGShoppingPDPPresentationContext, IGShoppingPDPProductInventoryLoggingManager, IGShoppingPDPSurveyController, IGShoppingProductLaunchTimer, IGShoppingProductViewerHeaderController, IGSimpleWebViewController, IGSponsoredSupportConfiguration, IGUserSession, NSDate, NSString, UICollectionView;
@protocol IGShoppingPDPViewControllerDelegate;

@interface IGShoppingPDPViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterUpdateListener, IGMediaThumbnailSectionControllerSelectionDelegate, IGSaveStatusListener, IGShoppingCameraCoordinatorDelegate, IGShoppingCheckoutBridgeControllerDelegate, IGShoppingPDPDefaultProductVariantSelectionControllerDelegate, IGShoppingPDPHeroCarouselARSectionControllerDelegate, IGShoppingPDPHeroCarouselDataControllerDelegate, IGShoppingPDPHeroCarouselSectionControllerDelegate, IGShoppingPDPInterstitialsNetworkerDelegate, IGShoppingLightboxAnimationControllerDelegate, IGShoppingPDPLightboxViewControllerDelegate, IGShoppingPDPListKitDataSourceDelegate, IGShoppingPDPModuleHeaderSectionControllerDelegate, IGShoppingPDPVariantsControllerDelegate, IGShoppingProductLaunchTimerDelegate, IGShoppingProductViewerHeaderControllerDelegate, IGShoppingSessionTracking, IGStoryCreationViewControllerNavigationDelegate>
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGShoppingPDPPresentationContext *_presentationContext;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGShoppingPDPListKitDataSource *_dataSource;
    IGShoppingProductViewerHeaderController *_headerController;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_mftbPreviewHandler;
    IGActionableConfirmationToastController *_toastController;
    IGSimpleWebViewController *_reportingFlowWebVC;
    IGShoppingFeedNetworker *_networker;
    IGShoppingPDPInterstitialsNetworker *_interstitialsNetworker;
    double _networkLoadStartTime;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSaveProductLogger *_saveProductLogger;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGShoppingPDPPerformanceLogger *_perfLogger;
    IGShoppingBagLogger *_bagLogger;
    IGShoppingConsumptionTimespentLogger *_shoppingTimespentLogger;
    IGShoppingPDPProductInventoryLoggingManager *_inventoryLoggingManager;
    IGShoppingCheckoutBridgeController *_checkoutBridgeController;
    IGShoppingPDPDefaultProductVariantSelectionController *_defaultProductVariantSelectionController;
    IGShoppingPDPHeroCarouselDataController *_heroCarouselDataController;
    IGShoppingPDPLightboxViewController *_lightboxViewController;
    IGShoppingPDPLightboxAnimationController *_viewerTransitionController;
    IGShoppingCameraCoordinator *_shoppingCameraCoordinator;
    IGShoppingProductLaunchTimer *_productLaunchTimer;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGShoppingPDPSurveyController *_surveyController;
    NSDate *_feedInitialLoadStartTime;
    NSDate *_productGroupLoadStartTime;
    NSDate *_firstPlaceholderVariantSelectionTime;
    _Bool _hasLoggedLoadSuccess;
    NSString *_checkoutSessionId;
    _Bool _shoppingBagEnabled;
    _Bool _unselectedVariantsEnabled;
    _Bool _isProductLaunchTimerEnabled;
    _Bool _isPresentedModally;
    long long _displayStyle;
    long long _trustSignalsStyle;
    IGSessionTracker *_shoppingSessionTracker;
}

@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)shoppingProductLaunchTimer:(id)arg1 didFireTimerForProductItem:(id)arg2;
- (void)productCarouselSectionController:(id)arg1 didTapDismissForProductItem:(id)arg2 viewModel:(id)arg3;
- (void)productCarouselSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)dismissShoppingCameraAndShowPDPForCoordinator:(id)arg1 productItem:(id)arg2 creationViewController:(id)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 asset:(id)arg7 storyModelArray:(id)arg8 metadataArray:(id)arg9;
- (void)infoViewSectionController:(id)arg1 cellTappedWithViewModel:(id)arg2;
- (void)checkoutBridgeControllerDidCompletePurchase:(id)arg1 withProductIds:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)productWithContextCardSectionController:(id)arg1 didTapDismissForProductItem:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didTapProductItem:(id)arg2;
- (_Bool)productWithContextCardSectionController:(id)arg1 containsLastSavedProductItem:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 willNavigateToPDPForViewModel:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didUpdateProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3;
- (void)shoppingPDPModuleHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)shoppingPDPDefaultProductVariantSelectionController:(id)arg1 didCompleteProductItemSelection:(id)arg2;
- (void)variantSelectorSectionController:(id)arg1 didTapVariantDimension:(id)arg2;
- (void)shoppingPDPColorVariantCarouselSectionController:(id)arg1 didSelectVariantValue:(id)arg2 fromVariantDimension:(id)arg3;
- (void)shoppingPDPTryInARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2;
- (void)shoppingPDPHeroCarouselARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2;
- (void)primaryButtonSectionControllerDidTapSave:(id)arg1;
- (void)primaryButtonSectionController:(id)arg1 didTapNativeCheckoutWithDestination:(long long)arg2 sectionIdentifier:(id)arg3;
- (void)shoppingProductDetailsSectionController:(id)arg1 didTapSaveButtonWithShouldSave:(_Bool)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)shoppingPDPLightboxAnimationController:(id)arg1 didRequestHeaderViewVisibilityUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (id)videoPlayerForLightbox;
- (void)prepareForAnimationTransitionWithIdentifier:(id)arg1 videoPlayer:(id)arg2 animationFinished:(_Bool)arg3;
- (void)lightboxViewController:(id)arg1 didScrollToObjectWithIdentifier:(id)arg2 animationTransitionMediaView:(id)arg3;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didTapViewModelWithIdentifier:(id)arg2 mediaCellAnimationTransitionView:(id)arg3 videoPlayer:(id)arg4 productSticker:(id)arg5 isLightboxEnabled:(_Bool)arg6;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didUpdateFetchState:(long long)arg2 forProductItem:(id)arg3;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didLoadHeroCarouselDataModel:(id)arg2 forProductItem:(id)arg3 withLoadTime:(double)arg4;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didFailForProductItem:(id)arg2 withError:(id)arg3;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didLoadInterstitials:(id)arg2 forProductItem:(id)arg3;
- (void)pdpVariantsControllerViewModelsNeedReloading:(id)arg1;
- (void)pdpVariantsController:(id)arg1 wantsCheckoutWithProductItem:(id)arg2;
- (void)pdpVariantsController:(id)arg1 didResolveProductItem:(id)arg2;
- (void)pdpVariantsController:(id)arg1 didUpdateProductGroupFetchState:(id)arg2;
- (void)shoppingProductViewerHeaderControllerDidTapBagButton:(id)arg1;
- (void)shoppingProductViewerHeaderController:(id)arg1 didUpdateHeaderStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)shoppingProductViewerHeaderControllerDidTapBackButton:(id)arg1;
- (void)shoppingProductViewerHeaderControllerDidTapMoreButton:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)_showPDPForProductItem:(id)arg1 entryPoint:(id)arg2 priorModule:(id)arg3;
- (void)_didDismissShoppingCamera;
- (void)_showShoppingCameraFromAnchorView:(id)arg1 entryPoint:(unsigned long long)arg2 entryPointString:(id)arg3;
- (void)_handleAddToBagFailureForProductItem:(id)arg1 withError:(id)arg2;
- (void)_handleAddToBagSuccessWithProductItem:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_addAndPresentShoppingBagForProductItem:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_presentCheckoutNUXDialogIfNeeded;
- (void)_presentNativeCheckoutForProductItem:(id)arg1 fromViewController:(id)arg2;
- (void)_handleProductGroupLoadFailureWithError:(id)arg1;
- (void)_handleProductGroupLoadSuccess:(id)arg1;
- (void)_handleAllVariantsSelectedWithPendingCheckoutForProductItem:(id)arg1;
- (_Bool)_shouldHandlePrimaryButtonTap;
- (void)_invalidateNetworkCache;
- (void)_presentProductDebugInfo;
- (void)_updateProductLaunchTimer:(id)arg1;
- (void)_presentVisualVariantSelectionFlow;
- (_Bool)_moreButtonEnabled;
- (id)_moreButtonActions;
- (void)_updateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 isFromDropsSetReminder:(_Bool)arg3;
- (void)_handleTapToUpdateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 isFromDropsSetReminder:(_Bool)arg3;
- (void)_showFetchFailureAlertBar;
- (void)_logPDPAbandonIfNeeded;
- (void)_logReportingEvent:(unsigned long long)arg1;
- (void)_didTapReportingFlowDone;
- (void)_enterReportingFlow;
- (void)_updateStatusBarAnimated:(_Bool)arg1;
- (void)_handleHeroCarouselLoaded:(id)arg1 forProductItem:(id)arg2 loadType:(long long)arg3 loadTime:(double)arg4;
- (void)_feedResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_feedFetchStateUpdated:(id)arg1;
- (void)_processLoadedDataModelForViewpointActions:(id)arg1;
- (id)_prepareDataModelForSwitchToSelectedProductItem:(id)arg1 previousDataModel:(id)arg2;
- (void)_cacheLoadedDataModel:(id)arg1 requestConfiguration:(id)arg2;
- (void)_applyLoadedDataModel:(id)arg1 loadType:(long long)arg2;
- (void)_updateDataModel:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProductGroup;
- (void)_performInitialFetchForProductGroupWithProductItem:(id)arg1;
- (void)_loadFeedWithAction:(long long)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 feedItem:(id)arg3 merchant:(id)arg4 sponsoredSupportConfiguration:(id)arg5 presentationContext:(id)arg6 delegate:(id)arg7 sessionTracker:(id)arg8 performanceLogger:(id)arg9 priorModule:(id)arg10 loggingExtras:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

