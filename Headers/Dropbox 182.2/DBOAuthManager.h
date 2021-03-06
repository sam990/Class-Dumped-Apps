//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableArray, NSString, NSURL;

@interface DBOAuthManager : NSObject
{
    NSString *_appKey;
    NSURL *_redirectURL;
    NSURL *_cancelURL;
    NSString *_host;
    NSMutableArray *_urls;
    _Bool _disableSignup;
    _Bool _webAuthShouldForceReauthentication;
    NSLocale *_locale;
}

+ (void)setSharedOAuthManager:(id)arg1;
+ (id)sharedOAuthManager;
@property(nonatomic) _Bool webAuthShouldForceReauthentication; // @synthesize webAuthShouldForceReauthentication=_webAuthShouldForceReauthentication;
@property(nonatomic) _Bool disableSignup; // @synthesize disableSignup=_disableSignup;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (_Bool)clearStoredAccessTokens;
- (_Bool)clearStoredAccessToken:(id)arg1;
- (_Bool)hasStoredAccessTokens;
- (id)retrieveAllAccessTokens;
- (id)retrieveAccessToken:(id)arg1;
- (id)retrieveFirstAccessToken;
- (_Bool)storeAccessToken:(id)arg1;
- (_Bool)checkAndPresentPlatformSpecificAuth:(id)arg1;
- (id)extractFromUrl:(id)arg1;
- (id)extractFromRedirectURL:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (id)authURL;
- (_Bool)conformsToAppScheme;
- (void)authorizeFromSharedApplication:(id)arg1;
- (id)handleRedirectURL:(id)arg1;
- (id)initWithAppKey:(id)arg1 host:(id)arg2 redirectURL:(id)arg3;
- (id)initWithAppKey:(id)arg1 host:(id)arg2;
- (id)initWithAppKey:(id)arg1;

@end

