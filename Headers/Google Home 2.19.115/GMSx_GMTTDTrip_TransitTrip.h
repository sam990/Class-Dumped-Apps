//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDDuration, NSMutableArray;

@interface GMSx_GMTTDTrip_TransitTrip : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *departureArray; // @dynamic departureArray;
@property(readonly, nonatomic) unsigned long long departureArray_Count; // @dynamic departureArray_Count;
@property(retain, nonatomic) GMSx_GMTTDDuration *duration; // @dynamic duration;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;

@end

