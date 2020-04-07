//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPVolumeView, NSArray, NSTimer;

@interface PTVVolumeBarView : UIView
{
    _Bool _displayed;
    UIView *_volumeBarBackgroundView;
    MPVolumeView *_volumeView;
    NSTimer *_fadeawayTimer;
    UIView *_segmentsContainerView;
    NSArray *_segmentViews;
    double _previousSegmentCount;
    double _currentSegmentCount;
}

@property(nonatomic, getter=isBeingDisplayed) _Bool displayed; // @synthesize displayed=_displayed;
@property(nonatomic) double currentSegmentCount; // @synthesize currentSegmentCount=_currentSegmentCount;
@property(nonatomic) double previousSegmentCount; // @synthesize previousSegmentCount=_previousSegmentCount;
@property(retain, nonatomic) NSArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(retain, nonatomic) UIView *segmentsContainerView; // @synthesize segmentsContainerView=_segmentsContainerView;
@property(retain, nonatomic) NSTimer *fadeawayTimer; // @synthesize fadeawayTimer=_fadeawayTimer;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIView *volumeBarBackgroundView; // @synthesize volumeBarBackgroundView=_volumeBarBackgroundView;
- (void).cxx_destruct;
- (void)setDisplayed:(_Bool)arg1 animated:(_Bool)arg2;
- (double)containerHeight;
- (double)containerWidth;
- (double)currentVolume;
- (void)updateVolume;
- (void)updateVolumeWithPresentation:(_Bool)arg1;
- (void)updateSegments;
- (void)layoutContainerFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
