//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFlowLoggingConfig, YTIOrientationInfoConfig;

@interface YTILoggingColdConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFlowLoggingConfig *flowLoggingConfig; // @dynamic flowLoggingConfig;
@property(nonatomic) _Bool hasFlowLoggingConfig; // @dynamic hasFlowLoggingConfig;
@property(nonatomic) _Bool hasIsLoggingEnabled; // @dynamic hasIsLoggingEnabled;
@property(nonatomic) _Bool hasOrientationInfoConfig; // @dynamic hasOrientationInfoConfig;
@property(nonatomic) _Bool isLoggingEnabled; // @dynamic isLoggingEnabled;
@property(retain, nonatomic) YTIOrientationInfoConfig *orientationInfoConfig; // @dynamic orientationInfoConfig;

@end

