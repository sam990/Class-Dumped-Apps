//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGPageViewControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPageViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPlaceCollectionAddSpotResultsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPlaceCollectionAddSpotSearchResultSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTabControlDelegate-Protocol.h>

@class IGPageViewController, IGPlaceCollectionAddItemSearchViewController, IGPlaceCollectionAddSpotResultsViewController, IGPlaceCollectionBottomTabsView, IGUserSession, NSArray, NSString;
@protocol IGPlaceCollectionAddSpotTabViewControllerDelegate;

@interface IGPlaceCollectionAddSpotTabViewController : IGViewController <IGPlaceCollectionAddSpotResultsViewControllerDelegate, IGPlaceCollectionAddSpotSearchResultSectionControllerDelegate, IGTabControlDelegate, IGPageViewControllerDelegate, IGPageViewControllerDataSource>
{
    IGUserSession *_userSession;
    IGPageViewController *_pageViewController;
    NSArray *_contentViewControllers;
    IGPlaceCollectionAddItemSearchViewController *_searchViewController;
    IGPlaceCollectionAddSpotResultsViewController *_savedViewController;
    IGPlaceCollectionAddSpotResultsViewController *_postsViewController;
    IGPlaceCollectionBottomTabsView *_tabsView;
    id <IGPlaceCollectionAddSpotTabViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPlaceCollectionAddSpotTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addSpotResultsViewController:(id)arg1 didTapAddLocation:(id)arg2 withItem:(id)arg3;
- (void)placeCollectionSearchResultSectionControllerDidTapAdd:(id)arg1;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (void)pageViewController:(id)arg1 didChangeCurrentViewController:(id)arg2 toController:(id)arg3 atIndex:(long long)arg4;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (void)_cancelButtonTapped;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

