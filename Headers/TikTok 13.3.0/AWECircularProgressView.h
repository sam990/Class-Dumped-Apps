//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _AWECircularProgressViewKVOObject;

@interface AWECircularProgressView : UIView
{
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_progressBackgroundColor;
    double _lineWidth;
    double _backgroundWidth;
    double _progressRadius;
    double _backgroundRadius;
    _AWECircularProgressViewKVOObject *_kvoObject;
}

@property(retain, nonatomic) _AWECircularProgressViewKVOObject *kvoObject; // @synthesize kvoObject=_kvoObject;
@property(nonatomic) double backgroundRadius; // @synthesize backgroundRadius=_backgroundRadius;
@property(nonatomic) double progressRadius; // @synthesize progressRadius=_progressRadius;
@property(nonatomic) double backgroundWidth; // @synthesize backgroundWidth=_backgroundWidth;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)observableKeypaths;
- (void)setupObservers;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
