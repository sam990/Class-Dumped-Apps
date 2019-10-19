//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

@class RedditService;

@interface BadgeCountManager : ObservableObject
{
    long long _trendingBadgeCount;
    long long _messageBadgeCount;
    long long _commentReplyBadgeCount;
    long long _chatDirectBadgeCount;
    long long _chatRoomsBadgeCount;
    long long _chatMentionsBadgeCount;
    RedditService *_service;
}

+ (id)keyPathsToObserveChanges;
@property(readonly, nonatomic) __weak RedditService *service; // @synthesize service=_service;
@property(nonatomic) long long chatMentionsBadgeCount; // @synthesize chatMentionsBadgeCount=_chatMentionsBadgeCount;
@property(nonatomic) long long chatRoomsBadgeCount; // @synthesize chatRoomsBadgeCount=_chatRoomsBadgeCount;
@property(nonatomic) long long chatDirectBadgeCount; // @synthesize chatDirectBadgeCount=_chatDirectBadgeCount;
@property(nonatomic) long long commentReplyBadgeCount; // @synthesize commentReplyBadgeCount=_commentReplyBadgeCount;
@property(nonatomic) long long messageBadgeCount; // @synthesize messageBadgeCount=_messageBadgeCount;
- (void).cxx_destruct;
- (void)didReceiveNewTrendingNotification;
- (void)didSeeTrendingNotification;
@property(readonly, nonatomic) unsigned long long totalBadgeCount;
@property(readonly, nonatomic) unsigned long long inboxTotalBadgeCount;
@property(readonly, nonatomic) unsigned long long activitiesBadgeCount;
@property(nonatomic) long long trendingBadgeCount; // @synthesize trendingBadgeCount=_trendingBadgeCount;
- (void)updateApplicationBadgeNumber;
- (void)clearBadges;
- (void)fetchData;
- (void)accountDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1;

@end
