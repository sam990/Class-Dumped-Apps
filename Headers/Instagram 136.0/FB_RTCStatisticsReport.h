//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FB_RTCStatisticsReport : NSObject
{
    double _timestamp_us;
    NSDictionary *_statistics;
}

@property(readonly, nonatomic) NSDictionary *statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) double timestamp_us; // @synthesize timestamp_us=_timestamp_us;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReport:(const struct RTCStatsReport *)arg1;

@end

