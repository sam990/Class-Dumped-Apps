//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SmartPhoneSettingsStructV2, UrlStructV2;

@interface CommerceInfoStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *challengeListArray; // @dynamic challengeListArray;
@property(readonly, nonatomic) unsigned long long challengeListArray_Count; // @dynamic challengeListArray_Count;
@property(nonatomic) _Bool hasHeadImageURL; // @dynamic hasHeadImageURL;
@property(nonatomic) _Bool hasQuickShopName; // @dynamic hasQuickShopName;
@property(nonatomic) _Bool hasQuickShopURL; // @dynamic hasQuickShopURL;
@property(nonatomic) _Bool hasSiteId; // @dynamic hasSiteId;
@property(nonatomic) _Bool hasSmartPhone; // @dynamic hasSmartPhone;
@property(retain, nonatomic) UrlStructV2 *headImageURL; // @dynamic headImageURL;
@property(retain, nonatomic) NSMutableArray *offlineInfoListArray; // @dynamic offlineInfoListArray;
@property(readonly, nonatomic) unsigned long long offlineInfoListArray_Count; // @dynamic offlineInfoListArray_Count;
@property(copy, nonatomic) NSString *quickShopName; // @dynamic quickShopName;
@property(copy, nonatomic) NSString *quickShopURL; // @dynamic quickShopURL;
@property(copy, nonatomic) NSString *siteId; // @dynamic siteId;
@property(retain, nonatomic) SmartPhoneSettingsStructV2 *smartPhone; // @dynamic smartPhone;

@end

