//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRPTService-Protocol.h"

@class GAZCredentialStore, GAZKeychain, GAZSSOServiceExtension, NSString, SSOService;

@interface CRPTEnrollment1Service : NSObject <CRPTService>
{
    long long _registerOnceToken;
    GAZKeychain *_keychain;
    SSOService *_identityService;
    GAZSSOServiceExtension *_serviceExtension;
    GAZCredentialStore *_credentialStore;
}

@property(retain, nonatomic) GAZCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
@property(readonly, nonatomic) GAZSSOServiceExtension *serviceExtension; // @synthesize serviceExtension=_serviceExtension;
@property(readonly, nonatomic) SSOService *identityService; // @synthesize identityService=_identityService;
- (void).cxx_destruct;
- (id)enrollment1Service;
- (void)successHintForSignCryptedMessage:(id)arg1;
- (void)clientErrorHintForSignCryptedMessage:(id)arg1;
- (id)verifyDecryptForEncryption:(id)arg1 signingKeyName:(id)arg2 encryptionKeyName:(id)arg3;
- (id)signCryptedMessageForUserID:(id)arg1 signingKeyName:(id)arg2 encryptionKeyName:(id)arg3 encryptionRequest:(id)arg4;
- (id)metadataForFeature:(int)arg1 userID:(id)arg2;
- (void)setFeature:(int)arg1 metadata:(id)arg2 userID:(id)arg3;
- (id)symmetricKeyForKeyName:(id)arg1 userID:(id)arg2;
- (void)registerKeyName:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
