//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GRWSApplicationIdentifier;

@interface GRWSClient : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSApplicationIdentifier *applicationIdentifier; // @dynamic applicationIdentifier;
@property(nonatomic) int clientId; // @dynamic clientId;
@property(nonatomic) _Bool hasApplicationIdentifier; // @dynamic hasApplicationIdentifier;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) int version; // @dynamic version;

@end
