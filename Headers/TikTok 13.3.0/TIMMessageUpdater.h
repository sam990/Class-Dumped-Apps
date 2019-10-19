//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMMessageUpdaterProtocol-Protocol.h"

@class NSString;

@interface TIMMessageUpdater : NSObject <TIMMessageUpdaterProtocol>
{
}

+ (id)sharedInstance;
- (void)removePropertyItemForMessage:(id)arg1 inConversation:(id)arg2 withKey:(id)arg3 idempotentID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addPropertyItemForMessage:(id)arg1 inConversation:(id)arg2 withKey:(id)arg3 value:(id)arg4 idempotentID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setPropertyItemForMessage:(id)arg1 inConversation:(id)arg2 withKey:(id)arg3 value:(id)arg4 idempotentID:(id)arg5 allowRefreshTicket:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)recallMessage:(id)arg1 inConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
