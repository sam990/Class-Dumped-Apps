//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GCADCheckDeviceReadyAppContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceTypeName; // @dynamic deviceTypeName;
@property(nonatomic) _Bool hasDeviceTypeName; // @dynamic hasDeviceTypeName;
@property(nonatomic) _Bool hasIsAssistant; // @dynamic hasIsAssistant;
@property(nonatomic) _Bool hasObfuscatedWifiSsid; // @dynamic hasObfuscatedWifiSsid;
@property(nonatomic) _Bool hasSetupSessionId; // @dynamic hasSetupSessionId;
@property(nonatomic) _Bool hasSsidSuffix; // @dynamic hasSsidSuffix;
@property(nonatomic) _Bool isAssistant; // @dynamic isAssistant;
@property(copy, nonatomic) NSString *obfuscatedWifiSsid; // @dynamic obfuscatedWifiSsid;
@property(nonatomic) int setupSessionId; // @dynamic setupSessionId;
@property(copy, nonatomic) NSString *ssidSuffix; // @dynamic ssidSuffix;

@end

