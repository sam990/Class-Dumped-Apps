//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTCoreLoginControllerLoginDelegate-Protocol.h"

@class NSError, NSString;
@protocol SPTCoreLoginController;

@protocol SPTCoreLoginControllerDelegate <SPTCoreLoginControllerLoginDelegate>
- (NSString *)core:(id <SPTCoreLoginController>)arg1 localizedDescriptionForLoginErrorCode:(int)arg2;
- (void)coreDidLogout:(id <SPTCoreLoginController>)arg1;
- (void)coreDidRelogin:(id <SPTCoreLoginController>)arg1 withError:(NSError *)arg2 isPermanent:(_Bool)arg3;
@end
