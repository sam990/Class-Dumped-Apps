//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _WAGrabHandleLayer;

@interface WAGrabHandleView : UIView
{
    double _radius;
}

+ (Class)layerClass;
+ (double)preferredHeight;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)bezierPathForCurrentState;
- (double)angleForState:(double)arg1;
@property(nonatomic) double state;
@property(retain, nonatomic) UIColor *fillColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _WAGrabHandleLayer *layer; // @dynamic layer;

@end

