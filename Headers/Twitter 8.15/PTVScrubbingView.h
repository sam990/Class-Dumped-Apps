//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PTVScrubberView, PTVScrubbingThumbnailView, UIButton, UILabel, UIStackView;
@protocol PTVScrubbingViewDelegate;

@interface PTVScrubbingView : UIView
{
    PTVScrubberView *_scrubbingBar;
    UIStackView *_hintContainerView;
    UILabel *_zoomLabel;
    PTVScrubbingThumbnailView *_thumbnailView;
    _Bool _isInScrubMode;
    double _currentSelectedTime;
    NSLayoutConstraint *_thumbnailTopWithHintsLayoutConstraint;
    NSLayoutConstraint *_thumbnailTopWithoutHintsLayoutConstraint;
    _Bool _shouldShowHints;
    id <PTVScrubbingViewDelegate> _delegate;
    UIView *_blurredBackgroundView;
    UIButton *_playButton;
    double _totalDuration;
    double _startTime;
    double _currentScrubbingZoom;
    long long _interfaceOrientation;
    UILabel *_timecodeView;
}

+ (id)HintViewWithIcon:(id)arg1 Title:(id)arg2;
@property(readonly, nonatomic) UILabel *timecodeView; // @synthesize timecodeView=_timecodeView;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) _Bool shouldShowHints; // @synthesize shouldShowHints=_shouldShowHints;
@property(nonatomic) double currentScrubbingZoom; // @synthesize currentScrubbingZoom=_currentScrubbingZoom;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(nonatomic) __weak id <PTVScrubbingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHintsAlpha;
- (void)setNewThumbnailURL:(id)arg1;
- (void)setZoomLabelTextForCurrentZoom;
@property(nonatomic) double currentSelectedTime;
@property(readonly, nonatomic) double bottomAreaHeight;
- (void)hideAnimationDidComplete;
- (void)updateAlphaForHide;
- (void)hide;
- (void)updateAlphaForStartScrubbing;
- (void)show;
- (void)updateAlphaForEndScrubbing;
- (void)endScrubbing;
- (void)startScrubbing;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;

@end
