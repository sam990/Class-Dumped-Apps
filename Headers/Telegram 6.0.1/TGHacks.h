//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TGHacks : NSObject
{
}

+ (void)forcePerformWithAnimation:(CDUnknownBlockType)arg1;
+ (void)setForceMovieAnimatedScaleMode:(_Bool)arg1;
+ (id)applicationKeyboardView;
+ (void)setApplicationKeyboardOffset:(double)arg1;
+ (id)applicationKeyboardWindow;
+ (void)applyCurrentKeyboardAutocorrectionVariant;
+ (double)keyboardHeightForOrientation:(long long)arg1;
+ (_Bool)isKeyboardVisibleAlt;
+ (_Bool)isKeyboardVisible;
+ (double)statusBarHeightForOrientation:(long long)arg1;
+ (void)animateApplicationStatusBarStyleTransitionWithDuration:(double)arg1;
+ (void)animateApplicationStatusBarAppearance:(int)arg1 delay:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateApplicationStatusBarAppearance:(int)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setApplicationStatusBarOffset:(double)arg1;
+ (double)applicationStatusBarOffset;
+ (void)setApplicationStatusBarAlpha:(double)arg1;
+ (double)applicationStatusBarAlpha;
+ (void)setForceSystemCurve:(_Bool)arg1;
+ (void)setSecondaryAnimationDurationFactor:(float)arg1;
+ (void)setAnimationDurationFactor:(float)arg1;
+ (void)hackSetAnimationDuration;

@end

