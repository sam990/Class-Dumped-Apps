//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDMonitorRecord.h"

@class NSArray;

@interface HMDMemoryMonitorRecord : HMDMonitorRecord
{
    double _totalMemory;
    double _availableMemory;
    double _usedMemory;
    double _appUsedMemory;
    double _pageUsedMemory;
    unsigned long long _memoryWarning;
    NSArray *_dumpInfo;
}

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)arg1;
@property(retain, nonatomic) NSArray *dumpInfo; // @synthesize dumpInfo=_dumpInfo;
@property(nonatomic) unsigned long long memoryWarning; // @synthesize memoryWarning=_memoryWarning;
@property(nonatomic) double pageUsedMemory; // @synthesize pageUsedMemory=_pageUsedMemory;
@property(nonatomic) double appUsedMemory; // @synthesize appUsedMemory=_appUsedMemory;
@property(nonatomic) double usedMemory; // @synthesize usedMemory=_usedMemory;
@property(nonatomic) double availableMemory; // @synthesize availableMemory=_availableMemory;
@property(nonatomic) double totalMemory; // @synthesize totalMemory=_totalMemory;
- (void).cxx_destruct;
- (id)reportDictionary;
- (double)value;

@end

