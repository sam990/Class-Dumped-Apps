//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GCKCastChannel.h>

#import <Module_Framework/GCKRequestTrackerDelegate-Protocol.h>

@class GCKMultizoneStatus, GCKRequestTracker, NSMutableArray, NSString;
@protocol GCKMultizoneControlChannelDelegate;

@interface GCKMultizoneControlChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    long long _internalStatusRequestID;
    GCKRequestTracker *_getStatusRequestTracker;
    GCKRequestTracker *_setDeviceVolumeRequestTracker;
    GCKRequestTracker *_setDeviceMutedRequestTracker;
    GCKRequestTracker *_updateSessionToDevicesTracker;
    NSMutableArray *_requestTrackers;
    id <GCKMultizoneControlChannelDelegate> _delegate;
    GCKMultizoneStatus *_multizoneStatus;
}

@property(retain, nonatomic) GCKMultizoneStatus *multizoneStatus; // @synthesize multizoneStatus=_multizoneStatus;
@property(nonatomic) __weak id <GCKMultizoneControlChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)notifySessionUpdatedWithRequestID:(long long)arg1 failedToMoveDeviceIDs:(id)arg2 endpoint:(id)arg3;
- (void)notifyDeviceRemoved:(id)arg1;
- (void)notifyDeviceUpdated:(id)arg1;
- (void)notifyDeviceAdded:(id)arg1;
- (void)notifyRequestDidFailWithID:(long long)arg1 error:(id)arg2;
- (void)notifyStatusReceived:(id)arg1 requestID:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (void)notifyInvalidResponse:(long long)arg1;
- (long long)setPlaybackSession:(id)arg1 sessionName:(id)arg2 deviceList:(id)arg3 addDevices:(id)arg4 removeDevices:(id)arg5;
- (long long)updateSession:(id)arg1 addDevices:(id)arg2 removeDevices:(id)arg3 sessionName:(id)arg4;
- (long long)updateSession:(id)arg1 toDevices:(id)arg2 sessionName:(id)arg3;
- (long long)setDeviceMuted:(_Bool)arg1 forDevice:(id)arg2;
- (long long)setDeviceVolume:(float)arg1 forDevice:(id)arg2;
- (long long)requestMultizoneStatus;
- (void)clearAllTrackers;
- (void)dealloc;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

