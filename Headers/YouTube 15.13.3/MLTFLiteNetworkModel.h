//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLTFLiteNetworkModel-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, HAMNetworkStats, MLSingleTFLiteNetworkModel, MLTFLiteModelService, NSString, YTITFLiteBandwidthModelConfig, YTReachabilityController;
@protocol OS_dispatch_queue;

@interface MLTFLiteNetworkModel : NSObject <YTReachabilityObserver, YTSystemNotificationsObserver, MLTFLiteNetworkModel>
{
    MLTFLiteModelService *_modelService;
    YTReachabilityController *_reachability;
    NSObject<OS_dispatch_queue> *_queue;
    int _connectionType;
    MLSingleTFLiteNetworkModel *_currentModel;
    YTITFLiteBandwidthModelConfig *_currentConfig;
    int _loadOperationCounter;
    _Bool _networkStatsErrorLoggedForCurrentModel;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logError:(id)arg1;
- (void)persistSamplesForModel:(id)arg1 config:(id)arg2;
- (void)loadPersistedSamplesForModel:(id)arg1 config:(id)arg2;
- (_Bool)onModelLoadCompleteWithData:(id)arg1 error:(id)arg2 loadOperationCounter:(int)arg3 config:(id)arg4;
- (void)loadModelWithConfig:(id)arg1;
- (void)clearCurrentModel;
- (void)reachabilityDidChange;
- (void)appDidEnterBackground:(id)arg1;
- (id)networkRequestObserver;
- (void)setConfig:(id)arg1;
@property(readonly, nonatomic) HAMNetworkStats *networkStats;
- (void)setQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

