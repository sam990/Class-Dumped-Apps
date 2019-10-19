//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRShoppingContent_DatafeedFetchSchedule, GTLRShoppingContent_DatafeedFormat, NSArray, NSNumber, NSString;

@interface GTLRShoppingContent_Datafeed : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *attributeLanguage; // @dynamic attributeLanguage;
@property(copy, nonatomic) NSString *contentLanguage; // @dynamic contentLanguage;
@property(copy, nonatomic) NSString *contentType; // @dynamic contentType;
@property(retain, nonatomic) GTLRShoppingContent_DatafeedFetchSchedule *fetchSchedule; // @dynamic fetchSchedule;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) GTLRShoppingContent_DatafeedFormat *format; // @dynamic format;
@property(retain, nonatomic) NSNumber *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *intendedDestinations; // @dynamic intendedDestinations;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *targetCountry; // @dynamic targetCountry;

@end
