//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GoodsStatistics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countText; // @dynamic countText;
@property(copy, nonatomic) NSString *dataText; // @dynamic dataText;
@property(nonatomic) int dataType; // @dynamic dataType;
@property(copy, nonatomic) NSString *daysText; // @dynamic daysText;
@property(nonatomic) _Bool hasCountText; // @dynamic hasCountText;
@property(nonatomic) _Bool hasDataText; // @dynamic hasDataText;
@property(nonatomic) _Bool hasDataType; // @dynamic hasDataType;
@property(nonatomic) _Bool hasDaysText; // @dynamic hasDaysText;
@property(nonatomic) _Bool hasPercent; // @dynamic hasPercent;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) int percent; // @dynamic percent;
@property(nonatomic) int value; // @dynamic value;

@end

