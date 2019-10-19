//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WASearchResultsNonvisualAttachmentView-Protocol.h"

@class NSString, UIButton, UILabel, WAPttPlayer, WAPttSlider;

@interface WASearchResultsAudioPlayerView : UIView <WASearchResultsNonvisualAttachmentView>
{
    _Bool _isPlaying;
    _Bool _isDragging;
    double _audioDuration;
    WAPttPlayer *_player;
    UIButton *_button;
    WAPttSlider *_playerScrubber;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) WAPttSlider *playerScrubber; // @synthesize playerScrubber=_playerScrubber;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)audioPlayerStarted:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)pause;
- (void)play;
- (void)playOrPause:(id)arg1;
- (void)updateDurationView;
- (void)playerScrubberDidEndDragging:(id)arg1;
- (void)playerScrubberDidChangeValue:(id)arg1;
- (void)playerScrubberDidStartDragging:(id)arg1;
- (void)configureWithMessage:(id)arg1 searchTokens:(id)arg2;
- (void)pauseAudioPlayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
