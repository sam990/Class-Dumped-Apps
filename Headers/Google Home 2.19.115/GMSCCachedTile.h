//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSCTileMetadata, NSData;

@interface GMSCCachedTile : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTileMetadata; // @dynamic hasTileMetadata;
@property(nonatomic) _Bool hasWireTile; // @dynamic hasWireTile;
@property(retain, nonatomic) GMSCTileMetadata *tileMetadata; // @dynamic tileMetadata;
@property(copy, nonatomic) NSData *wireTile; // @dynamic wireTile;

@end

