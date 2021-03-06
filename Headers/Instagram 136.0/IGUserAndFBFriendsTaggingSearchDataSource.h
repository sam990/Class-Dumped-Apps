//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTaggingSearchDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListNetworkDataSourceDelegate-Protocol.h>

@class IGFBFriendsStore, IGUserListLocalDataSource, IGUserListNetworkDataSource, NSArray, NSString;
@protocol IGTaggingSearchDataSourceDelegate;

@interface IGUserAndFBFriendsTaggingSearchDataSource : NSObject <IGUserListNetworkDataSourceDelegate, IGTaggingSearchDataSource>
{
    id <IGTaggingSearchDataSourceDelegate> _delegate;
    NSString *_query;
    NSArray *_fbUserResults;
    NSArray *_igUserResults;
    IGUserListLocalDataSource *_recentUsersStore;
    IGUserListLocalDataSource *_localUsersDataSource;
    IGUserListNetworkDataSource *_networkUsersDataSource;
    IGFBFriendsStore *_fbFriendsStore;
}

- (void).cxx_destruct;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (_Bool)isLoading;
- (id)filteredResults;
- (void)tryLoadingMoreResults;
- (void)filterWithQuery:(id)arg1 isPullToRefresh:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

