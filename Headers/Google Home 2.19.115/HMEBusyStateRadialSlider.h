//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class HMERadialSlider, NSString, UIColor;
@protocol HMEBusyStateRadialSliderDelegate;

@interface HMEBusyStateRadialSlider : UIView <CAAnimationDelegate>
{
    _Bool _busyAnimationActive;
    id <HMEBusyStateRadialSliderDelegate> _delegate;
    HMERadialSlider *_radialSlider;
}

@property(readonly, nonatomic, getter=isBusyAnimationActive) _Bool busyAnimationActive; // @synthesize busyAnimationActive=_busyAnimationActive;
@property(readonly, nonatomic) HMERadialSlider *radialSlider; // @synthesize radialSlider=_radialSlider;
@property(nonatomic) __weak id <HMEBusyStateRadialSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSliderWidth:(double)arg1 animated:(_Bool)arg2;
- (id)trackFillBusyAnimation:(unsigned long long)arg1;
- (void)stopBusyStateBusyAnimation:(_Bool)arg1;
- (void)startBusyStateBusyAnimation:(unsigned long long)arg1 fromCurrentPosition:(_Bool)arg2;
- (void)startBusyStateResetAnimation:(unsigned long long)arg1 fromCurrentPosition:(_Bool)arg2;
- (void)startBusyStateHoldAnimation:(unsigned long long)arg1 fromCurrentPosition:(_Bool)arg2;
- (void)stopLoadingAnimation:(_Bool)arg1;
- (void)startLoadingAnimation;
- (void)prepareForLoadingAnimation;
@property(readonly, nonatomic, getter=isLoadingAnimationActive) _Bool loadingAnimationActive;
@property(retain, nonatomic) UIColor *filledTrackColor;
- (id)emptyTrackLayer;
- (id)filledTrackLayer;
- (id)propertyAnimationForLayer:(id)arg1 keyPath:(id)arg2 fromValue:(float)arg3 toValue:(float)arg4 withBeginTime:(float)arg5 withDuration:(float)arg6;
- (void)saveCurrentTrackAnimationState;
- (void)prepareForBusyStateAnimation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

