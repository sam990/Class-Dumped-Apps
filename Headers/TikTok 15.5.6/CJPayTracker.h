//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CJPayManagerBizDelegate-Protocol.h"

@class NSHashTable, NSLock, NSString;
@protocol CJPayManagerBizDelegate;

@interface CJPayTracker : NSObject <CJPayManagerBizDelegate>
{
    id <CJPayManagerBizDelegate> _trackerDelegate;
    NSHashTable *_trackerDels;
    NSLock *_lock;
}

+ (id)shared;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSHashTable *trackerDels; // @synthesize trackerDels=_trackerDels;
@property(nonatomic) __weak id <CJPayManagerBizDelegate> trackerDelegate; // @synthesize trackerDelegate=_trackerDelegate;
- (void).cxx_destruct;
- (void)event:(id)arg1 params:(id)arg2;
- (void)removeTrackerDelegate:(id)arg1;
- (void)addTrackerDelegate:(id)arg1;
- (_Bool)hasValidTrackerDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

