//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface OGLPanGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _trackingPan;
    unsigned long long _direction;
    double _absDelta;
    struct CGPoint _gestureStartPoint;
}

@property(nonatomic) double absDelta; // @synthesize absDelta=_absDelta;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) struct CGPoint gestureStartPoint; // @synthesize gestureStartPoint=_gestureStartPoint;
@property(nonatomic) _Bool trackingPan; // @synthesize trackingPan=_trackingPan;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

