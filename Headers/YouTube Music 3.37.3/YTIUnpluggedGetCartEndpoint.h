//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIUnpluggedGetCartEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientLocationContext; // @dynamic clientLocationContext;
@property(nonatomic) _Bool hasClientLocationContext; // @dynamic hasClientLocationContext;
@property(retain, nonatomic) NSMutableArray *offerParamsArray; // @dynamic offerParamsArray;
@property(readonly, nonatomic) unsigned long long offerParamsArray_Count; // @dynamic offerParamsArray_Count;

@end
