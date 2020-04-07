//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol _TtP6Charts13IChartDataSet_;

@interface _TtC6Charts9ChartData : NSObject
{
    // Error parsing type: , name: _yMax
    // Error parsing type: , name: _yMin
    // Error parsing type: , name: _xMax
    // Error parsing type: , name: _xMin
    // Error parsing type: , name: _leftAxisMax
    // Error parsing type: , name: _leftAxisMin
    // Error parsing type: , name: _rightAxisMax
    // Error parsing type: , name: _rightAxisMin
    // Error parsing type: , name: _dataSets
    // Error parsing type: , name: accessibilityEntryLabelPrefix
    // Error parsing type: , name: accessibilityEntryLabelSuffix
    // Error parsing type: , name: accessibilityEntryLabelSuffixIsCount
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accessibilityEntryLabelSuffixIsCount; // @synthesize accessibilityEntryLabelSuffixIsCount;
@property(nonatomic, copy) NSString *accessibilityEntryLabelSuffix;
@property(nonatomic, copy) NSString *accessibilityEntryLabelPrefix;
@property(nonatomic, readonly) id <_TtP6Charts13IChartDataSet_> maxEntryCountSet;
@property(nonatomic, readonly) long long entryCount;
- (_Bool)containsWithDataSet:(id)arg1;
- (void)clearValues;
@property(nonatomic, readonly) _Bool isHighlightEnabled;
@property(nonatomic) _Bool highlightEnabled;
- (void)setDrawValues:(_Bool)arg1;
- (void)setValueFont:(id)arg1;
- (void)setValueTextColor:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (id)getColors;
- (id)getFirstRightWithDataSets:(id)arg1;
- (id)getFirstLeftWithDataSets:(id)arg1;
- (long long)indexOfDataSet:(id)arg1;
- (id)getDataSetForEntry:(id)arg1;
- (_Bool)removeEntryWithXValue:(double)arg1 dataSetIndex:(long long)arg2;
- (_Bool)removeEntry:(id)arg1 dataSetIndex:(long long)arg2;
- (void)addEntry:(id)arg1 dataSetIndex:(long long)arg2;
- (_Bool)removeDataSetByIndex:(long long)arg1;
- (_Bool)removeDataSet:(id)arg1;
- (void)addDataSet:(id)arg1;
- (id)getDataSetByIndex:(long long)arg1;
- (id)getDataSetByLabel:(id)arg1 ignorecase:(_Bool)arg2;
- (id)entryForHighlight:(id)arg1;
@property(nonatomic, copy) NSArray *dataSets;
@property(nonatomic, readonly) double xMax;
@property(nonatomic, readonly) double xMin;
- (double)getYMaxWithAxis:(long long)arg1;
@property(nonatomic, readonly) double yMax;
- (double)getYMinWithAxis:(long long)arg1;
@property(nonatomic, readonly) double yMin;
@property(nonatomic, readonly) long long dataSetCount;
- (void)calcMinMaxWithDataSet:(id)arg1;
- (void)calcMinMaxWithEntry:(id)arg1 axis:(long long)arg2;
- (void)calcMinMax;
- (void)calcMinMaxYFromX:(double)arg1 toX:(double)arg2;
- (void)notifyDataChanged;
- (id)initWithDataSet:(id)arg1;
- (id)initWithDataSets:(id)arg1;
- (id)init;

@end
