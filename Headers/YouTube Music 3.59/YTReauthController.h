//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "YTInlineSignInViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTGaiaIdentityService, YTIdentityTransaction, YTInlineSignInViewController, YTMultiAccountData, YTPaddedViewController;
@protocol YTInlineSignInLayoutConfig, YTResponder;

@interface YTReauthController : NSObject <UINavigationControllerDelegate, YTInlineSignInViewControllerDelegate, YTResponder>
{
    YTGaiaIdentityService *_gaiaIdentityService;
    id <YTInlineSignInLayoutConfig> _inlineSignInLayoutConfig;
    YTPaddedViewController *_wrappedVC;
    CDUnknownBlockType _reauthSuccessBlock;
    CDUnknownBlockType _reauthCancelBlock;
    CDUnknownBlockType _reauthErrorBlock;
    NSMutableArray *_googleAccounts;
    YTInlineSignInViewController *_pickerViewController;
    YTIdentityTransaction *_transaction;
    YTMultiAccountData *_accountsData;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)showReauthPageForGoogleAccount:(id)arg1 accountItemRenderer:(id)arg2;
- (void)presentViewController:(id)arg1;
- (void)showInlineAccountSwitcher;
- (void)setFutureIdentityWithGoogleAccount:(id)arg1 accountItemRenderer:(id)arg2;
- (id)navigationStyle;
- (void)dismissViewControllerAnimated:(_Bool)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void)reauthSucceedsWithGoogleAccount:(id)arg1 accountItemRenderer:(id)arg2;
- (void)didTapCancel;
- (id)activeGoogleAccount;
- (void)didTapShowAccountManager;
- (void)didTapShowAddAccount;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)launchReauthWithAccountItemRenderer:(id)arg1 reauthIdentity:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)launchReauthWithTransaction:(id)arg1 showSwitcher:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

