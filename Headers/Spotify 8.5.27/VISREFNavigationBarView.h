//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderViewAnimationProgress-Protocol.h"

@class NSString, TKNLabel, VISREFGradientView;
@protocol VISREFHeaderViewAnimationProgress;

@interface VISREFNavigationBarView : UIView <VISREFHeaderViewAnimationProgress>
{
    UIView<VISREFHeaderViewAnimationProgress> *_backButton;
    TKNLabel *_titleLabel;
    VISREFGradientView *_overlayGradient;
    double _latestProgress;
    CDStruct_5a28e70a _normalizedTitleFadeRange;
}

@property(nonatomic) double latestProgress; // @synthesize latestProgress=_latestProgress;
@property(retain, nonatomic) VISREFGradientView *overlayGradient; // @synthesize overlayGradient=_overlayGradient;
@property(retain, nonatomic) TKNLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView<VISREFHeaderViewAnimationProgress> *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) CDStruct_5a28e70a normalizedTitleFadeRange; // @synthesize normalizedTitleFadeRange=_normalizedTitleFadeRange;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)fullHeaderViewNormalizedProgressUpdate:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setAssociatedColor:(id)arg1;
@property(nonatomic, getter=isVisible) _Bool visibility;
- (void)setupLayout;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
