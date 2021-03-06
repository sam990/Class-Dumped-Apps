//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGKragleAnalytics-Protocol.h>
#import <InstagramAppCoreFramework/IGKragleStateUpdater-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCVideoCallControllerIntf-Protocol.h>

@class FB_RTCAudioSession, IGAudioSessionClient, IGBMRTCEngineModel, IGRTCKragle, IGRTCKragleVideoViewManager, IGVideoCallLoggingContext, NSString;
@protocol IGRTCVideoCallControllerConnectionDelegate, IGRTCVideoCallControllerParticipantDelegate;

@interface IGRTCKragleBridge : NSObject <IGKragleAnalytics, IGKragleStateUpdater, IGRTCVideoCallControllerIntf>
{
    IGRTCKragle *_kragle;
    IGRTCKragleVideoViewManager *_viewManager;
    IGVideoCallLoggingContext *_loggingContext;
    id <IGRTCVideoCallControllerConnectionDelegate> _connectionDelegate;
    id <IGRTCVideoCallControllerParticipantDelegate> _participantDelegate;
    IGBMRTCEngineModel *_currentState;
    struct Optional<bool> _optimisticMuteState;
    FB_RTCAudioSession *_rtcAudioSession;
    IGAudioSessionClient *_audioClient;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logWaterfallEventOnMain:(id)arg1;
- (void)logWaterfallEvent:(id)arg1;
- (void)kragle:(id)arg1 engineStateUpdated:(id)arg2 debugStateUpdateString:(id)arg3;
- (_Bool)videoEnabled;
- (void)setVideoEnabled:(_Bool)arg1;
- (void)setVideoDelegate:(id)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setCameraView:(id)arg1;
- (_Bool)audioEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)leaveWithReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)joinCall:(id)arg1 manualAudio:(_Bool)arg2 configuration:(id)arg3 threadId:(id)arg4 threadUsers:(id)arg5 capabilities:(id)arg6;
- (_Bool)isConnected;
- (void)handleDismissSignalFromSource:(long long)arg1;
- (void)restartAudioDevice;
- (void)callKitDidDeactivateAudioSession:(id)arg1;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (void)dealloc;
- (id)initWithKragle:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

