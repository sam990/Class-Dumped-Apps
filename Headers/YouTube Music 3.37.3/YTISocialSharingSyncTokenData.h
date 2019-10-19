//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIChatMessageSetPageData, YTIChatSetPageData, YTIChatSyncData, YTIForegroundChatData, YTIGlobalSyncData;

@interface YTISocialSharingSyncTokenData : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIChatMessageSetPageData *chatMessageSetPageData; // @dynamic chatMessageSetPageData;
@property(retain, nonatomic) YTIChatSetPageData *chatSetPageData; // @dynamic chatSetPageData;
@property(retain, nonatomic) YTIChatSyncData *chatSyncData; // @dynamic chatSyncData;
@property(retain, nonatomic) YTIForegroundChatData *foregroundChatData; // @dynamic foregroundChatData;
@property(retain, nonatomic) YTIGlobalSyncData *globalSyncData; // @dynamic globalSyncData;
@property(nonatomic) _Bool hasChatMessageSetPageData; // @dynamic hasChatMessageSetPageData;
@property(nonatomic) _Bool hasChatSetPageData; // @dynamic hasChatSetPageData;
@property(nonatomic) _Bool hasChatSyncData; // @dynamic hasChatSyncData;
@property(nonatomic) _Bool hasForegroundChatData; // @dynamic hasForegroundChatData;
@property(nonatomic) _Bool hasGlobalSyncData; // @dynamic hasGlobalSyncData;

@end
