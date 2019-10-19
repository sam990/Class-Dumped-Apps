//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLMetricsCollectorDataSet : NSObject
{
    long long _firstDataPoint;
    long long _maxDataPoint;
    long long _lastDataPoint;
    long long _dataPointsCount;
    long long _dataDiffSum;
}

@property long long dataDiffSum; // @synthesize dataDiffSum=_dataDiffSum;
@property long long dataPointsCount; // @synthesize dataPointsCount=_dataPointsCount;
@property long long lastDataPoint; // @synthesize lastDataPoint=_lastDataPoint;
@property long long maxDataPoint; // @synthesize maxDataPoint=_maxDataPoint;
@property long long firstDataPoint; // @synthesize firstDataPoint=_firstDataPoint;
- (long long)getSubtractionWithMinuend:(long long)arg1 subtrahend:(long long)arg2;
- (void)addDataPoint:(unsigned long long)arg1;
- (long long)getDiffAverage;
- (long long)getLastDiff;
- (long long)getMaxDiff;
- (id)init;

@end
