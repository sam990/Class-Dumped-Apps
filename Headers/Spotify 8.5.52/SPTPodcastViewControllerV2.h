//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastChipsSectionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastDescriptionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastViewModelDelegate2-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTShowContextMenuControllerDelegate-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEContextMenuAccessoryButton, NSString, NSURL, SPTInfoView, SPTPodcastFilterTableFooterView, SPTPodcastHeaderController, SPTPodcastLogger, SPTPodcastViewModel2, SPTShowContextMenuController, SPTTableView, SPTTheme, VISREFTableHeaderView;
@protocol GLUEImageLoader, GLUETheme, SPTCollectionLogger, SPTCollectionPlatformTestManager, SPTLinkDispatcher, SPTPageContainer, SPTPodcastContextMenuProvider, SPTPodcastEpisodeCellConfigurator, SPTPodcastFollowSectionTableViewCellCommonInterface, SPTPodcastTestManager, SPTShareFeature, SPTUIPresentationService, SPTViewLogger, _TtP31PodcastCreatorEntityPageFeature39SPTPodcastDetailsViewControllerProtocol_;

@interface SPTPodcastViewControllerV2 : UIViewController <SPTNavigationControllerNavigationBarState, SPTPodcastViewModelDelegate2, SPTShowContextMenuControllerDelegate, SPTShareableContext, SPTPodcastChipsSectionTableViewCellDelegate, SPTPodcastDescriptionTableViewCellDelegate, SPContentInsetViewController, SPTPageController, SPViewController, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _dataLoaded;
    SPTPodcastViewModel2 *_viewModel;
    CDUnknownBlockType _contextResponseHandler;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTShowContextMenuController *_showContextMenuController;
    GLUEContextMenuAccessoryButton *_contextMenuButton;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    SPTTableView *_tableView;
    SPTInfoView *_infoView;
    SPTPodcastFilterTableFooterView *_filterResetTableFooterView;
    id <GLUETheme> _legacyTheme;
    SPTTheme *_theme;
    id <SPTShareFeature> _shareFeature;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTUIPresentationService> _presentationService;
    SPTPodcastLogger *_logger;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTViewLogger> _viewLogger;
    NSURL *_firstRowImpressionEpisode;
    SPTPodcastHeaderController *_headerController;
    VISREFTableHeaderView *_podcastTableViewHeader;
    id <SPTPodcastFollowSectionTableViewCellCommonInterface> _followSectionTableViewCell;
    UIViewController<_TtP31PodcastCreatorEntityPageFeature39SPTPodcastDetailsViewControllerProtocol_> *_creatorChipsViewController;
}

@property(retain, nonatomic) UIViewController<_TtP31PodcastCreatorEntityPageFeature39SPTPodcastDetailsViewControllerProtocol_> *creatorChipsViewController; // @synthesize creatorChipsViewController=_creatorChipsViewController;
@property(retain, nonatomic) id <SPTPodcastFollowSectionTableViewCellCommonInterface> followSectionTableViewCell; // @synthesize followSectionTableViewCell=_followSectionTableViewCell;
@property(retain, nonatomic) VISREFTableHeaderView *podcastTableViewHeader; // @synthesize podcastTableViewHeader=_podcastTableViewHeader;
@property(retain, nonatomic) SPTPodcastHeaderController *headerController; // @synthesize headerController=_headerController;
@property(copy, nonatomic) NSURL *firstRowImpressionEpisode; // @synthesize firstRowImpressionEpisode=_firstRowImpressionEpisode;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUETheme> legacyTheme; // @synthesize legacyTheme=_legacyTheme;
@property(retain, nonatomic) SPTPodcastFilterTableFooterView *filterResetTableFooterView; // @synthesize filterResetTableFooterView=_filterResetTableFooterView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) GLUEContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(copy, nonatomic) CDUnknownBlockType contextResponseHandler; // @synthesize contextResponseHandler=_contextResponseHandler;
@property(retain, nonatomic) SPTPodcastViewModel2 *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)evaluatePendingContextResponseHandlerWithViewModel:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic) NSURL *URI;
- (void)episodeDescriptionURLTapped:(id)arg1;
- (void)updateTableViewAfterEpisodeDescriptionHeightChange;
- (void)episodeDescriptionDidCollapse;
- (void)episodeDescriptionDidExpand;
- (void)chipsSectionTableViewCell:(id)arg1 didSelectTopicCategory:(id)arg2;
- (void)viewModel:(id)arg1 showContextMenuForTrailerEpisode:(id)arg2 atIndexPath:(id)arg3;
- (void)viewModel:(id)arg1 scrollToLatestPlayedEpisodeAtIndexPath:(id)arg2;
- (void)viewModelDidSelectContextMenuButton:(id)arg1 senderView:(id)arg2;
- (void)podcastViewModelDidUpdatePlaybackRestrictions:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateFilteredState:(_Bool)arg2;
- (void)showInfoViewWithError:(id)arg1;
- (void)viewModel:(id)arg1 willPresentFilterContextViewController:(id)arg2 fromSender:(id)arg3;
- (void)updateDetailsViewControllersWithPodcastTopics:(id)arg1;
- (void)viewModel:(id)arg1 podcastDidFinishLoadingWithError:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateSectionAtIndexPath:(id)arg2;
- (unsigned long long)preferredNavigationBarState;
- (void)didSelectResetFiltersButton:(id)arg1;
- (void)updateSectionCellWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)showContextMenuController:(id)arg1 didUpdateFollowedState:(_Bool)arg2 forShow:(id)arg3;
- (void)showContextMenuWithSenderView:(id)arg1;
- (void)createContextMenuButton;
- (void)setupConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPodcastViewModel:(id)arg1 glueImageLoader:(id)arg2 logger:(id)arg3 collectionLogger:(id)arg4 showContextMenuController:(id)arg5 episodeCellConfigurator:(id)arg6 collectionTestManager:(id)arg7 podcastTestManager:(id)arg8 podcastContextMenuProvider:(id)arg9 shareFeature:(id)arg10 linkDispatcher:(id)arg11 presentationService:(id)arg12 viewLogger:(id)arg13 creatorChipsViewController:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
