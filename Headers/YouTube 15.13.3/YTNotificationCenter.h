//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTNotificationCenter : NSObject
{
}

+ (void)removeMiniPlayerDidCloseObserver:(id)arg1;
+ (void)addMiniPlayerDidCloseObserver:(id)arg1 selector:(SEL)arg2;
+ (void)notifyMiniPlayerDidClose;
+ (void)removeSnapZoomInitiallyZoomedDidChangeObserver:(id)arg1;
+ (void)addSnapZoomInitiallyZoomedDidChangeObserver:(id)arg1 selector:(SEL)arg2;
+ (void)notifySnapZoomInitiallyZoomedDidChange;
+ (void)removeViewWillTransitionSizeObserver:(id)arg1;
+ (void)addViewWillTransitionSizeObserver:(id)arg1 selector:(SEL)arg2;
+ (void)notifyViewWillTransitionSize;
+ (void)removeVoiceSearchDialogDidPresentObserver:(id)arg1;
+ (void)addVoiceSearchDialogDidPresentObserver:(id)arg1 selector:(SEL)arg2;
+ (void)notifyVoiceSearchDialogDidPresent:(_Bool)arg1;
+ (void)removeNotificationObserver:(id)arg1;

@end

