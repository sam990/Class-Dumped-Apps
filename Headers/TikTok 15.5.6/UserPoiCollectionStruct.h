//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface UserPoiCollectionStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long count; // @dynamic count;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(retain, nonatomic) NSMutableArray *poiCollectListArray; // @dynamic poiCollectListArray;
@property(readonly, nonatomic) unsigned long long poiCollectListArray_Count; // @dynamic poiCollectListArray_Count;
@property(retain, nonatomic) NSMutableArray *poiListArray; // @dynamic poiListArray;
@property(readonly, nonatomic) unsigned long long poiListArray_Count; // @dynamic poiListArray_Count;

@end

