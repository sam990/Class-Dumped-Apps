//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBMigration-Protocol.h"

@class NSString;

@interface DBCameraUploadSettingsToPerUserDefaultsMigration : NSObject <DBMigration>
{
}

+ (void)db_setUserDefaultsIntValueIfEmpty:(long long)arg1 forKey:(id)arg2 forUserId:(id)arg3;
+ (void)db_setUserDefaultsBoolValueIfEmpty:(_Bool)arg1 forKey:(id)arg2 forUserId:(id)arg3;
+ (unsigned long long)db_cameraUploadTypePreferenceFromKeychain:(id)arg1;
+ (unsigned long long)db_cameraUploadNetworkPreferenceFromKeychain:(id)arg1;
+ (id)db_legacyCrossAppSettingsFromKeychain:(id)arg1;
+ (void)db_deleteCrossAppCUKeychain;
+ (void)db_clearGlobalDefaultsKeys;
+ (id)db_getCuUserIdWithAccountManager:(id)arg1;
+ (void)db_migrateGlobalDefaultSettingsForUserId:(id)arg1;
+ (void)db_migrateCrossAppKeychainSettingsForUserId:(id)arg1;
+ (id)db_cuCrossAppKeychain;
+ (void)runWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

