//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCActorId, PhotosMCItemId;

@interface SFPDPhotosMarkPartnerItemsReadRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastReadItemId; // @dynamic hasLastReadItemId;
@property(nonatomic) _Bool hasPartner; // @dynamic hasPartner;
@property(retain, nonatomic) PhotosMCItemId *lastReadItemId; // @dynamic lastReadItemId;
@property(retain, nonatomic) PhotosMCActorId *partner; // @dynamic partner;

@end

