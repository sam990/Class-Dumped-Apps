//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCFriendsFeedFetchContext;
@protocol SCArroyoFeedDataUpdateAnnouncer;

@protocol SCNativeMessagingFeedManaging
- (void)clearOneOnOneConversationByUserId:(NSString *)arg1;
- (void)clearGroupConversationById:(NSString *)arg1;
- (_Bool)hasMoreFeedEntries;
- (void)syncFeedForFetchContext:(SCFriendsFeedFetchContext *)arg1 completion:(void (^)(void))arg2;
- (id <SCArroyoFeedDataUpdateAnnouncer>)feedDataUpdateAnnouncer;
@end
