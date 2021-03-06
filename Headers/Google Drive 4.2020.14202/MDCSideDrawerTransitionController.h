//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIColor;
@protocol MDCSideDrawerDelegate;

@interface MDCSideDrawerTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isScrimAccessibilityElement;
    id <MDCSideDrawerDelegate> _delegate;
    NSString *_scrimAccessibilityLabel;
    NSString *_scrimAccessibilityHint;
    unsigned long long _scrimAccessibilityTraits;
    UIColor *_shadowColor;
    UIColor *_scrimColor;
}

@property(retain, nonatomic) UIColor *scrimColor; // @synthesize scrimColor=_scrimColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) unsigned long long scrimAccessibilityTraits; // @synthesize scrimAccessibilityTraits=_scrimAccessibilityTraits;
@property(copy, nonatomic) NSString *scrimAccessibilityHint; // @synthesize scrimAccessibilityHint=_scrimAccessibilityHint;
@property(copy, nonatomic) NSString *scrimAccessibilityLabel; // @synthesize scrimAccessibilityLabel=_scrimAccessibilityLabel;
@property(nonatomic) _Bool isScrimAccessibilityElement; // @synthesize isScrimAccessibilityElement=_isScrimAccessibilityElement;
@property(nonatomic) __weak id <MDCSideDrawerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPresentingFromContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

