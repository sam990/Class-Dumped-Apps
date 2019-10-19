//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActivityWaitTimeoutDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString;
@protocol YTDataServices, YTResponder, YTStoreKitPurchaseControllerDelegate;

@interface YTStoreKitPurchaseController : NSObject <YTResponder, YTActivityWaitTimeoutDelegate>
{
    id <YTDataServices> _dataServices;
    NSString *_forcedOfferParams;
    NSMutableArray *_pendingProductRequests;
    _Bool _hasTimedOut;
    _Bool _shouldDisplayToasts;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTStoreKitPurchaseControllerDelegate> _delegate;
}

@property(nonatomic) _Bool shouldDisplayToasts; // @synthesize shouldDisplayToasts=_shouldDisplayToasts;
@property(nonatomic) _Bool hasTimedOut; // @synthesize hasTimedOut=_hasTimedOut;
@property(nonatomic) __weak id <YTStoreKitPurchaseControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)appStoreReceiptData;
- (void)setForcedOfferParams:(id)arg1;
- (id)startPurchaseWithIAPEndpoint:(id)arg1 clickTrackingParams:(id)arg2 transactionType:(unsigned long long)arg3 firstResponder:(id)arg4;
- (void)notifyDelegateAboutError:(id)arg1;
- (void)displayToastWithMessage:(id)arg1;
- (void)startPurchaseFlowWithTransaction:(id)arg1;
- (void)displayStoreUIForTransaction:(id)arg1 products:(id)arg2;
- (void)requestProductsWithTransaction:(id)arg1;
- (void)handleMissingProductsForRequest:(id)arg1 transaction:(id)arg2;
- (void)handleFailedProductRequest:(id)arg1 transaction:(id)arg2;
- (_Bool)isValidEndpont:(id)arg1 error:(id *)arg2;
- (void)cleanup;
- (void)hotConfigDidChange:(id)arg1;
- (void)didTimeout;
- (void)fetchProductsForProductIds:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)startPurchaseWithIAPEndpoint:(id)arg1 clickTrackingParams:(id)arg2 transactionType:(unsigned long long)arg3 product:(id)arg4 observer:(id)arg5 firstResponder:(id)arg6 iapHandlerBlock:(CDUnknownBlockType)arg7;
- (id)startPurchaseWithCommand:(id)arg1 transactionType:(unsigned long long)arg2 product:(id)arg3 observer:(id)arg4 firstResponder:(id)arg5 iapHandlerBlock:(CDUnknownBlockType)arg6;
- (id)startPurchaseWithCommand:(id)arg1 firstResponder:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
