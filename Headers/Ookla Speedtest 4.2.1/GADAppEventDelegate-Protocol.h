//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/NSObject-Protocol.h>

@class GADBannerView, GADInterstitial, NSString;

@protocol GADAppEventDelegate <NSObject>

@optional
- (void)interstitial:(GADInterstitial *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)adView:(GADBannerView *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
@end

