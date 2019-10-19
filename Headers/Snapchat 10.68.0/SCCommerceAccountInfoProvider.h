//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceAccountInfoFetching-Protocol.h"
#import "SCCommerceAccountInfoMutating-Protocol.h"

@class NSArray, NSDate, SCCommerceContactDetailsDataModel, SCQueuePerformer;
@protocol SCCommerceNetworkRequestHandling;

@interface SCCommerceAccountInfoProvider : NSObject <SCCommerceAccountInfoFetching, SCCommerceAccountInfoMutating>
{
    id <SCCommerceNetworkRequestHandling> _requestHandler;
    SCQueuePerformer *_queuePerformer;
    NSDate *_lastUpdate;
    SCCommerceContactDetailsDataModel *_contactDetails;
    NSArray *_shippingAddresses;
}

- (void).cxx_destruct;
- (void)deleteShippingAddress:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateShippingAddress:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addShippingAddress:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContactDetails:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getAccountInfo:(CDUnknownBlockType)arg1;
- (void)fetchShippingAddressesCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchContactDetailsCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldRefetch;
- (id)initWithRequestHandler:(id)arg1;

@end
