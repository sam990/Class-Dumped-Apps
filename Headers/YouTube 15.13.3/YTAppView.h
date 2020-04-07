//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDXViewObserver-Protocol.h"
#import "YTAppWatchContainer-Protocol.h"
#import "YTNGWatchLayerViewExpansionObserver-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"

@class MDXView, NSString, UIScreenEdgePanGestureRecognizer, YTNGWatchLayerView, YTSlimStatusBarView;
@protocol YTAppRootContainerPageStyleDelegate, YTAppViewWatchDelegate;

@interface YTAppView : UIView <MDXViewObserver, YTAppWatchContainer, YTNGWatchLayerViewExpansionObserver, YTPageStyleProvider>
{
    UIView *_browseView;
    double _embeddedMDXViewHeight;
    YTSlimStatusBarView *_slimStatusBarView;
    _Bool _shouldHidePivotBar;
    double _expansionFraction;
    UIView *_pivotBarView;
    UIScreenEdgePanGestureRecognizer *_slideBackGestureRecognizer;
    YTNGWatchLayerView *_NGWatchLayerView;
    MDXView *_MDXView;
    id <YTAppViewWatchDelegate> _delegate;
    id <YTAppRootContainerPageStyleDelegate> _pageStyleDelegate;
    UIView *_overlayView;
}

@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void)setPageStyleDelegate:(id)arg1;
- (id)pageStyleDelegate;
@property(nonatomic) __weak id <YTAppViewWatchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDXView *MDXView; // @synthesize MDXView=_MDXView;
@property(retain, nonatomic) YTNGWatchLayerView *NGWatchLayerView; // @synthesize NGWatchLayerView=_NGWatchLayerView;
- (id)slideBackGestureRecognizer;
- (id)slimStatusBarView;
- (id)pivotBarView;
- (void).cxx_destruct;
- (_Bool)shouldHidePivotBar;
- (_Bool)isAccessibilityElement;
- (void)didChangeExpansionCollapseOccurring:(_Bool)arg1;
- (void)didUpdateExpansionFraction:(double)arg1;
- (void)updateMDXViewFrame;
- (double)playerHeightOffsetForWatchViewLayoutExpanded;
- (struct CGRect)pivotBarFrame;
- (struct CGRect)browseViewFrame;
- (void)layoutSubviewsAnimated;
- (void)setMDXMiniBarBottomOffset;
- (void)didAnimateMDXWatchViewToLayout:(int)arg1;
- (void)didStartAnimatingEmbeddedMDXViewToHeight:(double)arg1 withDuration:(double)arg2;
- (void)updateSlimStatusBarViewDisplayStatus;
- (struct CGRect)slimStatusBarFrame;
@property(readonly, nonatomic) long long pageStyle;
- (double)bottomBarOffset;
- (void)hidePivotBar;
- (void)showPivotBar;
@property(readonly, nonatomic) struct CGSize expandedPlayerSize;
- (void)setPivotBarView:(id)arg1;
- (void)setBrowseView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)watchContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
