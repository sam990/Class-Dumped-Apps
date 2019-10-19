//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Shared : NSObject
{
}

+ (void)logger:(id)arg1;
+ (void)openAppInAppStore;
+ (void)createAndPresentWebViewWithURL:(id)arg1 viewControllerToPresetOn:(id)arg2;
+ (void)reportMonitorEventWithDomainName:(id)arg1 additionalUserInfo:(id)arg2;
+ (void)reportNonFatalToCrashlyticsWithDomainName:(id)arg1 domainCode:(id)arg2 additionalUserInfo:(id)arg3;
+ (void)presentSaveFileAlertOnViewContrller:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)showUserNotActiveAlert;
+ (id)padImage:(id)arg1 withPaddingDictionary:(id)arg2;
+ (void)openAppSettings;
+ (id)colorText:(id)arg1 withColor:(id)arg2 inText:(id)arg3;
+ (id)imageWithColor:(id)arg1;
+ (id)colorFromHexString:(id)arg1;
+ (_Bool)isNumeric:(id)arg1;
+ (float)getFileSizeMB:(id)arg1;
+ (float)getFileSizeKB:(id)arg1;
+ (id)removeUnNeededZerosAfterDot:(double)arg1;
+ (id)formatNumber:(id)arg1 asCurrency:(id)arg2;
+ (id)formatNumberAsCurrency:(id)arg1;
+ (void)setupDefaultHeadersForRequest:(id)arg1;
+ (_Bool)isIOS10;
+ (void)saveAppGroupValues:(id)arg1 AndKeys:(id)arg2;
+ (void)saveToUserDefaults:(id)arg1 forKey:(id)arg2;
+ (id)getFixedURLStringIfUTF8:(id)arg1;
+ (id)formatStringForOutOfOffice:(id)arg1 returnDate:(id)arg2;
+ (void)isDeviceJailbroken:(CDUnknownBlockType)arg1;
+ (id)formatToDecimalNumber:(id)arg1;
+ (id)formatPriceToUserCurrency:(id)arg1 exchangeRate:(id)arg2 isRounded:(_Bool)arg3;
+ (id)formatPriceToUserCurrency:(id)arg1 isRounded:(_Bool)arg2;
+ (id)formatPriceToUserCurrency:(id)arg1;
+ (_Bool)isValidEmailAddress:(id)arg1;
+ (id)loadViewFromNib:(id)arg1 forClass:(Class)arg2;
+ (void)postNotificationToAll:(id)arg1 userInfo:(id)arg2;
+ (void)postNotification:(id)arg1 userInfo:(id)arg2 forObject:(id)arg3;
+ (void)postNotification:(id)arg1;
+ (_Bool)connectedTo3GNetwork;
+ (_Bool)connectedToNetwork:(_Bool)arg1;
+ (id)getLocalLanguage;
+ (void)writeFloat:(double)arg1 key:(id)arg2;
+ (void)writeInteger:(long long)arg1 key:(id)arg2;
+ (void)writeValue:(id)arg1 key:(id)arg2;
+ (void)writeBool:(_Bool)arg1 key:(id)arg2;
+ (_Bool)readBool:(id)arg1 default:(_Bool)arg2;
+ (long long)readInteger:(id)arg1 default:(long long)arg2;
+ (double)readFloat:(id)arg1 default:(double)arg2;
+ (id)readValue:(id)arg1 default:(id)arg2;
+ (void)deleteKey:(id)arg1;
+ (id)trimByCharacterSet:(id)arg1 charSet:(id)arg2;
+ (id)trim:(id)arg1;
+ (id)saveImageToTempDirectory:(id)arg1 image:(id)arg2;
+ (id)getTempPath:(id)arg1 forceCreate:(_Bool)arg2;
+ (id)getDocumentsPath:(id)arg1 forceCreate:(_Bool)arg2;
+ (id)notify:(id)arg1 message:(id)arg2 showOnController:(id)arg3;
+ (id)notify:(id)arg1 message:(id)arg2;
+ (id)notify:(id)arg1;
+ (_Bool)isFileExists:(id)arg1;
+ (id)appDelegate;

@end
