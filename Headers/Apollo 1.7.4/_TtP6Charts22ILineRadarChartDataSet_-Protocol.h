//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtP6Charts35ILineScatterCandleRadarChartDataSet_-Protocol.h>

@class ChartFill, UIColor;

@protocol _TtP6Charts22ILineRadarChartDataSet_ <_TtP6Charts35ILineScatterCandleRadarChartDataSet_>
@property(nonatomic, readonly) _Bool isDrawFilledEnabled;
@property(nonatomic) _Bool drawFilledEnabled;
@property(nonatomic) double lineWidth;
@property(nonatomic) double fillAlpha;
@property(nonatomic, retain) ChartFill *fill;
@property(nonatomic, retain) UIColor *fillColor;
@end
