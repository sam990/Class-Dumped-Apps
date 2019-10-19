//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerDefultHeightProtocol-Protocol.h"
#import "UIViewControllerFetchDataProtocol-Protocol.h"
#import "UIViewControllerImpressionableProtocol-Protocol.h"
#import "UIViewControllerRefreshCellProtocol-Protocol.h"
#import "UIViewControllerRemoveFromParentProtocol-Protocol.h"

@class NSArray, NSString, NSTimer, StyledPageControl, UIActivityIndicatorView, UICollectionView, UILabel, UIView;

@interface FVRSearchPromotionsViewController : UIViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerDefultHeightProtocol, UIViewControllerFetchDataProtocol, UIViewControllerRefreshCellProtocol, UIViewControllerRemoveFromParentProtocol, UIViewControllerImpressionableProtocol>
{
    _Bool _isCurrentlyUserScrolling;
    UIView *_mainViewContainer;
    NSArray *_constraintMainContainer;
    UICollectionView *_searchPromotionsCollectionView;
    UILabel *_titleLabel;
    UILabel *_descriptioLable;
    StyledPageControl *_pageControl;
    UIActivityIndicatorView *_activityIndicatorView;
    NSArray *_searchPromotionsArray;
    NSTimer *_autoScrollTimer;
}

+ (id)initWithSearchPromotionsArray:(id)arg1;
@property(nonatomic) _Bool isCurrentlyUserScrolling; // @synthesize isCurrentlyUserScrolling=_isCurrentlyUserScrolling;
@property(retain, nonatomic) NSTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(retain, nonatomic) NSArray *searchPromotionsArray; // @synthesize searchPromotionsArray=_searchPromotionsArray;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak StyledPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UILabel *descriptioLable; // @synthesize descriptioLable=_descriptioLable;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UICollectionView *searchPromotionsCollectionView; // @synthesize searchPromotionsCollectionView=_searchPromotionsCollectionView;
@property(retain, nonatomic) NSArray *constraintMainContainer; // @synthesize constraintMainContainer=_constraintMainContainer;
@property(nonatomic) __weak UIView *mainViewContainer; // @synthesize mainViewContainer=_mainViewContainer;
- (void).cxx_destruct;
- (void)getDataWithCompletionDispatchGroup:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)openCategoryResultsWithCategoryItem:(id)arg1 subCategoryItem:(id)arg2;
- (void)startBuyerRequestWizardWithCategoryItem:(id)arg1 subCategoryItem:(id)arg2 searchCriterias:(id)arg3;
- (void)openCategoryScreenWith:(id)arg1;
- (void)updateTitleAccordingToVisibleCell;
- (void)removeFromParentVC;
- (void)refreshCells;
- (void)setUpPageControl;
- (void)autoScrolingTimerFiered;
- (void)endAutoScrollTimer;
- (void)setIsCurrentlyUserScrollingToNo;
- (void)startAutoScrollTimer;
- (void)setupCollectionViewItemSize;
- (void)preFechImages;
- (double)defultHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
