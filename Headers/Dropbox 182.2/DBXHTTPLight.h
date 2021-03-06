//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLRequest;

@interface DBXHTTPLight : NSObject <NSURLSessionDelegate>
{
    NSURLRequest *_request;
    CDUnknownBlockType _completion;
    unsigned long long _retryCount;
}

+ (id)requestWithMethod:(id)arg1 url:(id)arg2;
- (void).cxx_destruct;
- (id)dbx_sharedSession;
- (unsigned long long)dbx_msBackoffForRetryCount:(unsigned long long)arg1;
- (void)dbx_handleData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)dbx_performRequest;
- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

