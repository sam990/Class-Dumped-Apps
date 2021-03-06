//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWENoWifiTipManagerProtocol <NSObject>
@property(readonly, nonatomic) _Bool isAlreadyShowAlertInModernFeed;
- (void)checkModernFeedAlertStatus;
- (void)showFeedNoWifiTipWithAllowBlock:(void (^)(void))arg1 denyBlock:(void (^)(void))arg2 delayBlock:(_Bool (^)(void))arg3 withPlayVideoVCType:(long long)arg4 isStopped:(_Bool)arg5 referString:(NSString *)arg6;
- (_Bool)shouldPauseByStrategy;
@end

