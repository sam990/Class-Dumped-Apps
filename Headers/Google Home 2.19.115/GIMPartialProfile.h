//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBytesValue, GPBStringValue;

@interface GIMPartialProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBBytesValue *appData; // @dynamic appData;
@property(nonatomic) _Bool hasAppData; // @dynamic hasAppData;
@property(nonatomic) _Bool hasInviteURL; // @dynamic hasInviteURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhotoUri; // @dynamic hasPhotoUri;
@property(retain, nonatomic) GPBStringValue *inviteURL; // @dynamic inviteURL;
@property(retain, nonatomic) GPBStringValue *name; // @dynamic name;
@property(retain, nonatomic) GPBStringValue *photoUri; // @dynamic photoUri;

@end

