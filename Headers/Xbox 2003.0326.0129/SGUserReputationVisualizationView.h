//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGPercentageArcView.h"

@class UIColor;

@interface SGUserReputationVisualizationView : SGPercentageArcView
{
    int _arcWidth;
    UIColor *_foregroundStrokeColor;
}

@property(nonatomic) int arcWidth; // @synthesize arcWidth=_arcWidth;
@property(retain, nonatomic) UIColor *foregroundStrokeColor; // @synthesize foregroundStrokeColor=_foregroundStrokeColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

