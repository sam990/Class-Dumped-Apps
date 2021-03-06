//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDUGPushManager : NSObject
{
}

+ (id)getCommonParamDictWithRequest:(id)arg1;
+ (id)getUploadTokenParamWithRequest:(id)arg1;
+ (id)getChannelParamWithRequest:(id)arg1;
+ (id)getUploadSwitchURLWithRequest:(id)arg1;
+ (id)getUploadTokenURLWithRequest:(id)arg1;
+ (id)getChannelURLWithRequest:(id)arg1;
+ (id)transUNShowPreviewsSetting:(long long)arg1;
+ (id)transUNAlertStyle:(long long)arg1;
+ (id)transUNAuthorizationStatus:(long long)arg1;
+ (id)transUNNotificationSetting:(long long)arg1;
+ (id)getDetailPushStatus:(id)arg1;
+ (id)detailPushStatusBeforeIOS10;
+ (_Bool)isSilentNotification:(id)arg1;
+ (id)transformSystemPushSetting:(id)arg1;
+ (id)transformiOS12NotifyStatusWithAuthorizationSettings:(id)arg1;
+ (id)getUploadSwitchParamWithRequest:(id)arg1 systemPushStatus:(id)arg2 iOS12NotifyStatus:(id)arg3 detailPushStatus:(id)arg4;
+ (void)requestParamWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)requestURLWithRequest:(id)arg1;
+ (id)buildNotificationContentWith:(id)arg1 actionIdentifier:(id)arg2 categoryIdentifier:(id)arg3 responseInfo:(id)arg4;
+ (id)buildNotificationContentWith:(id)arg1;
+ (void)setLocalBadgeNumber:(long long)arg1;
+ (id)getSystemPushStatus;
+ (void)sendRequestWithParam:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)trackeClickEvent:(id)arg1;
+ (void)handleDeviceToken:(id)arg1;

@end

