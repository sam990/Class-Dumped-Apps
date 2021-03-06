//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoProxyListener-Protocol.h>

@class IGVideoProxy, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IGVideoUrlLoadingSession : NSObject <IGVideoProxyListener>
{
    NSMutableDictionary *_urlToSpecs;
    IGVideoProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
    _Bool _synchronousMode;
}

- (void).cxx_destruct;
- (void)videoProxyDidEndRequestForURL:(id)arg1 error:(id)arg2;
- (void)_cancelAllRequestsWithError:(id)arg1;
- (void)cancelLoading;
- (void)startLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithLoadingSpecs:(id)arg1 proxy:(id)arg2 queue:(id)arg3 synchronousMode:(_Bool)arg4;
- (id)initWithLoadingSpecs:(id)arg1 proxy:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

