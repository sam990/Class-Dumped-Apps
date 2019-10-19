//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GOONavigationHeaderView, GOONavigationStyle, UIViewController;

@interface GOONavigationHeaderController : NSObject
{
    UIViewController *_viewController;
    GOONavigationHeaderView *_headerView;
    GOONavigationStyle *_style;
    struct {
        _Bool dragging;
        struct CGPoint dragStartOffset;
        struct CGPoint contentOffset;
        _Bool isLiveTransformRegion;
        _Bool endedDragInHeaderLayoutRegion;
        _Bool handlingOffset;
    } _interactionState;
    _Bool _statusBarHidden;
    _Bool _showHeaderWithNextContentOffsetChange;
    _Bool _viewControllerRespondsToHeaderChanges;
    _Bool _headerViewHidden;
    _Bool _shouldAdjustHeaderForScrollViewChanges;
}

@property(nonatomic) _Bool shouldAdjustHeaderForScrollViewChanges; // @synthesize shouldAdjustHeaderForScrollViewChanges=_shouldAdjustHeaderForScrollViewChanges;
@property(nonatomic, getter=isHeaderViewHidden) _Bool headerViewHidden; // @synthesize headerViewHidden=_headerViewHidden;
@property(readonly, nonatomic) GOONavigationHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)parentSetHeaderViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (double)headerFlexHeight;
- (double)defaultDurationForAnimationType:(long long)arg1;
- (double)durationFromDistance:(double)arg1 animationType:(long long)arg2;
- (double)contentDeltaForScrollView:(id)arg1;
- (struct UIEdgeInsets)adjustedInsetsForScrollView:(id)arg1;
- (_Bool)isInRegionJustPastLiveTransform:(id)arg1;
- (_Bool)isLiveTransformRegionInScrollView:(id)arg1;
- (void)updateHeaderStateForScrollView:(id)arg1;
- (void)updateStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)transformHeaderToHeight:(double)arg1 verticalDelta:(double)arg2 animationType:(long long)arg3;
- (void)handleContentOffsetStateChange:(struct CGPoint)arg1 scrollView:(id)arg2;
- (void)handleDragStateChange:(_Bool)arg1 scrollView:(id)arg2;
- (void)handlePanStoppedForScrollView:(id)arg1;
- (void)handlePanStartedForScrollView:(id)arg1;
- (struct CGPoint)transformedHeaderOrigin;
- (_Bool)isScrollHideEnabled;
- (_Bool)isScrollShrinkEnabled;
- (_Bool)isAutoHideEnabled;
- (void)updateHeaderWithAnimation:(_Bool)arg1 hideBanner:(_Bool)arg2;
- (void)willChangeFromScrollView:(id)arg1 toScrollView:(id)arg2;
- (void)scrollView:(id)arg1 panStateDidChange:(long long)arg2;
- (void)scrollView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)setHeaderViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)safeAreaInsetsDidChange;
- (void)updateNavigationStyle;
- (void)updateBarButtonItem:(id)arg1 withNavigationItem:(id)arg2 forKeyPath:(id)arg3;
- (void)updateWithNavigationItem:(id)arg1;
- (id)initWithViewController:(id)arg1 navigationStyle:(id)arg2;
- (id)init;

@end
