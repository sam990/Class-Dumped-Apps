//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <Module_Framework/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIColor, UIScrollView;

@interface MDCBottomSheetTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    UIColor *_scrimColor;
    _Bool _isScrimAccessibilityElement;
    NSString *_scrimAccessibilityLabel;
    NSString *_scrimAccessibilityHint;
    unsigned long long _scrimAccessibilityTraits;
    _Bool _dismissOnBackgroundTap;
    _Bool _dismissOnDraggingDownSheet;
    UIScrollView *_trackingScrollView;
    double _preferredSheetHeight;
}

@property(nonatomic) double preferredSheetHeight; // @synthesize preferredSheetHeight=_preferredSheetHeight;
@property(nonatomic) _Bool dismissOnDraggingDownSheet; // @synthesize dismissOnDraggingDownSheet=_dismissOnDraggingDownSheet;
@property(nonatomic) _Bool dismissOnBackgroundTap; // @synthesize dismissOnBackgroundTap=_dismissOnBackgroundTap;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
- (void).cxx_destruct;
- (unsigned long long)scrimAccessibilityTraits;
- (void)setScrimAccessibilityTraits:(unsigned long long)arg1;
- (id)scrimAccessibilityHint;
- (void)setScrimAccessibilityHint:(id)arg1;
- (id)scrimAccessibilityLabel;
- (void)setScrimAccessibilityLabel:(id)arg1;
- (_Bool)isScrimAccessibilityElement;
- (void)setIsScrimAccessibilityElement:(_Bool)arg1;
- (id)scrimColor;
- (void)setScrimColor:(id)arg1;
- (struct CGRect)frameOfPresentedViewController:(id)arg1 inContainerView:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
