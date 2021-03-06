//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AsyncOperation.h"

@class NSString, NSTimer, Reachability;

@interface WaitForReachabilityOperation : AsyncOperation
{
    NSTimer *_pollTimer;
    unsigned long long _pollCount;
    Reachability *_reachability;
    long long _reachabilityType;
    NSString *_hotspotDeviceIPAddress;
}

- (void).cxx_destruct;
- (void)pollTimerDidFire:(id)arg1;
- (void)reachabilityChangedNotification:(id)arg1;
- (void)cancel;
- (void)cleanup;
- (void)checkIfFinished;
- (void)didFinishWithError:(id)arg1;
- (void)start;
- (id)initWithReachabilityType:(long long)arg1 hotspotDeviceIPAddress:(id)arg2;
- (id)initWithLocalWiFiReachability;
- (id)initWithHotspotReachabilityWithAddress:(id)arg1;

@end

