//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Charts/IChartFillFormatter-Protocol.h>

@interface ChartDefaultFillFormatter : NSObject <IChartFillFormatter>
{
    // Error parsing type: , name: block
}

+ (id)withBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (double)getFillLinePositionWithDataSet:(id)arg1 dataProvider:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType block;

@end
