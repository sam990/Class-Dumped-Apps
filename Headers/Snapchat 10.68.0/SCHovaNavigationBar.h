//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCHovaSearchViewDataSource-Protocol.h"
#import "SCOverscrolling-Protocol.h"
#import "SCPagingHeaderViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSDictionary, NSString, SCAddFriendsBadgedButton, SCBitmojiProfileBadgeState, SCBitmojiProfileView, SCHovaSearchView, SCMapHintTitleView, SCPagingHeaderView, SCScopedAccess, SCUserSession, UIButton;
@protocol SCHovaNavigationBarDataSource, SCHovaNavigationBarDelegate;

@interface SCHovaNavigationBar : UIView <SCHovaSearchViewDataSource, SCTraceEnabled, SCPagingHeaderViewDelegate, SCOverscrolling>
{
    _Bool _simpleSnap;
    _Bool _buttonsHidden;
    _Bool _ngsEnabled;
    _Bool _pullingDownMap;
    NSArray *_items;
    SCScopedAccess *_friendsFeedDataAccess;
    id <SCHovaNavigationBarDataSource> _dataSource;
    id <SCHovaNavigationBarDelegate> _delegate;
    UIView *_containerView;
    SCHovaSearchView *_searchView;
    SCBitmojiProfileView *_bitmojiProfileView;
    SCAddFriendsBadgedButton *_addFriendsButton;
    SCBitmojiProfileBadgeState *_bitmojiBadgeState;
    UIButton *_statusBarButton;
    double _searchViewCenterOffset;
    NSDictionary *_itemViews;
    long long _visibleIndex;
    SCMapHintTitleView *_mapHintTitleView;
    SCPagingHeaderView *_pagingHeaderView;
    SCUserSession *_userSession;
    struct _NSRange _previousRange;
    struct CGSize _previousBoundsSize;
    struct CGAffineTransform _subviewTransform;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCPagingHeaderView *pagingHeaderView; // @synthesize pagingHeaderView=_pagingHeaderView;
@property(retain, nonatomic) SCMapHintTitleView *mapHintTitleView; // @synthesize mapHintTitleView=_mapHintTitleView;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(nonatomic) struct _NSRange previousRange; // @synthesize previousRange=_previousRange;
@property(nonatomic) long long visibleIndex; // @synthesize visibleIndex=_visibleIndex;
@property(retain, nonatomic) NSDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic, getter=isPullingDownMap) _Bool pullingDownMap; // @synthesize pullingDownMap=_pullingDownMap;
@property(nonatomic, getter=isNGSEnabled) _Bool ngsEnabled; // @synthesize ngsEnabled=_ngsEnabled;
@property(nonatomic, getter=areButtonsHidden) _Bool buttonsHidden; // @synthesize buttonsHidden=_buttonsHidden;
@property(nonatomic, getter=isSimpleSnap) _Bool simpleSnap; // @synthesize simpleSnap=_simpleSnap;
@property(nonatomic) struct CGAffineTransform subviewTransform; // @synthesize subviewTransform=_subviewTransform;
@property(nonatomic) double searchViewCenterOffset; // @synthesize searchViewCenterOffset=_searchViewCenterOffset;
@property(readonly, nonatomic) UIButton *statusBarButton; // @synthesize statusBarButton=_statusBarButton;
@property(retain, nonatomic) SCBitmojiProfileBadgeState *bitmojiBadgeState; // @synthesize bitmojiBadgeState=_bitmojiBadgeState;
@property(readonly, nonatomic) SCAddFriendsBadgedButton *addFriendsButton; // @synthesize addFriendsButton=_addFriendsButton;
@property(readonly, nonatomic) SCBitmojiProfileView *bitmojiProfileView; // @synthesize bitmojiProfileView=_bitmojiProfileView;
@property(readonly, nonatomic) SCHovaSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCHovaNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCHovaNavigationBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SCScopedAccess *friendsFeedDataAccess; // @synthesize friendsFeedDataAccess=_friendsFeedDataAccess;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (_Bool)pagingHeaderView:(id)arg1 shouldDarkenBadgeColorForColor:(id)arg2 atPageIndex:(long long)arg3;
- (void)pagingHeaderView:(id)arg1 didSelectTitleAtIndex:(long long)arg2;
- (double)pagingHeaderView:(id)arg1 percentVisibleForTitleAtIndex:(long long)arg2;
- (id)searchView:(id)arg1 placeholderTitleFontForIndex:(long long)arg2;
- (id)searchView:(id)arg1 placeholderTitleColorForIndex:(long long)arg2;
- (_Bool)searchView:(id)arg1 shouldDimPlaceholderForIndex:(long long)arg2;
- (id)searchView:(id)arg1 placeholderForIndex:(long long)arg2;
- (void)updatePercentOverscrolled:(double)arg1;
- (id)currentVisibleItemView;
- (id)itemViewForIndex:(long long)arg1;
- (struct CGRect)itemViewFrame;
- (void)_rotateMapHintViews;
- (_Bool)shouldDisplayAddFriendsButton;
- (void)appStartupDidComplete;
- (void)updateVerticalScrollVisibility:(double)arg1;
- (void)reloadData;
- (void)transitionNavigationItemView:(id)arg1 withVisibleRange:(struct _NSRange)arg2 atIndex:(long long)arg3 percentVisible:(double)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_configBadgeStateAfterStartComplete;
- (id)initWithNavigationItems:(id)arg1 userSession:(id)arg2 user:(id)arg3 frame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
