//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEYamQueueContainer, NSArray;
@protocol AWEYamUITrackerDelegate, OS_dispatch_queue;

@interface AWEYamUITrackerManager : NSObject
{
    _Bool _enable;
    NSArray *_lastLaunchedVCTrace;
    id <AWEYamUITrackerDelegate> _delegate;
    AWEYamQueueContainer *_container;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (void)swizzleVCLifeCycle;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) AWEYamQueueContainer *container; // @synthesize container=_container;
@property(nonatomic, getter=isEnable) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) __weak id <AWEYamUITrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *lastLaunchedVCTrace; // @synthesize lastLaunchedVCTrace=_lastLaunchedVCTrace;
- (void).cxx_destruct;
- (void)p_trackerModule:(id)arg1 eventName:(id)arg2;
- (void)traceViewController:(Class)arg1 eventName:(id)arg2;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)endTrace;
- (void)startTrace;
- (id)init;

@end
