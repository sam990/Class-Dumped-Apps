//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRPCProtoResponseHandler-Protocol.h"

@class GPBMessage, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GRPCUnaryResponseHandler : NSObject <GRPCProtoResponseHandler>
{
    CDUnknownBlockType _responseHandler;
    NSObject<OS_dispatch_queue> *_responseDispatchQueue;
    GPBMessage *_message;
    NSDictionary *_responseHeaders;
    NSDictionary *_responseTrailers;
}

@property(readonly) NSDictionary *responseTrailers; // @synthesize responseTrailers=_responseTrailers;
@property(readonly) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
- (void).cxx_destruct;
- (void)didWriteMessage;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)didReceiveProtoMessage:(id)arg1;
- (void)didReceiveInitialMetadata:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
- (id)initWithResponseHandler:(CDUnknownBlockType)arg1 responseDispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

