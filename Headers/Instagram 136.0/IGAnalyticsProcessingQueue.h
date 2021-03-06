//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IGAnalyticsProcessingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _taskCount;
    unsigned long long _backgroundTaskIdentifier;
}

+ (id)analyticsQueue;
- (void).cxx_destruct;
- (id)underlyingQueue;
- (void)waitUntilAllTasksProcessedWithApplication:(id)arg1;
- (void)blockUntilAllTasksProcessed;
- (void)processTask:(CDUnknownBlockType)arg1 afterDelayInSeconds:(long long)arg2;
- (void)processTask:(CDUnknownBlockType)arg1;
- (id)_initWithSerialDispatchQueue:(id)arg1;

@end

