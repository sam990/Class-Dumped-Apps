//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AVAsset, HTSPlayer, HTSReactManager, UIView;

@protocol ACCPreviewComponentProtocol <ACCComponentProtocol>
@property(retain, nonatomic) HTSPlayer *reactVideoPlayer;
@property(nonatomic) __weak UIView *reactPlayerContainerView;
@property(retain, nonatomic) HTSPlayer *duetVideoPlayer;
@property(nonatomic) __weak UIView *duetPlayerContainerView;
@property(readonly, nonatomic) __weak UIView *htsCameraContainerView;
@property(nonatomic) struct CGSize reactVideoSize;
@property(nonatomic) __weak UIView *reactCameraContainerView;
@property(retain, nonatomic) HTSReactManager *reactManager;
@property(retain, nonatomic) AVAsset *reactAudioAsset;
- (void)showPlayerMask:(_Bool)arg1;
@end
