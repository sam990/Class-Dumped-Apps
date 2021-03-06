//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectInboxServiceListener-Protocol.h>

@class IGDirectCache, IGDirectInboxService, NSString;
@protocol IGDirectInboxPullToRefreshCoordinatorDelegate;

@interface IGDirectInboxPullToRefreshCoordinator : NSObject <IGDirectInboxServiceListener>
{
    IGDirectInboxService *_inboxService;
    IGDirectCache *_directCache;
    id <IGDirectInboxPullToRefreshCoordinatorDelegate> _delegate;
    NSString *_inboxRequestUUID;
}

- (void).cxx_destruct;
- (void)_executeInboxServiceRequestWithFetchReason:(unsigned long long)arg1;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)executePullToRefresh;
- (_Bool)canPullToRefresh;
- (id)initWithDirectCache:(id)arg1 inboxService:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

