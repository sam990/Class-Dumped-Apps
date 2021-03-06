//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedItemUpdatedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaHiddenListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaUnhiddenListener-Protocol.h>

@class IGFeedItem, IGUserSession, NSString;
@protocol IGTVFeedItemUpdateCoordinatorDelegate;

@interface IGTVFeedItemUpdateCoordinator : NSObject <IGFeedItemUpdatedListener, IGMediaUnhiddenListener, IGMediaHiddenListener>
{
    IGUserSession *_userSession;
    id <IGTVFeedItemUpdateCoordinatorDelegate> _delegate;
    IGFeedItem *_feedItem;
}

@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)mediaUnhiddenFeedItem:(id)arg1;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3;
- (void)feedItemUpdated:(id)arg1 feedItemChange:(long long)arg2;
@property(readonly, nonatomic) _Bool hidden;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

