//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts38BarLineScatterCandleBubbleChartDataSet.h>

@class NSArray, UIColor;

@interface _TtC6Charts15BarChartDataSet : _TtC6Charts38BarLineScatterCandleBubbleChartDataSet
{
    // Error parsing type: , name: _stackSize
    // Error parsing type: , name: _entryCountStacks
    // Error parsing type: , name: stackLabels
    // Error parsing type: , name: barShadowColor
    // Error parsing type: , name: barBorderWidth
    // Error parsing type: , name: barBorderColor
    // Error parsing type: , name: highlightAlpha
}

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic) double highlightAlpha; // @synthesize highlightAlpha;
@property(nonatomic, retain) UIColor *barBorderColor; // @synthesize barBorderColor;
@property(nonatomic) double barBorderWidth; // @synthesize barBorderWidth;
@property(nonatomic, retain) UIColor *barShadowColor; // @synthesize barShadowColor;
@property(nonatomic, copy) NSArray *stackLabels;
@property(nonatomic, readonly) long long entryCountStacks;
@property(nonatomic, readonly) _Bool isStacked;
@property(nonatomic, readonly) long long stackSize;
- (id)initWithValues:(id)arg1 label:(id)arg2;
- (id)init;

@end
