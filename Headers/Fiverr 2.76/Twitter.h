//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FABKit-Protocol.h"
#import "TWTRUserSessionVerifierDelegate-Protocol.h"

@class NSDictionary, NSString, TWTRAuthConfig, TWTRImageLoader, TWTRScribeService, TWTRScribeSink, TWTRSessionStore, TWTRUserSessionVerifier, TWTRWebAuthenticationFlow;

@interface Twitter : NSObject <FABKit, TWTRUserSessionVerifierDelegate>
{
    _Bool _initialized;
    TWTRSessionStore *_sessionStore;
    TWTRAuthConfig *_authConfig;
    TWTRWebAuthenticationFlow *_webAuthenticationFlow;
    NSDictionary *_kitInfo;
    TWTRScribeSink *_scribeSink;
    TWTRScribeService *_scribeService;
    TWTRUserSessionVerifier *_userSessionVerifier;
    TWTRImageLoader *_imageLoader;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)resetSharedInstance;
+ (id)sharedInstance;
+ (void)initializeIfNeeded;
+ (id)bundleIdentifier;
+ (id)kitDisplayVersion;
@property(readonly, nonatomic) TWTRImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(readonly, nonatomic) TWTRUserSessionVerifier *userSessionVerifier; // @synthesize userSessionVerifier=_userSessionVerifier;
@property(readonly, nonatomic) TWTRScribeService *scribeService; // @synthesize scribeService=_scribeService;
@property(retain, nonatomic) TWTRScribeSink *scribeSink; // @synthesize scribeSink=_scribeSink;
@property(retain, nonatomic) NSDictionary *kitInfo; // @synthesize kitInfo=_kitInfo;
@property(retain, nonatomic) TWTRWebAuthenticationFlow *webAuthenticationFlow; // @synthesize webAuthenticationFlow=_webAuthenticationFlow;
@property(retain, nonatomic) TWTRAuthConfig *authConfig; // @synthesize authConfig=_authConfig;
- (void).cxx_destruct;
- (void)performWithScribeSink:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)removeScribeDocumentFromDocumentsDirectory;
- (id)scribeStoreURL;
- (id)applicationSupportDirectory;
- (id)applicationDocumentsDirectory;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)shouldShowWebBasedLogin:(id)arg1;
- (void)performWebBasedLogin:(id)arg1 forcingLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logInWithViewController:(id)arg1 methods:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logInWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logInWithMethods:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logInWithCompletion:(CDUnknownBlockType)arg1;
- (void)populateScribeService;
- (void)setupImageLoaderWithCacheDir:(id)arg1;
- (void)setupNetworkingSessionStackWithAccessGroup:(id)arg1;
- (void)setupScribeSink;
- (void)setupAPIServiceConfigs;
- (void)assertTwitterKitInitialized;
- (void)pingVerifySessionForAuthSession:(id)arg1;
- (void)userSessionVerifierNeedsSessionVerification:(id)arg1;
- (void)kitDidFinishStarting;
@property(readonly, nonatomic) TWTRSessionStore *sessionStore; // @synthesize sessionStore=_sessionStore;
- (void)ensureResourcesBundleExists;
- (void)dealloc;
- (void)startWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessGroup:(id)arg3;
- (void)startWithConsumerKey:(id)arg1 consumerSecret:(id)arg2;
- (void)start;
- (id)bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

