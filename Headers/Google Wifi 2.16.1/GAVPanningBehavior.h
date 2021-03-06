//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVBehavior-Protocol.h"

@class NSArray, NSString;
@protocol GAVChartCore;

@interface GAVPanningBehavior : NSObject <GAVBehavior>
{
    struct CGPoint _initialPanPoint;
    double _lastTimestamp;
    double _chartAnimationDuration;
    NSString *_name;
    id <GAVChartCore> _chart;
}

@property(nonatomic) __weak id <GAVChartCore> chart; // @synthesize chart=_chart;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (double)moveDistanceFromScale:(id)arg1 viewportExtent:(id)arg2 translation:(double)arg3;
- (void)moveAxes:(id)arg1 withTranslation:(double)arg2;
@property(readonly, nonatomic) NSArray *axesToPan;
- (void)onPanWithNotification:(id)arg1;
- (void)detachFromChart:(id)arg1;
- (void)attachToChart:(id)arg1;
- (id)initWithName:(id)arg1;

@end

