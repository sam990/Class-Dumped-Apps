//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDUITrackable-Protocol.h"

@class HMDUITrackableContext, NSString;

@interface NSObject (Trackable) <HMDUITrackable>
- (_Bool)hmd_trackEnaled;
- (id)hmd_defaultTrackName;
@property(retain, nonatomic) HMDUITrackableContext *hmd_trackContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
