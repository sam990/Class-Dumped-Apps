//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapTileResponseHeader, NSMutableArray;

@interface GMSx_GMMMapTileResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) GMSx_GMMMapTileResponseHeader *header; // @dynamic header;
@property(retain, nonatomic) NSMutableArray *mapTileArray; // @dynamic mapTileArray;
@property(readonly, nonatomic) unsigned long long mapTileArray_Count; // @dynamic mapTileArray_Count;

@end

