//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, NSString;
@protocol AWEAnimatedRecordLayerProtocol;

@interface AWEAnimatedRecordButton : UIButton <CAAnimationDelegate>
{
    CALayer<AWEAnimatedRecordLayerProtocol> *_innerLayer;
    CALayer<AWEAnimatedRecordLayerProtocol> *_outterLayer;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *outterLayer; // @synthesize outterLayer=_outterLayer;
@property(retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *innerLayer; // @synthesize innerLayer=_innerLayer;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)p_endMixHoldTapAnimation;
- (void)p_endCountDownAnimation;
- (void)p_endTapPictureAnimation;
- (void)p_endTapVideoAnimation;
- (void)p_endHoldVideoAnimation;
- (void)endAnimation;
- (void)p_beginMixHoldTapAnimation;
- (void)p_beginCountDownAnimation;
- (void)p_beginTapPictureAnimation;
- (void)p_beginTapVideoAnimation;
- (void)p_beginHoldVideoAnimation;
- (void)beginAnimation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_switchToMixTapHoldVideoType;
- (void)p_switchToCountDownType;
- (void)p_switchToTapPictureType;
- (void)p_switchToTapVideoType;
- (void)p_switchToHoldVideoType;
- (void)p_performBeforeSwitchActionAnimation;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

