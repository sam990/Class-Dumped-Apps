//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCallRemoteMessageHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCSessionStateMachineDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCTrackStateManagerDataProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCTrackStateManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCVideoCallSignalingServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGWebRTCAudioStallSentryDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGWebRTCPeerConnectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGWebRTCPeerConnectionControllerPerfLoggingDelegate-Protocol.h>

@class FBTimer, IGAnnouncer, IGAudioSessionClient, IGCallRemoteMessageHandler, IGMwsRealtimeTopicHandlingService, IGRTCCommonBatchedSessionHelper, IGRTCSessionStateMachine, IGRTCStatsWaterfallLoggingAdapter, IGRTCTrackStateManager, IGRTCVideoCallDebugOverlayManager, IGRTCVideoCallJoinInfo, IGRTCVideoCallSignalingService, IGRTCVideoCallVideoConfigurationManager, IGRealtimeMqttClient, IGVideoCallRTCStatsManager, IGVideoCallTimeSeriesLogger, IGWebRTCAudioStallSentry, IGWebRTCPeerConnectionController, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IGMwsRealtimeSubscriptionToken, IGRTCVideoCallSessionDelegate, IGRTCVideoCallSessionLogger, IGUserExperimentSetProviding;

@interface IGRTCVideoCallSession : NSObject <IGRTCSessionStateMachineDelegate, IGCallRemoteMessageHandlerDelegate, IGRTCVideoCallSignalingServiceDelegate, IGWebRTCPeerConnectionControllerDelegate, IGRTCTrackStateManagerDelegate, IGRTCTrackStateManagerDataProvider, IGWebRTCAudioStallSentryDelegate, IGWebRTCPeerConnectionControllerPerfLoggingDelegate>
{
    id <IGUserExperimentSetProviding> _experimentSet;
    NSString *_userPk;
    IGRealtimeMqttClient *_mqttClient;
    IGMwsRealtimeTopicHandlingService *_mwsRealtimeTopicHandlingService;
    id <IGMwsRealtimeSubscriptionToken> _subscriptionToken;
    IGRTCVideoCallJoinInfo *_joinInfo;
    IGWebRTCPeerConnectionController *_peerConnectionController;
    IGRTCCommonBatchedSessionHelper *_batchedSessionHelper;
    IGRTCVideoCallSignalingService *_signalingService;
    IGCallRemoteMessageHandler *_remoteCallMessageHandler;
    IGRTCSessionStateMachine *_stateMachine;
    IGRTCVideoCallVideoConfigurationManager *_videoConfigurationManager;
    IGAudioSessionClient *_audioClient;
    id <IGRTCVideoCallSessionDelegate> _delegate;
    IGRTCTrackStateManager *_trackStateManager;
    IGRTCVideoCallDebugOverlayManager *_debugOverlayManager;
    FBTimer *_fetchStatsTimer;
    NSMutableDictionary *_activeStreamIds;
    IGAnnouncer *_rtcStatsAnnouncer;
    IGRTCStatsWaterfallLoggingAdapter *_rtcStatsWaterfallLoggingAdapter;
    IGVideoCallTimeSeriesLogger *_tsLogger;
    IGVideoCallRTCStatsManager *_statsManager;
    IGWebRTCAudioStallSentry *_audioSentry;
    _Bool _notifiedFirstParticipantJoined;
    _Bool _isInitiatingCall;
    double _joinInitiatedTimestamp;
    NSDictionary *_localCapabilities;
    id <IGRTCVideoCallSessionLogger> _callSessionLogger;
}

