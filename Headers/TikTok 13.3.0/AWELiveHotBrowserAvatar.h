//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CAGradientLayer, CAShapeLayer;

@interface AWELiveHotBrowserAvatar : UIImageView
{
    CAShapeLayer *_markClipLayer;
    CAGradientLayer *_markColorLayer;
}

@property(retain, nonatomic) CAGradientLayer *markColorLayer; // @synthesize markColorLayer=_markColorLayer;
@property(retain, nonatomic) CAShapeLayer *markClipLayer; // @synthesize markClipLayer=_markClipLayer;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
