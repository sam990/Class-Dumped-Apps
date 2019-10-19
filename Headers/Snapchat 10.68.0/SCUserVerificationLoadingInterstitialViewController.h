//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCScreen, SCShapeView, SCUnauthenticatedBaseView, SCUserVerificationLoadingInterstitialViewModel, UIImageView, UILabel, UIScrollView, UIView;
@protocol SCUnauthenticatedStyleHelper;

@interface SCUserVerificationLoadingInterstitialViewController : UIViewController
{
    SCScreen *_screen;
    unsigned long long _viewConfig;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    SCUnauthenticatedBaseView *_baseView;
    SCUserVerificationLoadingInterstitialViewModel *_viewModel;
    UIScrollView *_containerView;
    UIView *_animationView;
    UIImageView *_ghostImageView;
    SCShapeView *_outerRingView;
    SCShapeView *_innerRingView;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_layoutAnimatingViews;
- (void)_initLabel;
- (void)_initInnerRingView;
- (void)_initOuterRingView;
- (void)_initGhostImageView;
- (void)_initAnimationView;
- (void)_initContainerView;
- (void)_initSubviews;
- (id)_constructRotationAnimation:(id)arg1;
- (void)_rotateRingViews;
- (void)_animateGhostView;
- (void)_backButtonTapped;
- (void)_updatePermanentFailureState;
- (void)_setViewModel:(id)arg1;
- (void)_startRenderingViewModels;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithScreen:(id)arg1 viewConfig:(unsigned long long)arg2 styleHelper:(id)arg3;

@end
