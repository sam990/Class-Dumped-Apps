//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GCKDBDeviceInfo, GCKDBMDNSDiscoveryInfo, GCKDBNetworkAddress, GCKDBTCPDiscoveryInfo, NSSet;

@interface GCKDBLocalConnectionInfo : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) GCKDBDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) GCKDBMDNSDiscoveryInfo *mdnsDiscoveryInfo; // @dynamic mdnsDiscoveryInfo;
@property(retain, nonatomic) GCKDBNetworkAddress *networkAddress; // @dynamic networkAddress;
@property(retain, nonatomic) NSSet *networkInfos; // @dynamic networkInfos;
@property(nonatomic) int port; // @dynamic port;
@property(retain, nonatomic) GCKDBTCPDiscoveryInfo *tcpDiscoveryInfo; // @dynamic tcpDiscoveryInfo;
@end
