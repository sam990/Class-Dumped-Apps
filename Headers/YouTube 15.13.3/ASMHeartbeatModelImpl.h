//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASMHeartbeatModel-Protocol.h>

@class ASMResourceKey, NSArray, NSMutableArray, NSString;
@protocol ASMLoggerModel;

@interface ASMHeartbeatModelImpl : NSObject <ASMHeartbeatModel>
{
    _Bool _registeredForLifecycleNotifications;
    NSArray *_heartbeatTimes;
    ASMResourceKey *_latestScreenKey;
    id <ASMLoggerModel> _loggerModel;
    NSMutableArray *_heartbeatBlocks;
}

@property(retain, nonatomic) NSMutableArray *heartbeatBlocks; // @synthesize heartbeatBlocks=_heartbeatBlocks;
@property(retain, nonatomic) id <ASMLoggerModel> loggerModel; // @synthesize loggerModel=_loggerModel;
@property(retain, nonatomic) ASMResourceKey *latestScreenKey; // @synthesize latestScreenKey=_latestScreenKey;
@property(nonatomic, getter=isRegisteredForLifecycleNotifications) _Bool registeredForLifecycleNotifications; // @synthesize registeredForLifecycleNotifications=_registeredForLifecycleNotifications;
@property(retain, nonatomic) NSArray *heartbeatTimes; // @synthesize heartbeatTimes=_heartbeatTimes;
- (void).cxx_destruct;
- (void)rescheduleLatestHeartbeats;
- (void)registerForLifeCycleNotifications;
@property(readonly, nonatomic, getter=hasHeartbeatsScheduled) _Bool heartbeatsScheduled;
- (void)cancelAllHeartbeats;
- (void)scheduleHeartbeatsForScreenWithKey:(id)arg1;
- (id)initWithLoggerModel:(id)arg1 heartbeatTimes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

