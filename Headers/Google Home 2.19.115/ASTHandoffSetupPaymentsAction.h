//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTHandoffAction-Protocol.h"
#import "ASTPaymentSetupTaskDelegate-Protocol.h"

@class ASTPaymentOnboardingSetupController, NSString;
@protocol ASTHandoffActionDataSource, ASTHandoffActionDelegate;

@interface ASTHandoffSetupPaymentsAction : NSObject <ASTPaymentSetupTaskDelegate, ASTHandoffAction>
{
    ASTPaymentOnboardingSetupController *_controller;
    CDUnknownBlockType _completion;
    id <ASTHandoffActionDataSource> _dataSource;
    id <ASTHandoffActionDataSource> dataSource;
    id <ASTHandoffActionDelegate> delegate;
    long long type;
}

@property(readonly, nonatomic) long long type; // @synthesize type;
@property(nonatomic) __weak id <ASTHandoffActionDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <ASTHandoffActionDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (id)resultRequestWithDataSource:(id)arg1;
- (void)task:(id)arg1 didCompleteWithResult:(_Bool)arg2 data:(id)arg3;
- (void)executeWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

