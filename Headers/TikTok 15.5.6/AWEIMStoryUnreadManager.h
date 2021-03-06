//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString;

@interface AWEIMStoryUnreadManager : NSObject <AWEUserMessage>
{
    _Bool _hasSelectedNotificationTabForCurrentLoginUser;
    _Bool _hasFetchedAllChatsFromDBForCurrentLoginUser;
    _Bool _hasFetchedStoryUnreadDataForCurrentLoginUser;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasFetchedStoryUnreadDataForCurrentLoginUser; // @synthesize hasFetchedStoryUnreadDataForCurrentLoginUser=_hasFetchedStoryUnreadDataForCurrentLoginUser;
@property(nonatomic) _Bool hasFetchedAllChatsFromDBForCurrentLoginUser; // @synthesize hasFetchedAllChatsFromDBForCurrentLoginUser=_hasFetchedAllChatsFromDBForCurrentLoginUser;
@property(nonatomic) _Bool hasSelectedNotificationTabForCurrentLoginUser; // @synthesize hasSelectedNotificationTabForCurrentLoginUser=_hasSelectedNotificationTabForCurrentLoginUser;
- (void)handleDidTabbarSelectedIndexChangeNty:(id)arg1;
- (void)didFinishLogout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

