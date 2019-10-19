//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestTask.h"

@class NSArray, NSMutableArray;
@protocol SCGraphene, SCNetworkInterceptor;

@interface SCRequestSuccessFailureTask : SCRequestTask
{
    NSMutableArray *_successCallbackQueues;
    NSMutableArray *_failureCallbackQueues;
    NSMutableArray *_successCallbacks;
    NSMutableArray *_failureCallbacks;
    NSArray<SCNetworkInterceptor> *_networkInterceptors;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)_addFailureQueue:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_addSuccessQueue:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)completeTask;
- (void)updateTaskWithTask:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3 networkInterceptors:(id)arg4 graphene:(id)arg5 successQueue:(id)arg6 failureQueue:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;

@end
