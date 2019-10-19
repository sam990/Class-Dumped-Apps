//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentTransactionDetailsViewController.h"

@class NSString, WAPaymentUPIManager, WAUserJID, _TtC14MainAppLibrary23WAPaymentUPITransaction;

@interface WAPaymentUPITransactionDetailsViewController : WAPaymentTransactionDetailsViewController
{
    WAUserJID *_handleJID;
    NSString *_handleName;
    _Bool _loadingHandleName;
}

- (void).cxx_destruct;
- (void)processUPICollectRequestRejectRequest:(id)arg1;
- (void)openHandleInfo:(id)arg1;
- (void)processGetVPANameRequest:(id)arg1;
- (void)openUPIHandleDetails:(id)arg1;
- (void)transactionDetailsDidSelectToOpenParticipantDetails;
- (void)transactionDetailsDidSelectToOpenAccountDetails;
- (void)setUPILogoFooterViewIfNeeded;
- (void)viewDidLoad;
- (void)setTransaction:(id)arg1;
@property(readonly, nonatomic) WAPaymentUPIManager *paymentUPIManager;
@property(readonly, nonatomic) _TtC14MainAppLibrary23WAPaymentUPITransaction *upiTransaction;

@end
