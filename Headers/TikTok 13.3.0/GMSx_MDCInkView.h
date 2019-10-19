//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CALayerDelegate-Protocol.h"
#import "MDCInkLayerDelegate-Protocol.h"

@class CAShapeLayer, GMSx_MDCInkLayer, GMSx_MDCLegacyInkLayer, NSString, UIColor;
@protocol MDCInkViewDelegate;

@interface GMSx_MDCInkView : UIView <CALayerDelegate, MDCInkLayerDelegate>
{
    _Bool _usesLegacyInkRipple;
    id <MDCInkViewDelegate> _animationDelegate;
    long long _inkStyle;
    CAShapeLayer *_maskLayer;
    CDUnknownBlockType _startInkRippleCompletionBlock;
    CDUnknownBlockType _endInkRippleCompletionBlock;
    GMSx_MDCInkLayer *_activeInkLayer;
}

+ (id)injectedInkViewForView:(id)arg1;
+ (Class)layerClass;
@property(retain, nonatomic) GMSx_MDCInkLayer *activeInkLayer; // @synthesize activeInkLayer=_activeInkLayer;
@property(copy, nonatomic) CDUnknownBlockType endInkRippleCompletionBlock; // @synthesize endInkRippleCompletionBlock=_endInkRippleCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType startInkRippleCompletionBlock; // @synthesize startInkRippleCompletionBlock=_startInkRippleCompletionBlock;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool usesLegacyInkRipple; // @synthesize usesLegacyInkRipple=_usesLegacyInkRipple;
@property(nonatomic) long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property(nonatomic) __weak id <MDCInkViewDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)inkLayerAnimationDidEnd:(id)arg1;
- (void)inkLayerAnimationDidStart:(id)arg1;
@property(readonly, nonatomic) UIColor *defaultInkColor;
- (void)cancelAllAnimationsAnimated:(_Bool)arg1;
- (void)startTouchEndedAnimationAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startTouchEndAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startTouchBeganAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startTouchBeganAnimationAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GMSx_MDCLegacyInkLayer *inkLayer;
@property(nonatomic) struct CGPoint customInkCenter;
@property(nonatomic) _Bool usesCustomInkCenter;
@property(nonatomic) double maxRippleRadius;
@property(retain, nonatomic) UIColor *inkColor;
- (void)layoutSubviews;
- (void)commonMDCInkViewInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
