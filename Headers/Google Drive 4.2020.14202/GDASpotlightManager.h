//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKItemsLiveListDelegate-Protocol.h"

@protocol GDKFileResolving, GDKItemsLiveList, GDKItemsLiveListQuerent, SSOIdentity, SSOService;

@interface GDASpotlightManager : NSObject <GDKItemsLiveListDelegate>
{
    id <GDKItemsLiveListQuerent> _liveListQuerent;
    id <SSOIdentity> _ssoIdentity;
    id <GDKItemsLiveList> _recentLiveList;
    id <SSOService> _ssoService;
    id <GDKFileResolving> _fileResolver;
}

@property(readonly, nonatomic) id <GDKFileResolving> fileResolver; // @synthesize fileResolver=_fileResolver;
@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) id <GDKItemsLiveList> recentLiveList; // @synthesize recentLiveList=_recentLiveList;
@property(retain, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(retain, nonatomic) id <GDKItemsLiveListQuerent> liveListQuerent; // @synthesize liveListQuerent=_liveListQuerent;
- (void).cxx_destruct;
- (_Bool)multipleAccountsOnDevice;
- (void)postNotificationName:(id)arg1;
- (void)addCSItemsForFiles:(id)arg1 postFinishNotification:(_Bool)arg2;
- (void)processDeltaItems:(id)arg1 postFinishNotification:(_Bool)arg2;
- (void)itemsLiveList:(id)arg1 itemsDidChange:(id)arg2 error:(id)arg3;
- (void)itemsLiveList:(id)arg1 didFetchResults:(id)arg2 resultsCompleteness:(long long)arg3 error:(id)arg4;
- (void)removeUsersItemsFromSpotlightIndex;
- (void)addRecentItemsToSpotlightIndex;
- (id)initWithSSOIdentity:(id)arg1 ssoService:(id)arg2 liveListQuerent:(id)arg3 fileResolver:(id)arg4;

@end

