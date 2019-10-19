//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTICommand, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIGamingThirdPartyRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLinked; // @dynamic hasLinked;
@property(nonatomic) _Bool hasThirdPartyAvatar; // @dynamic hasThirdPartyAvatar;
@property(nonatomic) _Bool hasThirdPartyId; // @dynamic hasThirdPartyId;
@property(nonatomic) _Bool hasThirdPartyName; // @dynamic hasThirdPartyName;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool linked; // @dynamic linked;
@property(retain, nonatomic) YTIThumbnailDetails *thirdPartyAvatar; // @dynamic thirdPartyAvatar;
@property(copy, nonatomic) NSString *thirdPartyId; // @dynamic thirdPartyId;
@property(retain, nonatomic) YTIFormattedString *thirdPartyName; // @dynamic thirdPartyName;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
