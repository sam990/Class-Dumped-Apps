//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerObserver-Protocol.h"

@class NSHashTable, NSString, SPTStatefulPlayer;

@interface SPTNowPlayingTrackPosition : NSObject <SPTStatefulPlayerObserver>
{
    NSHashTable *_observers;
    SPTStatefulPlayer *_player;
}

@property(retain, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)statefulPlayer:(id)arg1 didStageContext:(id)arg2;
- (void)playerDidFinishUpdating:(id)arg1;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)scrubToPosition:(double)arg1;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool disallowSeekingAlways;
@property(readonly, nonatomic) _Bool disallowSeeking;
@property(readonly, nonatomic) double playbackSpeed;
@property(readonly, nonatomic) double trackLength;
@property(readonly, nonatomic) double currentTrackProgress;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (double)currentTrackProgressWithOverrideValue:(float)arg1;
- (id)timeIntervalToString:(double)arg1;
- (id)currentTrackRemainingTimeTextWithOverrideValue:(float)arg1;
- (id)currentTrackPositionTextWithOverrideValue:(float)arg1;
- (id)currentTrackDurationText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
