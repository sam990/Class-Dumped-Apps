//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGRegistrationCoordinatorProtocol-Protocol.h>

@class IGNUXFlowCoordinator, IGRegistrationFlowContext, IGRegistrationStepProvider, NSString, UINavigationController;
@protocol IGRegistrationFlowCoordinatorDelegate;

@interface IGRegistrationFlowCoordinator : NSObject <IGRegistrationCoordinatorProtocol>
{
    IGRegistrationStepProvider *_stepProvider;
    IGNUXFlowCoordinator *_flowCoordinator;
    _Bool _isSwitchingUsers;
    id <IGRegistrationFlowCoordinatorDelegate> _delegate;
    IGRegistrationFlowContext *_context;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) IGRegistrationFlowContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <IGRegistrationFlowCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processNextStep;
- (void)stepController:(id)arg1 didRequestLoginWithUsername:(id)arg2 password:(id)arg3;
- (void)stepControllerDidGetBlockedByWeakPassword:(id)arg1;
- (void)stepController:(id)arg1 didTriggerMovingBackToVC:(id)arg2;
- (void)stepControllerDidAttemptUnderageSignUp:(id)arg1;
- (void)stepControllerDidGetBlockedByGDPR:(id)arg1;
- (void)stepController:(id)arg1 didCompleteRegistrationWithUserSession:(id)arg2;
- (void)stepControllerDidTriggerGoingBackToUsernameStep;
- (void)stepControllerDidGoBack:(id)arg1;
- (void)stepControllerDidSwitchToSignInFlow:(id)arg1;
- (void)stepControllerDidCompleteStep:(id)arg1;
- (void)startFlow;
- (id)initWithContext:(id)arg1 isSwitchingUsers:(_Bool)arg2 navigationController:(id)arg3 stepProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

