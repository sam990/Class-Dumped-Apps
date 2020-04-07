//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TNLNetworkObserver-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface T1TwitterAPIErrorResponseMonitor : NSObject <TNLNetworkObserver>
{
    NSHashTable *_listeners;
    _Bool _started;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)start;
- (id)init;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
