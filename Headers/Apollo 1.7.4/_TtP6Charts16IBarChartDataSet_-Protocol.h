//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtP6Charts39IBarLineScatterCandleBubbleChartDataSet_-Protocol.h>

@class NSArray, UIColor;

@protocol _TtP6Charts16IBarChartDataSet_ <_TtP6Charts39IBarLineScatterCandleBubbleChartDataSet_>
@property(nonatomic, copy) NSArray *stackLabels;
@property(nonatomic) double highlightAlpha;
@property(nonatomic, retain) UIColor *barBorderColor;
@property(nonatomic) double barBorderWidth;
@property(nonatomic, retain) UIColor *barShadowColor;
@property(nonatomic, readonly) long long stackSize;
@property(nonatomic, readonly) _Bool isStacked;
@end
