//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/JBChartViewDataSource-Protocol.h>

@class JBLineChartView, UIView;

@protocol JBLineChartViewDataSource <JBChartViewDataSource>
- (unsigned long long)lineChartView:(JBLineChartView *)arg1 numberOfVerticalValuesAtLineIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfLinesInLineChartView:(JBLineChartView *)arg1;

@optional
- (_Bool)lineChartView:(JBLineChartView *)arg1 shouldHideDotViewOnSelectionAtHorizontalIndex:(unsigned long long)arg2 atLineIndex:(unsigned long long)arg3;
- (UIView *)lineChartView:(JBLineChartView *)arg1 dotViewAtHorizontalIndex:(unsigned long long)arg2 atLineIndex:(unsigned long long)arg3;
- (double)lineChartView:(JBLineChartView *)arg1 dimmedSelectionDotOpacityAtLineIndex:(unsigned long long)arg2;
- (double)lineChartView:(JBLineChartView *)arg1 dimmedSelectionOpacityAtLineIndex:(unsigned long long)arg2;
- (_Bool)lineChartView:(JBLineChartView *)arg1 smoothLineAtLineIndex:(unsigned long long)arg2;
- (_Bool)lineChartView:(JBLineChartView *)arg1 showsDotsForLineAtLineIndex:(unsigned long long)arg2;
@end

