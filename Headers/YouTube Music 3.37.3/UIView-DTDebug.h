//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (DTDebug)
+ (void)toggleViewMainThreadChecking;
- (void)_setNeedsDisplayInRect_MainThreadCheck:(struct CGRect)arg1;
- (void)_setNeedsDisplay_MainThreadCheck;
- (void)_setNeedsLayout_MainThreadCheck;
- (void)methodCalledNotFromMainThread:(id)arg1;
@end
