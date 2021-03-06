//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface YTBatteryDrainSample : NSObject
{
    _Bool _isLowPowerMode;
    _Bool _isBackgroundState;
    _Bool _isStateTransition;
    _Bool _observedBackgroundTaskDidExpire;
    _Bool _observedBackgroundFetchCallback;
    float _batteryLevel;
    int _networkType;
    float _screenBrightness;
    NSDate *_date;
}

@property(nonatomic) _Bool observedBackgroundFetchCallback; // @synthesize observedBackgroundFetchCallback=_observedBackgroundFetchCallback;
@property(nonatomic) _Bool observedBackgroundTaskDidExpire; // @synthesize observedBackgroundTaskDidExpire=_observedBackgroundTaskDidExpire;
@property(nonatomic) _Bool isStateTransition; // @synthesize isStateTransition=_isStateTransition;
@property(nonatomic) _Bool isBackgroundState; // @synthesize isBackgroundState=_isBackgroundState;
@property(nonatomic) _Bool isLowPowerMode; // @synthesize isLowPowerMode=_isLowPowerMode;
@property(nonatomic) float screenBrightness; // @synthesize screenBrightness=_screenBrightness;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)iosBatterySample;

@end

