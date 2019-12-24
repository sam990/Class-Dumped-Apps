//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class JETHistoricalUsageWindow, JETInsightsDataCache, NSArray;

@interface JETUsageBarGraphContentViewObject : GOOBaseContentViewObject
{
    _Bool _isDownload;
    JETInsightsDataCache *_cache;
    JETHistoricalUsageWindow *_usageWindow;
    NSArray *_dataPoints;
    NSArray *_usageDates;
}

@property(nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
@property(retain, nonatomic) NSArray *usageDates; // @synthesize usageDates=_usageDates;
@property(retain, nonatomic) NSArray *dataPoints; // @synthesize dataPoints=_dataPoints;
@property(retain, nonatomic) JETHistoricalUsageWindow *usageWindow; // @synthesize usageWindow=_usageWindow;
@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithUsageWindow:(id)arg1 cache:(id)arg2 usageDates:(id)arg3 isDownload:(_Bool)arg4 dataPoints:(id)arg5;
- (id)init;

@end
