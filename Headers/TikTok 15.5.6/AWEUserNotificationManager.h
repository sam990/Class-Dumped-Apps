//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserNotificationProtocol-Protocol.h"

@class NSString;

@interface AWEUserNotificationManager : NSObject <AWEUserNotificationProtocol>
{
}

+ (_Bool)shouldPresentForegroundPush:(id)arg1;
+ (void)reportDeviceTokenLegacy:(id)arg1;
+ (void)reportNotificationStatus;
+ (void)reportDeviceInfo;
+ (_Bool)isPushForbidden;
+ (_Bool)enableBDUGPush;
+ (void)didReceiveSplashDisappearNotification;
+ (void)registerSpalshDisappearNotification;
+ (void)handleConnectionChanged:(id)arg1;
+ (void)registerNetworkingReachabilityChangedNotification;
+ (void)showPrePermissonViewWithNotificationSetting:(id)arg1;
+ (void)showPrePermissonViewIfNeeded;
+ (void)recordPermissionViewShowStatus;
+ (long long)prePermissionViewLastShowedTimestamp;
+ (long long)prePermissionViewShowedTimes;
+ (_Bool)hasRequestedToShowNotification;
+ (void)isNotificationOffWithCallBack:(CDUnknownBlockType)arg1;
+ (void)grantedAction:(_Bool)arg1;
+ (void)requestAuthorizationAndUploadToken;
+ (void)requestPushAuthorization;
+ (id)videoCategoryNotificationActions;
+ (id)getNotificationCategoriesBeyondIOS12;
+ (id)getNotificationCategoriesUpIOS12;
+ (id)getNotificationCategories;
+ (void)load;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

