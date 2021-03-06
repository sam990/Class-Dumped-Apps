//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterDiagnosticTools/TDTSampler.h>

@class TDTBatteryMonitorHandle, TFNBatterySample, UIDevice;

@interface TDTBatterySampler : TDTSampler
{
    UIDevice *_device;
    TDTBatteryMonitorHandle *_batteryMonitorHandle;
}

@property(retain, nonatomic) TDTBatteryMonitorHandle *batteryMonitorHandle; // @synthesize batteryMonitorHandle=_batteryMonitorHandle;
- (void).cxx_destruct;
- (id)_sampleFromDevice;
@property(readonly, nonatomic) double averageDrainRate;
@property(readonly, nonatomic) TFNBatterySample *lastSample;
@property(readonly, nonatomic) TFNBatterySample *firstSample;
- (id)sample;
- (void)didStop;
- (void)willStart;
- (id)init;

@end

