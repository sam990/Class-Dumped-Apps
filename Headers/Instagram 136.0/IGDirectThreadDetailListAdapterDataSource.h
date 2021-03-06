//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectThreadDetailsDataSourceProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGUserBlockingListener-Protocol.h>

@class IGDirectThread, IGDirectThreadDetailViewConfig, IGDirectThreadDetailViewModelGenerator, IGDirectThreadDetailsViewModel, IGDirectThreadSubscriptionService, IGUserSession, NSArray, NSString;
@protocol IGDirectDataSubscriptionToken, IGDirectThreadDetailsDataSourceActionHandler, IGDirectThreadDetailsDataSourceDelegate, IGListDiffable, IGUserExperimentSetProviding;

@interface IGDirectThreadDetailListAdapterDataSource : NSObject <IGUserBlockingListener, IGDirectThreadDetailsDataSourceProtocol>
{
    IGDirectThreadDetailViewModelGenerator *_viewModelGenerator;
    IGDirectThreadDetailViewConfig *_config;
    id <IGUserExperimentSetProviding> _experimentSetProvider;
    IGUserSession *_userSession;
    NSArray *_users;
    IGDirectThreadSubscriptionService *_subscriptionService;
    id <IGDirectDataSubscriptionToken> _subscriptionToken;
    IGDirectThread *_thread;
    IGDirectThreadDetailsViewModel *_threadDetailsViewModel;
    id <IGListDiffable> _userSectionTitleViewModel;
    id <IGDirectThreadDetailsDataSourceDelegate> _delegate;
    id <IGDirectThreadDetailsDataSourceActionHandler> _actionHandler;
}

@property(nonatomic) __weak id <IGDirectThreadDetailsDataSourceActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak id <IGDirectThreadDetailsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGListDiffable> userSectionTitleViewModel; // @synthesize userSectionTitleViewModel=_userSectionTitleViewModel;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateWithThread:(id)arg1;
- (void)_updateUserBlockListening;
- (void)blockingStatusForUser:(id)arg1 didUpdateWithBlockingStatus:(_Bool)arg2;
- (void)stopListeningForDataChanges;
- (void)startListeningForDataChanges;
- (id)initWithConfig:(id)arg1 presenceManager:(id)arg2 participantsRequestsController:(id)arg3 threadSubscriptionService:(id)arg4 experimentProvider:(id)arg5 irisSyncStatusProvider:(id)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

