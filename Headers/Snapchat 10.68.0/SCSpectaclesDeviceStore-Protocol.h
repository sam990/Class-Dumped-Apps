//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCSpectaclesBabyDevice, SCSpectaclesCBCentralManager, SCSpectaclesDevice, SCSpectaclesDeviceNamer;

@protocol SCSpectaclesDeviceStore <NSObject>
@property(readonly) NSArray *devices;
@property(readonly, nonatomic) SCSpectaclesDeviceNamer *namer;
- (void)pairingManagerUnpairAllDevices;
- (void)pairingManagerDidPairBabyDevice:(SCSpectaclesBabyDevice *)arg1 centralManager:(SCSpectaclesCBCentralManager *)arg2;
- (void)pairingManagerDidReceiveCrashReport:(NSArray *)arg1 babyDevice:(SCSpectaclesBabyDevice *)arg2;
- (SCSpectaclesDevice *)deviceForSerialNumber:(NSString *)arg1;
@end
