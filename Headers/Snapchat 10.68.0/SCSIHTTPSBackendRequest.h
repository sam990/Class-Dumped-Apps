//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSIBackendRequest-Protocol.h"

@class NSArray, NSSet, NSString;
@protocol SCSIHTTPSBackendRequestDelegate;

@interface SCSIHTTPSBackendRequest : NSObject <SCSIBackendRequest>
{
    id <SCSIHTTPSBackendRequestDelegate> _delegate;
    _Bool _isRequestCanceled;
    NSString *_requestKey;
    NSSet *_requestContexts;
    NSArray *_protoRequests;
}

@property _Bool isRequestCanceled; // @synthesize isRequestCanceled=_isRequestCanceled;
@property(readonly, nonatomic) NSArray *protoRequests; // @synthesize protoRequests=_protoRequests;
@property(readonly, nonatomic) NSSet *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(readonly, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (id)initWithDelegate:(id)arg1 protoRequests:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
