//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterKit/TWTRSessionStore-Protocol.h>

@protocol TWTRAuthSession;

@protocol TWTRUserSessionStore_Private <TWTRSessionStore>
- (void)logInWithSystemAccountsCompletion:(void (^)(id <TWTRAuthSession>, NSError *))arg1;
- (void)saveSession:(id <TWTRAuthSession>)arg1 withVerification:(_Bool)arg2 completion:(void (^)(id <TWTRAuthSession>, NSError *))arg3;
@end
