//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMDriftParameters;

@interface GIMQuartcInvitation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMDriftParameters *drift; // @dynamic drift;
@property(nonatomic) _Bool hasDrift; // @dynamic hasDrift;
@property(nonatomic) _Bool useDataTransport; // @dynamic useDataTransport;
@property(nonatomic) _Bool useMediaTransport; // @dynamic useMediaTransport;

@end

