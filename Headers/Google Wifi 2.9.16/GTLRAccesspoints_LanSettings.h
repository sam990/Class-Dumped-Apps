//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRAccesspoints_DefaultPrioritizedStation, GTLRAccesspoints_PrioritizedStation, NSArray, NSNumber, NSString;

@interface GTLRAccesspoints_LanSettings : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *bridgeModeEnabled; // @dynamic bridgeModeEnabled;
@property(retain, nonatomic) GTLRAccesspoints_DefaultPrioritizedStation *defaultPrioritizedStation; // @dynamic defaultPrioritizedStation;
@property(copy, nonatomic) NSString *dhcpPoolBegin; // @dynamic dhcpPoolBegin;
@property(copy, nonatomic) NSString *dhcpPoolEnd; // @dynamic dhcpPoolEnd;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(copy, nonatomic) NSString *netmask; // @dynamic netmask;
@property(retain, nonatomic) GTLRAccesspoints_PrioritizedStation *prioritizedStation; // @dynamic prioritizedStation;
@property(retain, nonatomic) NSArray *staticIpMappings; // @dynamic staticIpMappings;
@property(retain, nonatomic) NSNumber *upnpEnabled; // @dynamic upnpEnabled;

@end
