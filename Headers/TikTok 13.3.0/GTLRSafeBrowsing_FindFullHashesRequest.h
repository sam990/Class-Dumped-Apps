//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSafeBrowsing_ClientInfo, GTLRSafeBrowsing_ThreatInfo, NSArray;

@interface GTLRSafeBrowsing_FindFullHashesRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRSafeBrowsing_ClientInfo *client; // @dynamic client;
@property(retain, nonatomic) NSArray *clientStates; // @dynamic clientStates;
@property(retain, nonatomic) GTLRSafeBrowsing_ThreatInfo *threatInfo; // @dynamic threatInfo;

@end
