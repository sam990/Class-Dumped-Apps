//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext;

@interface YTIAnalyticsOverviewRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *entityIdentifier; // @dynamic entityIdentifier;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEntityIdentifier; // @dynamic hasEntityIdentifier;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;

@end
