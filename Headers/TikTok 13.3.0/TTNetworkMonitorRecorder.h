//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TTNetworkMonitorRecorderConfigurationProtocol;

@interface TTNetworkMonitorRecorder : NSObject
{
    CDUnknownBlockType _trackParamsblock;
    NSMutableDictionary *_networkTransactionsForRequestIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<TTNetworkMonitorRecorderConfigurationProtocol> *_configration;
}

+ (id)defaultRecorder;
@property(retain, nonatomic) NSObject<TTNetworkMonitorRecorderConfigurationProtocol> *configration; // @synthesize configration=_configration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *networkTransactionsForRequestIdentifiers; // @synthesize networkTransactionsForRequestIdentifiers=_networkTransactionsForRequestIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType trackParamsblock; // @synthesize trackParamsblock=_trackParamsblock;
- (void).cxx_destruct;
- (id)pickTrackParams;
- (void)applyTraceCodeToTrack:(id)arg1 sourceDict:(id)arg2;
- (void)recordIfNeed:(id)arg1 isFail:(_Bool)arg2;
- (void)recordLoadingFailedWithRequestID:(id)arg1 error:(id)arg2 response:(id)arg3 responseBody:(id)arg4 finishedDate:(id)arg5;
- (void)recordLoadingFinishedWithRequestID:(id)arg1 responseBody:(id)arg2 response:(id)arg3 finishedDate:(id)arg4;
- (void)recordRequestWillBeSentWithRequestID:(id)arg1 request:(id)arg2 startDate:(id)arg3 hasTriedTimes:(long long)arg4;
- (void)clearRecordedActivity;
- (id)networkTransactions;
- (void)setConfigurationClass:(Class)arg1;
- (id)init;
- (void)dealloc;

@end
