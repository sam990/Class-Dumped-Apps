//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol DBAuthAccountInfoProtocol, DBAuthCredentialsManagerUnlinkObserver, DBAuthLinkedAccountProtocol, DBObserverHandleProtocol;

@protocol DBAuthCredentialsManagerProtocol <NSObject>
@property(readonly, nonatomic) NSArray *linkedAccounts;
- (unsigned long long)managedSessionStateForLinkedAccount:(id <DBAuthLinkedAccountProtocol>)arg1;
- (void)updateAccount:(id <DBAuthLinkedAccountProtocol>)arg1 withAccountInfo:(id <DBAuthAccountInfoProtocol>)arg2 completion:(void (^)(NSError *))arg3;
- (void)unlinkAccount:(id <DBAuthLinkedAccountProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)addLinkedAccountWithAccessToken:(NSString *)arg1 accessTokenSecret:(NSString *)arg2 forUserID:(NSString *)arg3 withAccountInfo:(id <DBAuthAccountInfoProtocol>)arg4 completion:(void (^)(id <DBAuthLinkedAccountProtocol>, NSError *))arg5;
- (void)loadAndClearAllLinkedAccountsWithCompletion:(void (^)(NSError *))arg1;
- (void)loadLinkedAccountsAndForceLinkAppInstallation:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (id <DBObserverHandleProtocol>)addUnlinkObserver:(id <DBAuthCredentialsManagerUnlinkObserver>)arg1;
- (_Bool)isAnyOtherFirstPartyAppInstalled;
- (_Bool)isAppInstallationLinked;
- (void)getLatestAccountInfosWithCompletion:(void (^)(NSArray *, NSError *))arg1 synchronous:(_Bool)arg2;
@end

