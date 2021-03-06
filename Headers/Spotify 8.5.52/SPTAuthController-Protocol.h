//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTAuthControllerObserver;

@protocol SPTAuthController <NSObject>
@property(readonly, nonatomic, getter=isAuthRequestInProgress) _Bool authRequestInProgress;
- (_Bool)isOffline;
- (void)removeObserver:(id <SPTAuthControllerObserver>)arg1;
- (void)addObserver:(id <SPTAuthControllerObserver>)arg1;
- (_Bool)shouldDoNetworklessAuthorizationWithClientId:(NSString *)arg1 scopes:(NSArray *)arg2 redirectUri:(NSString *)arg3 bundleId:(NSString *)arg4;
- (void)authenticateWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 shouldDoSilentAuth:(_Bool)arg3 completionHandler:(_Bool (^)(_Bool, NSURL *))arg4;
@end

