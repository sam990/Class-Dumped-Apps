//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class NSObject, NSString, TNLRequestConfiguration, TNLRequestOperation, TNLResponse;
@protocol OS_dispatch_queue;

@protocol TNLRequestRetryPolicyProvider <NSObject>
- (_Bool)tnl_shouldRetryRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2;

@optional
- (NSString *)tnl_retryPolicyIdentifier;
- (NSObject<OS_dispatch_queue> *)tnl_callbackQueue;
- (void)tnl_requestOperation:(TNLRequestOperation *)arg1 didStartRetryFromResponse:(TNLResponse *)arg2;
- (void)tnl_requestOperation:(TNLRequestOperation *)arg1 willStartRetryFromResponse:(TNLResponse *)arg2 afterDelay:(double)arg3;
- (TNLRequestConfiguration *)tnl_configurationOfRetryForRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2 priorConfiguration:(TNLRequestConfiguration *)arg3;
- (double)tnl_delayBeforeRetryForRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2;
@end
