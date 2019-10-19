//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MixStatisStructV2, MixStatusStructV2, NSString, ShareStructV2, UrlStructV2, UserStructV2;

@interface MixStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UserStructV2 *author; // @dynamic author;
@property(retain, nonatomic) UrlStructV2 *coverURL; // @dynamic coverURL;
@property(copy, nonatomic) NSString *desc; // @dynamic desc;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool hasAuthor; // @dynamic hasAuthor;
@property(nonatomic) _Bool hasCoverURL; // @dynamic hasCoverURL;
@property(nonatomic) _Bool hasDesc; // @dynamic hasDesc;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasIconURL; // @dynamic hasIconURL;
@property(nonatomic) _Bool hasMixId; // @dynamic hasMixId;
@property(nonatomic) _Bool hasMixName; // @dynamic hasMixName;
@property(nonatomic) _Bool hasShareInfo; // @dynamic hasShareInfo;
@property(nonatomic) _Bool hasStatis; // @dynamic hasStatis;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) UrlStructV2 *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *mixId; // @dynamic mixId;
@property(copy, nonatomic) NSString *mixName; // @dynamic mixName;
@property(retain, nonatomic) ShareStructV2 *shareInfo; // @dynamic shareInfo;
@property(retain, nonatomic) MixStatisStructV2 *statis; // @dynamic statis;
@property(retain, nonatomic) MixStatusStructV2 *status; // @dynamic status;

@end
