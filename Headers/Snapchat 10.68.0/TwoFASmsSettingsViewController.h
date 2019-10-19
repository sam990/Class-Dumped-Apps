//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TwoFASettingCodeVerificationViewController.h"

#import "SCMobileSettingsDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, SCUserSession;

@interface TwoFASmsSettingsViewController : TwoFASettingCodeVerificationViewController <SCMobileSettingsDelegate, TTTAttributedLabelDelegate, SCPageNameLogging>
{
    _Bool _skipRecoveryCode;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool skipRecoveryCode; // @synthesize skipRecoveryCode=_skipRecoveryCode;
- (void).cxx_destruct;
- (void)presentRecoveryCodeViewWithRecoveryCode:(id)arg1;
- (void)resendPressed:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)verifySucceed:(id)arg1 recoveryCode:(id)arg2;
- (void)verifyPressed:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)leftButtonPressed:(id)arg1;
- (void)verifyMobileWasCancelled;
- (void)verifyMobileDidSucceedWithTwoFaRecoveryCode:(id)arg1;
- (void)verifyMobileDidSucceed;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)loadView;
- (id)initWithPhoneNumber:(id)arg1 userSession:(id)arg2;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
