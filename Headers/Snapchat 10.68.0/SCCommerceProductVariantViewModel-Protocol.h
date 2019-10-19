//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SOJUCommerceProductVariant;

@protocol SCCommerceProductVariantViewModel <NSCopying>
@property(readonly) _Bool isAvailable;
@property(readonly, copy) NSArray *imageDetails;
@property(readonly) _Bool requiresShipping;
@property(readonly, copy) NSString *currency;
@property(readonly, copy) NSString *strikethroughPrice;
@property(readonly, copy) NSString *amount;
@property(readonly) _Bool isTaxable;
@property(readonly, copy) NSString *productId;
@property(readonly, copy) NSString *title;
@property(readonly, copy) SOJUCommerceProductVariant *soju;
@end
