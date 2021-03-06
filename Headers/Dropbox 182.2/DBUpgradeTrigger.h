//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBUpgradeTrigger : NSObject
{
    _Bool _showMessageStyleView;
    NSString *_type;
    NSString *_appKey;
    long long _messageStyleViewVariant;
}

+ (id)euxCoolOff;
+ (id)resubscriptionModal;
+ (id)plusUpsellBanner;
+ (id)createButtonOverQuotaUpsellAlert;
+ (id)createButtonOverQuotaUpsellFullScreenModal;
+ (id)homeUploadsOverQuotaUpsell;
+ (id)settingsDeviceManagement;
+ (id)paywallDeviceManagement;
+ (id)paywallDeviceLimitV2;
+ (id)paywallDeviceLimit;
+ (id)universalLink;
+ (id)settings;
+ (id)promotedAppStorePurchaseFallback;
+ (id)promotedAppStorePurchase;
+ (id)appLaunchOnboardingUpgrade;
+ (id)existingUserUpgrade;
+ (id)newUserTrial;
+ (id)offlineUpsellNavbarAction;
+ (id)offlineUpsellTakeFoldersWithYouV2;
+ (id)offlineUpsellTakeFoldersWithYouV1;
+ (id)offlineUpsellTakeFoldersWithYou;
+ (id)debug;
+ (id)cameraUploadUpgradeOrLinkView;
+ (id)cameraUploadUpgradeOrLinkAlertView;
+ (id)cameraUploadStatus;
+ (id)contentLinkInsufficientSpaceViewPrompt;
+ (id)contentLinkInsufficientSpaceView;
+ (id)accountV2UpsellControl;
+ (id)accountV2UpsellV2;
+ (id)accountV2UpsellV1;
+ (id)accountV2;
+ (id)account;
+ (id)apiShowUpgrade:(id)arg1;
+ (id)none;
+ (id)planExpired;
+ (id)mslAlmostOverQuotaBanner;
+ (id)mslOverQuotaBanner;
+ (id)almostOverQuotaBanner;
+ (id)overQuotaBanner;
+ (id)promptUnknown;
+ (id)campaignUpgradePage;
+ (id)promptModalPage;
+ (id)promptPopupModal;
+ (id)promptTopNotificationWithModal;
+ (id)promptTopNotification;
@property(readonly, nonatomic) long long messageStyleViewVariant; // @synthesize messageStyleViewVariant=_messageStyleViewVariant;
@property(readonly, nonatomic) _Bool showMessageStyleView; // @synthesize showMessageStyleView=_showMessageStyleView;
@property(readonly, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initType:(id)arg1 showMessageStyleView:(_Bool)arg2 messageStyleViewVariant:(long long)arg3;
- (id)initType:(id)arg1 appKey:(id)arg2;
- (id)initType:(id)arg1;

@end

