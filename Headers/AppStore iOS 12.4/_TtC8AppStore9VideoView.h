//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore17RoundedCornerView.h"

#import "AVPlayerViewControllerDelegate_AppStoreOnly-Protocol.h"

@interface _TtC8AppStore9VideoView : _TtC8AppStore17RoundedCornerView <AVPlayerViewControllerDelegate_AppStoreOnly>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: previewFrameArtwork
    // Error parsing type: , name: videoPlayer
    // Error parsing type: , name: playerViewController
    // Error parsing type: , name: playbackId
    // Error parsing type: , name: templateMediaEvent
    // Error parsing type: , name: templateClickEvent
    // Error parsing type: , name: configuration
    // Error parsing type: , name: videoUrl
    // Error parsing type: , name: wasAudioOnPreFullScreen
    // Error parsing type: , name: isFullScreen
    // Error parsing type: , name: currentTouch
    // Error parsing type: , name: releaseAssetsAtNextPauseState
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (void)handleMediaServicesReset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setContinuousCornerRadius:(double)arg1;
@property(nonatomic) double _continuousCornerRadius;
- (void)_setCornerRadius:(double)arg1;
@property(nonatomic) double _cornerRadius;
- (void)updateAudioSessionCategoryWithIsAudioOn:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didChangeAutoPlayVideoSetting;
- (id)initWithCoder:(id)arg1;

@end
