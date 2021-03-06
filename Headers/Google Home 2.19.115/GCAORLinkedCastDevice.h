//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCACCastDeviceCapabilities, NSString;

@interface GCAORLinkedCastDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCACCastDeviceCapabilities *capabilities; // @dynamic capabilities;
@property(copy, nonatomic) NSString *castDeviceId; // @dynamic castDeviceId;
@property(copy, nonatomic) NSString *deviceSsidSuffix; // @dynamic deviceSsidSuffix;
@property(nonatomic) int deviceType; // @dynamic deviceType;
@property(copy, nonatomic) NSString *friendlyName; // @dynamic friendlyName;
@property(nonatomic) _Bool hasCapabilities; // @dynamic hasCapabilities;
@property(nonatomic) _Bool hasCastDeviceId; // @dynamic hasCastDeviceId;
@property(nonatomic) _Bool hasDeviceSsidSuffix; // @dynamic hasDeviceSsidSuffix;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasFriendlyName; // @dynamic hasFriendlyName;
@property(nonatomic) _Bool hasLinkState; // @dynamic hasLinkState;
@property(nonatomic) _Bool hasModelName; // @dynamic hasModelName;
@property(nonatomic) _Bool hasMultiChannelGroupState; // @dynamic hasMultiChannelGroupState;
@property(nonatomic) _Bool hasProductName; // @dynamic hasProductName;
@property(nonatomic) _Bool hasSpeakerIdEnabled; // @dynamic hasSpeakerIdEnabled;
@property(nonatomic) _Bool hasTimeLinkedWithUserMs; // @dynamic hasTimeLinkedWithUserMs;
@property(nonatomic) _Bool hasTosVersion; // @dynamic hasTosVersion;
@property(nonatomic) int linkState; // @dynamic linkState;
@property(copy, nonatomic) NSString *modelName; // @dynamic modelName;
@property(nonatomic) int multiChannelGroupState; // @dynamic multiChannelGroupState;
@property(copy, nonatomic) NSString *productName; // @dynamic productName;
@property(nonatomic) _Bool speakerIdEnabled; // @dynamic speakerIdEnabled;
@property(nonatomic) long long timeLinkedWithUserMs; // @dynamic timeLinkedWithUserMs;
@property(nonatomic) int tosVersion; // @dynamic tosVersion;

@end

