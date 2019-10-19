//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCQueuePerformer, SCSentinel, SCUserSession;

@interface SCGalleryBackupNotificationHelper : NSObject <SCCloudSyncStatusListener, SCUserSessionScoped>
{
    SCUserSession *_userSession;
    NSArray *_pendingSnaps;
    CDUnknownBlockType _blockTaskQueuePending;
    CDUnknownBlockType _blockTaskShowNotif;
    double _notificationFrequency;
    double _snapAgeWaitTime;
    SCSentinel *_sentinel;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)_getStackedImageForSnaps:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isGalleryOrStoriesViewVisible;
- (void)_updatePendingSnaps;
- (void)_queuePendingSnapsIfAvailable;
- (_Bool)_shouldShowNotification;
- (void)showBackUpNotificationIfAvailable;
- (void)_reset;
- (void)invalidate;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
