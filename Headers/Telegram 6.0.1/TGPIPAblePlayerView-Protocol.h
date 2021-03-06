//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@class SSignal;
@protocol TGPIPAblePlayerState;

@protocol TGPIPAblePlayerView <NSObject>
@property(nonatomic) struct CGRect initialFrame;
@property(nonatomic) _Bool disallowPIP;
@property(copy, nonatomic) CDUnknownBlockType requestPictureInPicture;
- (void)finishedLeavingFullscreen;
- (void)beginLeavingFullscreen;
- (void)pausePIPPlayback;
- (void)resumePIPPlayback;
- (void)_prepareToLeaveFullscreen;
- (void)_prepareToEnterFullscreen;
- (void)_requestSystemPictureInPictureMode;
- (void)switchToPictureInPicture;
- (_Bool)supportsPIP;
- (SSignal *)stateSignal;
- (id <TGPIPAblePlayerState>)state;
- (void)seekToFractPosition:(double)arg1;
- (void)seekToPosition:(double)arg1;
- (void)pauseVideo;
- (void)playVideo;
@end

