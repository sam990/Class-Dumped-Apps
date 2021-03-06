//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdPlayerObserver-Protocol.h"
#import "SPTVoiceSessionObserver-Protocol.h"

@class NSString, NSTimer, SPTAdPlayerObservable, SPTAdVoiceCommandAudioPlayer, SPTObserverManager;
@protocol SPTAccessoryStateManager, SPTAdsBaseCosmosBridge, SPTAdsBaseEntity, SPTEventSender, SPTLinkDispatcher, SPTVoiceSession;

@interface SPTAdVoiceManagerLegacy : NSObject <SPTVoiceSessionObserver, SPTAdPlayerObserver>
{
    _Bool _initialSpeechLogged;
    id <SPTVoiceSession> _voiceSession;
    id <SPTAdsBaseEntity> _adEntity;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAdPlayerObservable *_playerObservable;
    SPTAdVoiceCommandAudioPlayer *_voiceCommandPlayer;
    unsigned long long _voiceManagerState;
    SPTObserverManager *_observerManager;
    CDUnknownBlockType _completionHandler;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTEventSender> _eventSender;
    double _delaySeconds;
    double _recordSeconds;
    NSTimer *_timer;
}

@property(nonatomic) _Bool initialSpeechLogged; // @synthesize initialSpeechLogged=_initialSpeechLogged;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) double recordSeconds; // @synthesize recordSeconds=_recordSeconds;
@property(readonly, nonatomic) double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) unsigned long long voiceManagerState; // @synthesize voiceManagerState=_voiceManagerState;
@property(retain, nonatomic) SPTAdVoiceCommandAudioPlayer *voiceCommandPlayer; // @synthesize voiceCommandPlayer=_voiceCommandPlayer;
@property(retain, nonatomic) SPTAdPlayerObservable *playerObservable; // @synthesize playerObservable=_playerObservable;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
- (void).cxx_destruct;
- (void)logVoiceAdLogEvent:(id)arg1;
- (id)getActiveConnectedDevice;
- (void)skipToNextTrack;
- (void)navigateToURI:(id)arg1;
- (void)playContextURI:(id)arg1;
- (long long)adVoiceIntentFromVoiceCommandIntent:(long long)arg1;
- (void)delayElapsed:(id)arg1;
- (void)adPlayerStateDidChangeToTrack:(id)arg1;
- (void)handleErrorSpeechResponse;
- (void)handleNegativeSpeechResponse;
- (void)handlePositiveSpeechResponse;
- (void)stopSpeechRecognition;
- (void)startSpeechRecognition;
- (void)startSpeechWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)voiceSession:(id)arg1 didUpdateTranscriptText:(id)arg2;
- (void)voiceSession:(id)arg1 didFailVoiceCommand:(id)arg2 withError:(id)arg3;
- (void)voiceSession:(id)arg1 didReceiveVoiceCommand:(id)arg2;
- (void)voiceSessionDidStartListening:(id)arg1;
- (void)voiceSessionWillStartListening:(id)arg1;
- (void)voiceSessionDidStopListening:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithVoiceSession:(id)arg1 adEntity:(id)arg2 playerObservable:(id)arg3 linkDispatcher:(id)arg4 cosmosBridge:(id)arg5 accessoryStateManager:(id)arg6 eventSender:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

