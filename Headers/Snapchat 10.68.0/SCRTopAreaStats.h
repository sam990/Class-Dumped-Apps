//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCRAreaStat;

@interface SCRTopAreaStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCRAreaStat *cityStats; // @dynamic cityStats;
@property(retain, nonatomic) SCRAreaStat *countryStats; // @dynamic countryStats;
@property(nonatomic) _Bool hasCityStats; // @dynamic hasCityStats;
@property(nonatomic) _Bool hasCountryStats; // @dynamic hasCountryStats;
@property(nonatomic) _Bool hasStateStats; // @dynamic hasStateStats;
@property(retain, nonatomic) SCRAreaStat *stateStats; // @dynamic stateStats;

@end
