//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s8Payments18PaymentBaseHandlerCN.h"

@protocol WAPaymentRegistrationHandlerDelegate;

@interface _TtC14MainAppLibrary28PaymentESRegistrationHandler : _$s8Payments18PaymentBaseHandlerCN
{
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: currentHandler
    // Error parsing type: , name: delegate
    // Error parsing type: , name: pinManager
    // Error parsing type: , name: verificationNeeded
    // Error parsing type: , name: transactionContext
    // Error parsing type: , name: eventId
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentManager:(id)arg2 transactionContext:(long long)arg3 verificationNeeded:(_Bool)arg4 rootHandlerDelegate:(id)arg5;
- (id)initWithNavigationHandler:(id)arg1 paymentManager:(id)arg2 errorHandlerRegistry:(id)arg3 logPrefix:(id)arg4 eventId:(id)arg5 transactionContext:(long long)arg6 verificationNeeded:(_Bool)arg7 isUserInitiated:(_Bool)arg8;
@property(nonatomic) __weak id <WAPaymentRegistrationHandlerDelegate> delegate; // @synthesize delegate;

@end

