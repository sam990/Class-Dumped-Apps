//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityResponseHandler-Protocol.h"

@class NSString, SPTWatchConnectivityManager, SPTWatchConnectivityRequest;
@protocol SPTWatchConnectivityResponseHandler;

@interface SPTWatchConnectivityRequestTask : NSObject <SPTWatchConnectivityResponseHandler>
{
    SPTWatchConnectivityRequest *_request;
    id <SPTWatchConnectivityResponseHandler> _responseHandler;
    SPTWatchConnectivityManager *_connectivityManager;
    CDUnknownBlockType _errorHandler;
    unsigned long long _retries;
}

@property(nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, nonatomic) SPTWatchConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(readonly, nonatomic) id <SPTWatchConnectivityResponseHandler> responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) SPTWatchConnectivityRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)decorateAndForwardResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)performRequest;
- (void)start;
- (id)initWithRequest:(id)arg1 responseHandler:(id)arg2 connectivityManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
