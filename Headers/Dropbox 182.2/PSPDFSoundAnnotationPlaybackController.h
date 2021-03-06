//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PSPDFKitUI/PSPDFAudioPlotSamplerObserver-Protocol.h>
#import <PSPDFKitUI/PSPDFSoundAnnotationPlayback-Protocol.h>

@class NSDateComponentsFormatter, NSString, NSTimer, PSPDFAudioPlotSampler, PSPDFAudioPlotView, PSPDFButton, PSPDFMicrophonePlotView, PSPDFSoundAnnotation, UILabel, UISlider, UIStackView, UIView;

@interface PSPDFSoundAnnotationPlaybackController : UIViewController <PSPDFAudioPlotSamplerObserver, PSPDFSoundAnnotationPlayback>
{
    _Bool _isScrubbing;
    PSPDFSoundAnnotation *_soundAnnotation;
    UIStackView *_playbackStackView;
    PSPDFAudioPlotSampler *_plotSampler;
    PSPDFMicrophonePlotView *_microphonePlotView;
    PSPDFAudioPlotView *_bluePlotView;
    PSPDFAudioPlotView *_greyPlotView;
    PSPDFButton *_recordingButton;
    PSPDFButton *_playbackButton;
    PSPDFButton *_doneButton;
    UILabel *_playbackTimeLabel;
    UILabel *_totalTimeLabel;
    UILabel *_statusLabel;
    UISlider *_progressSlider;
    UIView *_playbackWaveFormContainer;
    UIView *_microphoneWaveFormContainer;
    UIStackView *_recordingStackView;
    NSDateComponentsFormatter *_timeIntervalFormatter;
    NSTimer *_playbackTimer;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSTimer *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(readonly, nonatomic) NSDateComponentsFormatter *timeIntervalFormatter; // @synthesize timeIntervalFormatter=_timeIntervalFormatter;
@property(retain, nonatomic) UIStackView *recordingStackView; // @synthesize recordingStackView=_recordingStackView;
@property(retain, nonatomic) UIView *microphoneWaveFormContainer; // @synthesize microphoneWaveFormContainer=_microphoneWaveFormContainer;
@property(retain, nonatomic) UIView *playbackWaveFormContainer; // @synthesize playbackWaveFormContainer=_playbackWaveFormContainer;
@property(retain, nonatomic) UISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playbackTimeLabel; // @synthesize playbackTimeLabel=_playbackTimeLabel;
@property(retain, nonatomic) PSPDFButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) PSPDFButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(retain, nonatomic) PSPDFButton *recordingButton; // @synthesize recordingButton=_recordingButton;
@property(retain, nonatomic) PSPDFAudioPlotView *greyPlotView; // @synthesize greyPlotView=_greyPlotView;
@property(retain, nonatomic) PSPDFAudioPlotView *bluePlotView; // @synthesize bluePlotView=_bluePlotView;
@property(retain, nonatomic) PSPDFMicrophonePlotView *microphonePlotView; // @synthesize microphonePlotView=_microphonePlotView;
@property(readonly, nonatomic) PSPDFAudioPlotSampler *plotSampler; // @synthesize plotSampler=_plotSampler;
@property(retain, nonatomic) UIStackView *playbackStackView; // @synthesize playbackStackView=_playbackStackView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) __weak PSPDFSoundAnnotation *soundAnnotation; // @synthesize soundAnnotation=_soundAnnotation;
- (void).cxx_destruct;
- (void)audioPlotSampler:(id)arg1 didFailForSamplingURL:(id)arg2 withError:(id)arg3;
- (void)audioPlotSampler:(id)arg1 didFinishPath:(id)arg2 forSamplingURL:(id)arg3;
- (void)audioPlotSampler:(id)arg1 didUpdatePath:(id)arg2 forSamplingURL:(id)arg3 progress:(double)arg4;
- (void)updatePlotViewsWithPath:(id)arg1 progress:(double)arg2;
- (id)imageForControl:(long long)arg1 withBaseColor:(id)arg2 borderColor:(id)arg3;
- (struct CGRect)boundsForControl:(long long)arg1;
- (void)updateControlsWithColor:(id)arg1 borderColor:(id)arg2;
- (void)setupImagesAndColorsForControls;
@property(readonly, nonatomic, getter=isSoundAnnotationPlayerShown) _Bool soundAnnotationPlayerShown;
- (void)hideSoundAnnotationPlayerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSoundAnnotationPlayerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSoundAnnotationPlayerShown:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidatePlaybackTimer;
- (void)schedulePlaybackTimer;
- (void)updatePlaybackTime;
- (void)switchToAudioPlot;
- (void)didReceiveStopAllNotification:(id)arg1;
- (void)done:(id)arg1;
- (void)updateViewConfiguration;
- (void)annotationStateChanged:(id)arg1;
- (void)playPause:(id)arg1;
- (void)startOrPauseRecording:(id)arg1;
- (void)endDrag:(id)arg1;
- (void)updateBluePlotViewMask;
- (void)updateThumb:(id)arg1;
- (void)startDrag:(id)arg1;
- (void)setupPlotViews;
- (void)setupLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

