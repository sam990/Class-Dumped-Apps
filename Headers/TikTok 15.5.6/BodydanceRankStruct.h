//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface BodydanceRankStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UrlStruct *avatarThumb; // @dynamic avatarThumb;
@property(retain, nonatomic) UrlStruct *awemeCover; // @dynamic awemeCover;
@property(nonatomic) int followStatus; // @dynamic followStatus;
@property(nonatomic) _Bool hasAvatarThumb; // @dynamic hasAvatarThumb;
@property(nonatomic) _Bool hasAwemeCover; // @dynamic hasAwemeCover;
@property(nonatomic) _Bool hasFollowStatus; // @dynamic hasFollowStatus;
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasNickname; // @dynamic hasNickname;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasScore; // @dynamic hasScore;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(copy, nonatomic) NSString *itemId; // @dynamic itemId;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) int rank; // @dynamic rank;
@property(nonatomic) int score; // @dynamic score;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

