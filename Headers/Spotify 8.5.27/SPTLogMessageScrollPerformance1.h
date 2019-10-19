//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageScrollPerformance1 : SPTLogMessage
{
    NSString *_pageIdValue;
    long long _durationValue;
    double _smallFrameDropsValue;
    double _largeFrameDropsValue;
}

+ (id)messageWithPageId:(id)arg1 duration:(long long)arg2 smallFrameDrops:(double)arg3 largeFrameDrops:(double)arg4;
@property(nonatomic) double largeFrameDropsValue; // @synthesize largeFrameDropsValue=_largeFrameDropsValue;
@property(nonatomic) double smallFrameDropsValue; // @synthesize smallFrameDropsValue=_smallFrameDropsValue;
@property(nonatomic) long long durationValue; // @synthesize durationValue=_durationValue;
@property(copy, nonatomic) NSString *pageIdValue; // @synthesize pageIdValue=_pageIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
