//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBActivityManager-Protocol.h"
#import "NSUserActivityDelegate-Protocol.h"

@class NSString, NSUserActivity;
@protocol DBSpotlightIndexingManager;

@interface DBUserActivityManager : NSObject <NSUserActivityDelegate, DBActivityManager>
{
    NSString *_userId;
    NSUserActivity *_currentUserActivity;
    id <DBSpotlightIndexingManager> _indexingManager;
}

+ (id)db_userActivityForItem:(id)arg1;
+ (_Bool)db_doesDeviceSupportUserActivitiesInSpotlight;
+ (_Bool)db_calculateSupportStateForActivitiesInSpotlight;
- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userActivityEnded;
- (void)db_endCurrentActivity;
- (void)userActivityBeganForFilePath:(id)arg1;
- (void)db_beginActivityForItem:(id)arg1;
- (void)dealloc;
- (id)initWithUserId:(id)arg1 indexingManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

