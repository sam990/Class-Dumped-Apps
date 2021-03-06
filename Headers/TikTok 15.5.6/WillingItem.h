//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct, WillingItemSeed;

@interface WillingItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authorId; // @dynamic authorId;
@property(retain, nonatomic) UrlStruct *cover; // @dynamic cover;
@property(nonatomic) long long favoriteCount; // @dynamic favoriteCount;
@property(nonatomic) _Bool hasAuthorId; // @dynamic hasAuthorId;
@property(nonatomic) _Bool hasCover; // @dynamic hasCover;
@property(nonatomic) _Bool hasFavoriteCount; // @dynamic hasFavoriteCount;
@property(nonatomic) _Bool hasItemType; // @dynamic hasItemType;
@property(nonatomic) _Bool hasOnSale; // @dynamic hasOnSale;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) _Bool hasPromotionId; // @dynamic hasPromotionId;
@property(nonatomic) _Bool hasPromotionSource; // @dynamic hasPromotionSource;
@property(nonatomic) _Bool hasSchema; // @dynamic hasSchema;
@property(nonatomic) _Bool hasScore; // @dynamic hasScore;
@property(nonatomic) _Bool hasSeedInfo; // @dynamic hasSeedInfo;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) int itemType; // @dynamic itemType;
@property(nonatomic) _Bool onSale; // @dynamic onSale;
@property(nonatomic) long long price; // @dynamic price;
@property(copy, nonatomic) NSString *productId; // @dynamic productId;
@property(copy, nonatomic) NSString *promotionId; // @dynamic promotionId;
@property(copy, nonatomic) NSString *promotionSource; // @dynamic promotionSource;
@property(copy, nonatomic) NSString *schema; // @dynamic schema;
@property(nonatomic) long long score; // @dynamic score;
@property(retain, nonatomic) WillingItemSeed *seedInfo; // @dynamic seedInfo;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

