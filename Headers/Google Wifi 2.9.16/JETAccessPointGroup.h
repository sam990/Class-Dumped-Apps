//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JETDraftAccessPointDetailProvider-Protocol.h"

@class GTLRAccesspoints_AccessPoint, GTLRAccesspoints_Group, GTLRAccesspoints_GroupProperties, GTLRAccesspoints_GroupSettings, GTLRAccesspoints_Manager, GTLRAccesspoints_PrioritizedStation, JETUserUpdateGroupOperationQueue, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface JETAccessPointGroup : NSObject <JETDraftAccessPointDetailProvider>
{
    _Bool _isFromV1OfflineCache;
    _Bool _PSKfetchInProgress;
    NSString *_primaryPSK;
    NSString *_guestPSK;
    NSDictionary *_cachedBackhaulTypes;
    GTLRAccesspoints_Group *_group;
    GTLRAccesspoints_Group *_groupWithPendingUpdates;
    NSDate *_lastPSKUpdateTime;
    NSMutableArray *_pendingTransactions;
    JETUserUpdateGroupOperationQueue *_updateOperationQueue;
}

+ (id)deviceFromOfflineStorageDictionary:(id)arg1;
+ (id)deepCopyOfGroup:(id)arg1;
@property(retain, nonatomic) JETUserUpdateGroupOperationQueue *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
@property(retain, nonatomic) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(copy, nonatomic) NSDate *lastPSKUpdateTime; // @synthesize lastPSKUpdateTime=_lastPSKUpdateTime;
@property(nonatomic) _Bool PSKfetchInProgress; // @synthesize PSKfetchInProgress=_PSKfetchInProgress;
@property(retain, nonatomic) GTLRAccesspoints_Group *groupWithPendingUpdates; // @synthesize groupWithPendingUpdates=_groupWithPendingUpdates;
@property(retain, nonatomic) GTLRAccesspoints_Group *group; // @synthesize group=_group;
@property(nonatomic) _Bool isFromV1OfflineCache; // @synthesize isFromV1OfflineCache=_isFromV1OfflineCache;
@property(copy, nonatomic) NSDictionary *cachedBackhaulTypes; // @synthesize cachedBackhaulTypes=_cachedBackhaulTypes;
@property(copy, nonatomic) NSString *guestPSK; // @synthesize guestPSK=_guestPSK;
@property(copy, nonatomic) NSString *primaryPSK; // @synthesize primaryPSK=_primaryPSK;
- (void).cxx_destruct;
- (unsigned long long)WANConfigMode;
- (_Bool)majorVersionIsAtLeast:(long long)arg1;
@property(readonly, nonatomic) _Bool hasDraftAccessPoints;
@property(readonly, nonatomic) NSArray *draftAccessPoints;
- (_Bool)backhaulTypeIsWirelessForChildAccessPoint:(id)arg1;
- (_Bool)backhaulTypeIsWiredForChildAccessPoint:(id)arg1;
- (long long)backhaulTypeForChildAccessPoint:(id)arg1;
- (long long)groupUpdateStatus;
- (id)homeControlSettingsForStationID:(id)arg1;
- (_Bool)isLocallyConnected;
- (id)lastOnlineDate;
- (id)dictionaryForOfflineStorage;
- (_Bool)validForOfflineStorage;
- (void)groupNoLongerPresentInGroupList;
- (void)halfcourtDeviceRefreshedWith:(id)arg1 updateOperationQueue:(id)arg2;
- (void)fetchPSKsWithHalfcourtClient:(id)arg1;
- (void)fetchPSKsIfStaleWithHalfcourtClient:(id)arg1;
- (id)accessPointWithID:(id)arg1;
- (id)pendingGroup;
- (void)rollbackPendingTransaction:(id)arg1 error:(id)arg2;
- (void)completeCommitForTransaction:(id)arg1 halfcourtClient:(id)arg2;
- (void)submitTransaction:(id)arg1 halfcourtClient:(id)arg2 operationBackloggedHandler:(CDUnknownBlockType)arg3;
- (void)submitTransaction:(id)arg1 halfcourtClient:(id)arg2;
- (_Bool)supportsSwipeControlForAccessPoint:(id)arg1;
- (_Bool)supportsWiredSetup;
- (_Bool)supportsMeshNetworking;
- (_Bool)supportsGuestAccess;
- (_Bool)isOwnedByUser:(id)arg1;
@property(readonly, nonatomic) GTLRAccesspoints_PrioritizedStation *currentPrioritizedStation;
- (_Bool)isRootAccessPoint:(id)arg1;
@property(readonly, nonatomic) GTLRAccesspoints_AccessPoint *rootAccessPoint;
@property(readonly, nonatomic) NSArray *accessPoints;
@property(readonly, nonatomic) NSString *groupTitleForDisplay;
- (id)groupName;
@property(readonly, nonatomic) GTLRAccesspoints_GroupSettings *groupSettings;
@property(readonly, nonatomic) GTLRAccesspoints_GroupProperties *groupProperties;
@property(readonly, nonatomic) NSArray *managers;
@property(readonly, nonatomic) GTLRAccesspoints_Manager *owner;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;
- (id)initWithGroup:(id)arg1 updateOperationQueue:(id)arg2;

@end
