//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRMonitoring_Metric, GTLRMonitoring_MonitoredResource, NSArray, NSString;

@interface GTLRMonitoring_TimeSeries : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRMonitoring_Metric *metric; // @dynamic metric;
@property(copy, nonatomic) NSString *metricKind; // @dynamic metricKind;
@property(retain, nonatomic) NSArray *points; // @dynamic points;
@property(retain, nonatomic) GTLRMonitoring_MonitoredResource *resource; // @dynamic resource;
@property(copy, nonatomic) NSString *valueType; // @dynamic valueType;

@end
