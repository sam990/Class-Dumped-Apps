//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@class NSDate, NSMutableArray, NSString, NSTimer, TFNTwitterAudioTrack, TFSKVODispatcher;
@protocol T1AudioAVPlayerDelegate;

@interface T1AudioAVPlayer : AVPlayer
{
    _Bool _didPlaybackStall;
    _Bool _didSendPlaybackComplete;
    _Bool _didSendPlaybackStart;
    _Bool _limitBufferingAggressivelyOnPausedItems;
    _Bool _limitBufferingOnAllPlayerItems;
    _Bool _timerRunning;
    float _playerVolume;
    float _currentRate;
    id <T1AudioAVPlayerDelegate> _delegate;
    TFNTwitterAudioTrack *_track;
    double _currentItemDuration;
    NSString *_mediaURL;
    double _cachedPreferredForwardBufferDuration;
    double _furthestPlaybackTime;
    NSTimer *_playbackTimer;
    TFSKVODispatcher *_durationKVODispatcher;
    NSDate *_lastTimerFireDateWithNormalPlayback;
    NSMutableArray *_tentpolesDidPass;
    NSMutableArray *_tentpolesToNotify;
    CDStruct_1b6d18a9 _lastContinuousPlaybackCMTime;
}

@property(readonly, nonatomic) float currentRate; // @synthesize currentRate=_currentRate;
@property(retain, nonatomic) NSMutableArray *tentpolesToNotify; // @synthesize tentpolesToNotify=_tentpolesToNotify;
@property(retain, nonatomic) NSMutableArray *tentpolesDidPass; // @synthesize tentpolesDidPass=_tentpolesDidPass;
@property(copy, nonatomic) NSDate *lastTimerFireDateWithNormalPlayback; // @synthesize lastTimerFireDateWithNormalPlayback=_lastTimerFireDateWithNormalPlayback;
@property(retain, nonatomic) TFSKVODispatcher *durationKVODispatcher; // @synthesize durationKVODispatcher=_durationKVODispatcher;
@property(retain, nonatomic) NSTimer *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(nonatomic) double furthestPlaybackTime; // @synthesize furthestPlaybackTime=_furthestPlaybackTime;
@property(nonatomic) double cachedPreferredForwardBufferDuration; // @synthesize cachedPreferredForwardBufferDuration=_cachedPreferredForwardBufferDuration;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(nonatomic) float playerVolume; // @synthesize playerVolume=_playerVolume;
@property(nonatomic) CDStruct_1b6d18a9 lastContinuousPlaybackCMTime; // @synthesize lastContinuousPlaybackCMTime=_lastContinuousPlaybackCMTime;
@property(nonatomic) _Bool timerRunning; // @synthesize timerRunning=_timerRunning;
@property(nonatomic) _Bool limitBufferingOnAllPlayerItems; // @synthesize limitBufferingOnAllPlayerItems=_limitBufferingOnAllPlayerItems;
@property(nonatomic) _Bool limitBufferingAggressivelyOnPausedItems; // @synthesize limitBufferingAggressivelyOnPausedItems=_limitBufferingAggressivelyOnPausedItems;
@property(nonatomic) _Bool didSendPlaybackStart; // @synthesize didSendPlaybackStart=_didSendPlaybackStart;
@property(nonatomic) _Bool didSendPlaybackComplete; // @synthesize didSendPlaybackComplete=_didSendPlaybackComplete;
@property(nonatomic) _Bool didPlaybackStall; // @synthesize didPlaybackStall=_didPlaybackStall;
@property(nonatomic) double currentItemDuration; // @synthesize currentItemDuration=_currentItemDuration;
@property(readonly, nonatomic) TFNTwitterAudioTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) __weak id <T1AudioAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tfn_scribeActionForTentpoleType:(long long)arg1;
- (void)_tfn_checkAndNotifyTentpoleWithCurrentPlaybackTime:(double)arg1;
- (_Bool)_tfn_hasSentTentpoleWithType:(long long)arg1;
- (void)_tfn_setupTentpolesWithCurrentPlaybackTime:(double)arg1;
- (void)resetScribeState;
- (void)_tfn_playbackDidProgressToTime:(double)arg1 withIncrement:(double)arg2;
- (void)_tfn_playbackDidStall;
- (void)_tfn_playbackDidFinish;
@property(readonly, nonatomic) double currentPlaybackTime;
- (void)_tfn_timerTick_:(id)arg1;
- (void)_tfn_stopTimeObserver;
- (void)_tfn_startTimeObserver;
- (void)_tfn_kvo_DurationDidChange:(id)arg1;
- (void)_tfn_startDurationKVO;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)play;
- (void)pause;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)dispose;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 urlString:(id)arg2;
- (id)initWithDelegate:(id)arg1 track:(id)arg2;

@end

