//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoEffectRangeView.h"

@class UIColor;
@protocol AWEVideoEffectScalableRangeViewDelegate;

@interface AWEVideoEffectScalableRangeView : AWEVideoEffectRangeView
{
    id <AWEVideoEffectScalableRangeViewDelegate> _delegate;
    UIColor *_effectColor;
    double _leftBoundary;
    double _rightBoundary;
    double _minLength;
    unsigned long long _touchPosition;
    struct CGRect _originalFrame;
}

@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) unsigned long long touchPosition; // @synthesize touchPosition=_touchPosition;
@property(nonatomic) double minLength; // @synthesize minLength=_minLength;
@property(nonatomic) double rightBoundary; // @synthesize rightBoundary=_rightBoundary;
@property(nonatomic) double leftBoundary; // @synthesize leftBoundary=_leftBoundary;
@property(retain, nonatomic) UIColor *effectColor; // @synthesize effectColor=_effectColor;
@property(nonatomic) __weak id <AWEVideoEffectScalableRangeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playVibrate;
- (void)handlePan:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setUpGesture;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
