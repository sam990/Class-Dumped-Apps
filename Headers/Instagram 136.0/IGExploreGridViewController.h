//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGAlertBarPresenter-Protocol.h>
#import <InstagramAppCoreFramework/IGChainingContainerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGEasyReportDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGExploreDataControllerSingleTopicListener-Protocol.h>
#import <InstagramAppCoreFramework/IGExploreLayoutListener-Protocol.h>
#import <InstagramAppCoreFramework/IGExploreListKitDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedPreviewHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMinimizedViewerPresenterCoverListener-Protocol.h>
#import <InstagramAppCoreFramework/IGScrollableViewControllerProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoFeedViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGChainingContext, IGDiscoveryTopicModel, IGExploreDataController, IGExploreGridLoggingContext, IGExploreListKitDataSource, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGPlaybackCoordinator, IGRefreshControl, IGScrollPerfLogger, IGSessionTracker, IGShoppingDestinationDataController, IGUserSession, IGWaterfallCollectionViewLayout, NSDictionary, NSString, UICollectionView;
@protocol IGExploreLayoutContext;

@interface IGExploreGridViewController : IGViewController <IGAlertBarPresenter, IGChainingContainerDelegate, IGEasyReportDelegate, IGExploreListKitDataSourceDelegate, IGExploreDataControllerSingleTopicListener, IGExploreLayoutListener, IGFeedPreviewHandlerDelegate, IGFeedScrollViewListener, IGMinimizedViewerPresenterCoverListener, IGVideoFeedViewControllerDelegate, UICollectionViewDelegate, IGScrollableViewControllerProtocol>
{
    IGDiscoveryTopicModel *_topic;
    IGUserSession *_userSession;
    IGExploreDataController *_dataController;
    IGShoppingDestinationDataController *_shoppingDataController;
    IGSessionTracker *_sessionTracker;
    IGChainingContext *_chainingContext;
    id <IGExploreLayoutContext> _layoutContext;
    CDUnknownBlockType _firstAppearanceCallback;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    IGWaterfallCollectionViewLayout *_collectionViewLayout;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGExploreListKitDataSource *_listDataSource;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_previewHandler;
    IGRefreshControl *_refreshControl;
    _Bool _scrollViewIsScrollingToTop;
    _Bool _viewHasAppeared;
    _Bool _viewIsCoveredByMinimizableViewController;
    _Bool _hasExhaustedContent;
    IGExploreGridLoggingContext *_loggingContext;
    IGScrollPerfLogger *_scrollPerfLogger;
    NSDictionary *_navigationExtras;
    _Bool _modernLoggingSchemaEnabled;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)contentInsetsForAlertBar;
- (void)minimizedViewerPresenter:(id)arg1 didEndCoverWithViewController:(id)arg2;
- (void)minimizedViewerPresenter:(id)arg1 didCoverWithViewController:(id)arg2;
- (void)didSelectReportReason:(long long)arg1 entity:(id)arg2;
- (void)_updateModuleGraph;
- (void)discoveryShoppingSectionController:(id)arg1 didSelectCellWithViewModel:(id)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)previewHandler:(id)arg1 previewActionsForFeedItem:(id)arg2 defaultActionProvider:(CDUnknownBlockType)arg3;
- (id)hashtagModelForPreviewHandler:(id)arg1;
- (id)previewHandler:(id)arg1 loggingExtrasForFeedItem:(id)arg2 atIndexPath:(id)arg3;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)chainingContainer:(id)arg1 didTapSendButtonForFeedItem:(id)arg2;
- (void)chainingContainer:(id)arg1 didRetrieveChainingPaginationToken:(id)arg2;
- (_Bool)shouldShowPillForChainingController:(id)arg1;
- (void)chainingContainerDidShowPill:(id)arg1;
- (double)chainingContainerAdditionalBottomInsetForPill:(id)arg1;
- (void)videoFeedViewController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoFeedViewController:(id)arg1 willDismissWithFocusedFeedItem:(id)arg2 currentPlaybackTime:(double)arg3;
- (void)discoveryChannelSectionController:(id)arg1 didSelectItem:(id)arg2;
- (void)IGTVSectionController:(id)arg1 didSelectItem:(id)arg2;
- (void)mediaSectionController:(id)arg1 didSelectItem:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)_scrollViewNearBottomAccessibility;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)exploreLayoutContext:(id)arg1 didUpdateTopContentInsetAdjustment:(double)arg2;
- (void)exploreLayoutContext:(id)arg1 didUpdateMaxTopContentInsetAdjustment:(double)arg2;
- (void)exploreLayoutContext:(id)arg1 didUpdateContentInset:(struct UIEdgeInsets)arg2;
- (void)exploreDataController:(id)arg1 didUpdateFetchState:(id)arg2 forTopic:(id)arg3;
- (void)exploreDataController:(id)arg1 didUpdateDataStore:(id)arg2 forTopic:(id)arg3;
- (void)_pushShoppingViewControllerForViewModel:(id)arg1;
- (void)_pushViewControllerForTopic:(id)arg1;
- (void)_displayReportActionForFeedItem:(id)arg1;
- (id)_seeFewerPostsLikeThisActionForFeedItem:(id)arg1;
- (id)_reportActionForFeedItem:(id)arg1;
- (id)_sectionLoggingProviderWithTopic:(id)arg1;
- (void)_scrollToCurrentTopContentInset;
- (void)_updateCollectionViewTraits;
- (void)_createScrollViewAnnouncerIfNeeded;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)_updateFetchStateApplyingListUpdates:(_Bool)arg1;
- (_Bool)_requestMediaWithAction:(long long)arg1;
- (void)_updateListDataStore;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (_Bool)disableNavigationEvent;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)analyticsExtras;
- (id)analyticsModule;
- (id)initWithTopic:(id)arg1 userSession:(id)arg2 dataController:(id)arg3 shoppingDataController:(id)arg4 sessionTracker:(id)arg5 layoutConfig:(struct IGGridLayoutConfiguration)arg6 loggingContext:(id)arg7 chainingContext:(id)arg8 firstAppearanceCallback:(CDUnknownBlockType)arg9 layoutContext:(id)arg10 navigationExtras:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

