//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GUNSNotificationsRPCService-Protocol.h"

@class NSSet, NSString;
@protocol GSCDataAccessService;

@interface GUNSNotificationsRPCServiceImpl : NSObject <GUNSNotificationsRPCService>
{
    id <GSCDataAccessService> _dataAccessService;
    NSString *_viewId;
    NSSet *_notificationsWhitelist;
}

+ (void)loadRenderContext:(id)arg1;
- (void).cxx_destruct;
- (id)syncNotificationsWithSyncRequest:(id)arg1;
- (id)fetchNotificationsWithFetchRequest:(id)arg1;
- (id)readStatesPBArrayFromReadState:(long long)arg1;
- (id)prioritiesPBArrayFromPriority:(long long)arg1;
- (id)paramErrorPromise;
- (id)failePromiseWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)markAllNotificationsSeenWithVersion:(unsigned long long)arg1;
- (id)fetchUnseenNotificationCountAndReadState;
- (id)fetchNotificationForKey:(id)arg1;
- (id)markNotifications:(id)arg1 toReadState:(long long)arg2;
- (id)markAllNotificationsReadWithVersion:(unsigned long long)arg1;
- (id)fetchNotificationsWithRequest:(id)arg1;
- (id)initWithDataAccessService:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

