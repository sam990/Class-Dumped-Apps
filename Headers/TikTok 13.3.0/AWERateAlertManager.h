//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface AWERateAlertManager : NSObject
{
    UIWindow *_rateWindow;
    UIWindow *_lastWindow;
}

+ (id)sharedManager;
+ (void)load;
@property(retain, nonatomic) UIWindow *lastWindow; // @synthesize lastWindow=_lastWindow;
@property(retain, nonatomic) UIWindow *rateWindow; // @synthesize rateWindow=_rateWindow;
- (void).cxx_destruct;
- (_Bool)shouldShowRateAlert;
- (id)versionKey;
- (void)showRateAlertIfNeeded;
- (id)dayComponentsStringForToday;
- (id)dayComponentsStringForDate:(id)arg1;
- (long long)appLaunchTimesInDays:(long long)arg1;
- (void)appDidBecomeActive;
- (void)dealloc;
- (void)notifyUserActiveAction:(id)arg1;
- (id)init;

@end
