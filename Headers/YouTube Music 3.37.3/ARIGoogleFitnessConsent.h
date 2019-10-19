//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue;

@interface ARIGoogleFitnessConsent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARITwoStateSettingValue *activityRecognitionOptin; // @dynamic activityRecognitionOptin;
@property(retain, nonatomic) ARITwoStateSettingValue *appleHealthkitLocationOptIn; // @dynamic appleHealthkitLocationOptIn;
@property(retain, nonatomic) ARITwoStateSettingValue *appleHealthkitOptIn; // @dynamic appleHealthkitOptIn;
@property(retain, nonatomic) ARITwoStateSettingValue *backgroundLocationOptin; // @dynamic backgroundLocationOptin;
@property(retain, nonatomic) ARITwoStateSettingValue *continuousHeartRateMonitoringOptin; // @dynamic continuousHeartRateMonitoringOptin;
@property(retain, nonatomic) ARITwoStateSettingValue *diagnosticsEnabled; // @dynamic diagnosticsEnabled;
@property(nonatomic) _Bool hasActivityRecognitionOptin; // @dynamic hasActivityRecognitionOptin;
@property(nonatomic) _Bool hasAppleHealthkitLocationOptIn; // @dynamic hasAppleHealthkitLocationOptIn;
@property(nonatomic) _Bool hasAppleHealthkitOptIn; // @dynamic hasAppleHealthkitOptIn;
@property(nonatomic) _Bool hasBackgroundLocationOptin; // @dynamic hasBackgroundLocationOptin;
@property(nonatomic) _Bool hasContinuousHeartRateMonitoringOptin; // @dynamic hasContinuousHeartRateMonitoringOptin;
@property(nonatomic) _Bool hasDiagnosticsEnabled; // @dynamic hasDiagnosticsEnabled;
@property(nonatomic) _Bool hasSleepRecognitionOptin; // @dynamic hasSleepRecognitionOptin;
@property(retain, nonatomic) ARITwoStateSettingValue *sleepRecognitionOptin; // @dynamic sleepRecognitionOptin;

@end
