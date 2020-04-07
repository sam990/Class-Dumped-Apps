//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1AuthenticationForm.h>

@class NSString, T1SingleSignOnConnectHeader, TFNActivityIndicatorItem, TFNTwitterAccount, TFSTwitterAuthSingleSignOn, TFSTwitterOAuthRequestTokenResponse;

@interface T1SingleSignOnForm : T1AuthenticationForm
{
    _Bool _hitBottom;
    NSString *_oauthCallbackURLString;
    NSString *_sourceAppBundleID;
    T1SingleSignOnConnectHeader *_connectHeader;
    unsigned long long _state;
    TFSTwitterAuthSingleSignOn *_singleSignOn;
    TFNTwitterAccount *_account;
    TFSTwitterOAuthRequestTokenResponse *_requestToken;
    TFNActivityIndicatorItem *_activityIndicatorItem;
}

@property(readonly, nonatomic) TFNActivityIndicatorItem *activityIndicatorItem; // @synthesize activityIndicatorItem=_activityIndicatorItem;
@property(retain, nonatomic) TFSTwitterOAuthRequestTokenResponse *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFSTwitterAuthSingleSignOn *singleSignOn; // @synthesize singleSignOn=_singleSignOn;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) T1SingleSignOnConnectHeader *connectHeader; // @synthesize connectHeader=_connectHeader;
@property(readonly, copy, nonatomic) NSString *sourceAppBundleID; // @synthesize sourceAppBundleID=_sourceAppBundleID;
@property(readonly, copy, nonatomic) NSString *oauthCallbackURLString; // @synthesize oauthCallbackURLString=_oauthCallbackURLString;
@property(nonatomic) _Bool hitBottom; // @synthesize hitBottom=_hitBottom;
- (void).cxx_destruct;
- (id)sections;
- (id)attributedStyleDictionary;
- (id)activeTextItemForString:(id)arg1;
- (id)privacyText;
- (id)revokeAccessText;
- (id)appPrivacyText;
- (id)permissionsHelpText;
- (id)localPermissionsText;
- (id)backendPermissionsText;
- (id)permissionsText;
- (id)onboardingHeader;
- (id)termsAndConditionsURL;
- (id)privacyPolicyURL;
- (id)organizationName;
- (id)appName;
- (id)appImageURLString;
- (struct CGSize)appImageDimensions;
- (void)setState:(unsigned long long)arg1;
- (_Bool)isSubmittable;
- (id)initWithCredential:(id)arg1 oauthCallbackURLString:(id)arg2 sourceAppBundleID:(id)arg3;

@end