@property(retain, nonatomic) id <IGRTCVideoCallSessionLogger> callSessionLogger; // @synthesize callSessionLogger=_callSessionLogger;
- (void).cxx_destruct;
- (void)logSetLocalSdpEnd;
- (void)logSetLocalSdpBegin;
- (void)logSetRemoteSdpEnd;
- (void)logSetRemoteSdpBegin;
- (void)logOfferSdpCreateEndWithSuccess:(_Bool)arg1;
- (void)logOfferSdpCreateBegin;
- (void)audioStallSentry:(id)arg1 detectedAudioStallWithAudioBytes:(unsigned long long)arg2 afterInterval:(double)arg3;
- (id)trackStateManager:(id)arg1 trackInfoForTrackId:(id)arg2;
- (void)trackStateManager:(id)arg1 didUpdateStreamId:(id)arg2 oldStreamState:(id)arg3 newStreamState:(id)arg4;
- (void)sessionStateMachine:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)messageHandlerDidServerMediaUpdate:(id)arg1 versionNumber:(id)arg2 mediaUpdates:(id)arg3;
- (void)messageHandlerDidDismiss:(id)arg1 reason:(id)arg2 sessionId:(id)arg3;
- (void)messageHandler:(id)arg1 didStateTransitionForParticipant:(id)arg2 fromState:(long long)arg3 toState:(long long)arg4 capabilities:(id)arg5;
- (void)messageHandler:(id)arg1 didRingForSessionId:(id)arg2 encodedServerDataInfo:(id)arg3 withMessage:(id)arg4 conferenceType:(long long)arg5;
- (void)messageHandler:(id)arg1 didReceiveEncodedServerDataInfo:(id)arg2;
- (void)signalingService:(id)arg1 didUpdateSessionId:(id)arg2 encodedServerDataInfo:(id)arg3;
- (void)peerConnectionController:(id)arg1 didEndWithError:(id)arg2;
- (void)peerConnectionControllerDidDisconnect:(id)arg1;
- (void)peerConnectionControllerDidConnect:(id)arg1;
- (void)peerConnectionController:(id)arg1 didStallVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didResumeVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveVideoViewForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didAddVideoInView:(id)arg2 streamId:(id)arg3;
- (void)peerConnectionController:(id)arg1 didAddStreamId:(id)arg2;
- (void)_onAppWillTerminate;
- (void)_reachabilityDidChange:(id)arg1;
- (void)_applicationWasBackgrounded:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_audioSessionInterruption:(id)arg1;
- (id)_encodedServerDataInfo;
- (id)_sessionId;
- (void)_handleDismissMessage:(id)arg1;
- (id)_createRTCStatsTimerWithInterval:(double)arg1;
- (_Bool)isValidStreamId:(id)arg1;
- (void)_updateObservedStallTime;
- (void)_closePeerConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchStreamStats;
- (void)_checkParticipantVideoState;
- (void)_logVideoShouldStartForStreamId:(id)arg1;
- (void)_logParticipantStatusUpdate;
- (void)_detachMwsMessageHandlerWithSessionId:(id)arg1;
- (void)_attachMwsMessageHandlerWithSessionId:(id)arg1;
- (void)_setupConnectionWithOptions:(unsigned long long)arg1 productInfo:(id)arg2 startedHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)_restartSessionWithOptions:(unsigned long long)arg1;
- (unsigned long long)_mediaUpdateSetupOptions;
- (void)cleanupEndCall;
- (void)callKitDidDeactivateAudioSession:(id)arg1;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (void)handleDismissSignalFromSource:(long long)arg1;
- (void)endSessionImmediatelyAndLeave:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *currentParticipantInfos;
- (void)removeRTCStatsListener:(id)arg1;
- (void)addRTCStatsListener:(id)arg1 withMaximumInterval:(double)arg2;
- (void)setCameraView:(id)arg1;
@property(readonly, nonatomic) _Bool hasLeftSession;
@property(readonly, nonatomic) _Bool isConnected;
@property(nonatomic) _Bool audioDeviceEnabled;
@property(nonatomic) _Bool videoEnabled;
@property(nonatomic) _Bool audioEnabled;
- (void)leaveWithReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)joinCall:(id)arg1 configuration:(id)arg2 productInfo:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithUserPk:(id)arg1 experimentSet:(id)arg2 mqttClient:(id)arg3 mwsRealtimeTopicHandlingService:(id)arg4 networker:(id)arg5 callSessionLogger:(id)arg6 capabilities:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

