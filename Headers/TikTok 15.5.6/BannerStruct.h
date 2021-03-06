//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, UrlStruct;

@interface BannerStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adData; // @dynamic adData;
@property(copy, nonatomic) NSString *appleId; // @dynamic appleId;
@property(retain, nonatomic) UrlStruct *bannerURL; // @dynamic bannerURL;
@property(copy, nonatomic) NSString *bid; // @dynamic bid;
@property(retain, nonatomic) NSMutableArray *clickTrackURLListArray; // @dynamic clickTrackURLListArray;
@property(readonly, nonatomic) unsigned long long clickTrackURLListArray_Count; // @dynamic clickTrackURLListArray_Count;
@property(nonatomic) long long creativeId; // @dynamic creativeId;
@property(nonatomic) _Bool hasAdData; // @dynamic hasAdData;
@property(nonatomic) _Bool hasAppleId; // @dynamic hasAppleId;
@property(nonatomic) _Bool hasBannerURL; // @dynamic hasBannerURL;
@property(nonatomic) _Bool hasBid; // @dynamic hasBid;
@property(nonatomic) _Bool hasCreativeId; // @dynamic hasCreativeId;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasIsAd; // @dynamic hasIsAd;
@property(nonatomic) _Bool hasIsClickable; // @dynamic hasIsClickable;
@property(nonatomic) _Bool hasLogExtra; // @dynamic hasLogExtra;
@property(nonatomic) _Bool hasPackageName; // @dynamic hasPackageName;
@property(nonatomic) _Bool hasSchema; // @dynamic hasSchema;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) _Bool isAd; // @dynamic isAd;
@property(nonatomic) _Bool isClickable; // @dynamic isClickable;
@property(copy, nonatomic) NSString *logExtra; // @dynamic logExtra;
@property(copy, nonatomic) NSString *packageName; // @dynamic packageName;
@property(copy, nonatomic) NSString *schema; // @dynamic schema;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *trackURLListArray; // @dynamic trackURLListArray;
@property(readonly, nonatomic) unsigned long long trackURLListArray_Count; // @dynamic trackURLListArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(nonatomic) int width; // @dynamic width;

@end

