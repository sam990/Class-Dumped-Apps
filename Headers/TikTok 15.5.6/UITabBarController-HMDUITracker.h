//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "AWEUITrackerRunner-Protocol.h"
#import "HMDUITrackable-Protocol.h"

@class HMDUITrackableContext, NSString;

@interface UITabBarController (HMDUITracker) <HMDUITrackable, AWEUITrackerRunner>
+ (void)hmd_startSwizzle;
+ (void)awe_UITracker_run;
- (_Bool)hmd_trackEnaled;
- (void)hmd_setSelectedIndex:(unsigned long long)arg1;
- (void)awe_UITracker_setSelectedIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMDUITrackableContext *hmd_trackContext;
@property(readonly) Class superclass;
@end

