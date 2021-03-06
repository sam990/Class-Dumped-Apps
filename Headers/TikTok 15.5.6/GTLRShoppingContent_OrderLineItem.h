//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRShoppingContent_OrderLineItemProduct, GTLRShoppingContent_OrderLineItemReturnInfo, GTLRShoppingContent_OrderLineItemShippingDetails, GTLRShoppingContent_Price, NSArray, NSNumber, NSString;

@interface GTLRShoppingContent_OrderLineItem : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSArray *cancellations; // @dynamic cancellations;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) GTLRShoppingContent_Price *price; // @dynamic price;
@property(retain, nonatomic) GTLRShoppingContent_OrderLineItemProduct *product; // @dynamic product;
@property(retain, nonatomic) NSNumber *quantityCanceled; // @dynamic quantityCanceled;
@property(retain, nonatomic) NSNumber *quantityDelivered; // @dynamic quantityDelivered;
@property(retain, nonatomic) NSNumber *quantityOrdered; // @dynamic quantityOrdered;
@property(retain, nonatomic) NSNumber *quantityPending; // @dynamic quantityPending;
@property(retain, nonatomic) NSNumber *quantityReturned; // @dynamic quantityReturned;
@property(retain, nonatomic) NSNumber *quantityShipped; // @dynamic quantityShipped;
@property(retain, nonatomic) GTLRShoppingContent_OrderLineItemReturnInfo *returnInfo; // @dynamic returnInfo;
@property(retain, nonatomic) NSArray *returns; // @dynamic returns;
@property(retain, nonatomic) GTLRShoppingContent_OrderLineItemShippingDetails *shippingDetails; // @dynamic shippingDetails;
@property(retain, nonatomic) GTLRShoppingContent_Price *tax; // @dynamic tax;

@end

