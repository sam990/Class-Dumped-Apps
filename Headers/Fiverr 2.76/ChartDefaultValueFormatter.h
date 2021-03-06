//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Charts/IChartValueFormatter-Protocol.h>

@class NSNumberFormatter;

@interface ChartDefaultValueFormatter : NSObject <IChartValueFormatter>
{
    // Error parsing type: , name: block
    // Error parsing type: , name: hasAutoDecimals
    // Error parsing type: , name: _formatter
    // Error parsing type: , name: _decimals
}

+ (id)withBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)stringForValue:(double)arg1 entry:(id)arg2 dataSetIndex:(long long)arg3 viewPortHandler:(id)arg4;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDecimals:(long long)arg1;
- (id)initWithFormatter:(id)arg1;
- (id)init;
@property(nonatomic, retain) NSNumberFormatter *formatter;
@property(nonatomic) _Bool hasAutoDecimals; // @synthesize hasAutoDecimals;
@property(nonatomic, copy) CDUnknownBlockType block;

@end

