//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectMutationRequestProcessorCallbackInteractionSafeguardDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMutationRequestStateStoreListener-Protocol.h>

@class IGDirectMutationRequestCoordinationCache, IGDirectMutationRequestStateStore, NSString;
@protocol IGUserFeatureSets, OS_dispatch_queue;

@interface IGDirectMutationRequestCoordinator : NSObject <IGDirectMutationRequestProcessorCallbackInteractionSafeguardDelegate, IGDirectMutationRequestStateStoreListener>
{
    IGDirectMutationRequestCoordinationCache *_processorCache;
    IGDirectMutationRequestStateStore *_requestStateStore;
    CDUnknownBlockType _timeProvider;
    CDUnknownBlockType _autoRetryConfigProvider;
    NSObject<OS_dispatch_queue> *_queue;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
- (id)_processingToolboxForMutationId:(id)arg1;
- (void)_performLoggingIfNeccesaryForUpdatedExecutionState:(id)arg1 mutationId:(id)arg2;
- (void)_mutationId:(id)arg1 didFailWithError:(id)arg2;
- (void)_mutationWithIdDidSucceed:(id)arg1;
- (void)_informProcessorForMutationRequest:(id)arg1 ofUpdatedExecutionState:(id)arg2;
- (void)_stopListeningForExecutionResultIfNecessaryForMutationId:(id)arg1 ofUpdatedExecutionState:(id)arg2;
- (void)mutationRequestStoreDidDropMutationWithId:(id)arg1 withReason:(unsigned long long)arg2;
- (void)mutationRequestStoreDidUpdateMutation:(id)arg1 fromExecutionState:(id)arg2 toExecutionState:(id)arg3;
- (void)mutationRequestStoreDidEnqueueMutation:(id)arg1 withInitialExecutionState:(id)arg2;
- (void)updateAdditionalData:(id)arg1 forMutationId:(id)arg2;
- (void)handleExecutionResult:(id)arg1 forMutationId:(id)arg2;
- (void)executeMutationRequestWithId:(id)arg1;
- (id)initWithRequestProcessorOrchestrationCache:(id)arg1 requestStateStore:(id)arg2 autoRetryConfigProvider:(CDUnknownBlockType)arg3 timeProvider:(CDUnknownBlockType)arg4 queue:(id)arg5 featureSets:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

