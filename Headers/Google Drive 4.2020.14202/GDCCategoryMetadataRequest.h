//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GDCDataserviceRequestDescriptor, NSString;

@interface GDCCategoryMetadataRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasItemStableId; // @dynamic hasItemStableId;
@property(nonatomic) _Bool hasLimit; // @dynamic hasLimit;
@property(nonatomic) _Bool hasRequestDescriptor; // @dynamic hasRequestDescriptor;
@property(copy, nonatomic) NSString *itemId; // @dynamic itemId;
@property(nonatomic) long long itemStableId; // @dynamic itemStableId;
@property(nonatomic) int limit; // @dynamic limit;
@property(retain, nonatomic) GDCDataserviceRequestDescriptor *requestDescriptor; // @dynamic requestDescriptor;

@end

