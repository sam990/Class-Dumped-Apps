//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PTVModalSheetPresentationController : UIPresentationController
{
    _Bool _isSheetExpandable;
    _Bool _isSheetDismissableWithGesture;
    _Bool _wasFullHeightInPortrait;
    long long _presentationState;
    UIView *_dimmingView;
    double _preferredHeight;
    double _currentHeight;
    double _preferredWidth;
    double _animationDuration;
    double _safeArea;
    UITapGestureRecognizer *_tapToDismissRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapToDismissRecognizer; // @synthesize tapToDismissRecognizer=_tapToDismissRecognizer;
@property(nonatomic) _Bool wasFullHeightInPortrait; // @synthesize wasFullHeightInPortrait=_wasFullHeightInPortrait;
@property(nonatomic) double safeArea; // @synthesize safeArea=_safeArea;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool isSheetDismissableWithGesture; // @synthesize isSheetDismissableWithGesture=_isSheetDismissableWithGesture;
@property(nonatomic) _Bool isSheetExpandable; // @synthesize isSheetExpandable=_isSheetExpandable;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
- (void).cxx_destruct;
- (double)snapHeightForCurrentHeight:(double)arg1 velocityY:(double)arg2;
@property(readonly, nonatomic) _Bool shouldBeFullHeight;
- (double)defaultPreferredHeightForSize:(struct CGSize)arg1;
- (double)maximumVisibleHeightForSize:(struct CGSize)arg1;
- (void)panGestureAction:(id)arg1;
- (void)didTapDimmingView:(id)arg1;
- (void)setCurrentHeight:(double)arg1 animated:(_Bool)arg2 shouldLayoutSubviews:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPreferredHeight:(double)arg1 animated:(_Bool)arg2;
- (double)calculatePreferredHeightForSize:(struct CGSize)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)containerViewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
