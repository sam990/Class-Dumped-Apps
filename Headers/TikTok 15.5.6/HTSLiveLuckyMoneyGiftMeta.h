//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, NSString;

@interface HTSLiveLuckyMoneyGiftMeta : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *describe; // @dynamic describe;
@property(nonatomic) int diamondCount; // @dynamic diamondCount;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(retain, nonatomic) HTSLiveImage *icon; // @dynamic icon;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(retain, nonatomic) HTSLiveImage *image; // @dynamic image;

@end

