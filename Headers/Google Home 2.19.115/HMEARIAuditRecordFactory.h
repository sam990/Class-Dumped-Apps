//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMEARIAuditRecordFactory : NSObject
{
    NSString *_languageCode;
}

@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (id)textDetailsWithMessageIDs:(id)arg1;
- (void)addIdentifierForWifiMeshGroupID:(id)arg1 intoIdentifiers:(id)arg2;
- (void)addIdentifierForStructureID:(id)arg1 intoIdentifiers:(id)arg2;
- (id)identifiersForDeviceID:(id)arg1;
- (id)entityForDeviceID:(id)arg1 withRole:(int)arg2;
- (id)parentConsentNotification:(int)arg1;
- (id)entityForStructureID:(id)arg1 withRole:(int)arg2;
- (id)identifiersForUserIdentity:(id)arg1;
- (id)entityForIdentity:(id)arg1 withRole:(int)arg2;
- (id)twoStateSettingValue:(_Bool)arg1;
- (id)perTopicConsentForTopic:(int)arg1 consentValue:(int)arg2;
- (id)personalResultsEventDetails:(long long)arg1;
- (id)thirdPartyLinkingEventDetails:(id)arg1;
- (id)UMAChangeEventDetails:(_Bool)arg1;
- (int)consentValueForState:(long long)arg1;
- (id)wifiEmailOptInEventDetailsWithOptInState:(long long)arg1;
- (id)homeEmailOptInEventDetailsWithMailingLists:(long long)arg1 optInState:(long long)arg2;
- (id)createNestAwareEnableFamiliarFaceDetectionRecordWithUserIdentity:(id)arg1 structureID:(id)arg2 deviceID:(id)arg3 messageIDs:(id)arg4 consentGiven:(_Bool)arg5;
- (id)createNestAwareEnableE911CallingRecordWithUserIdentity:(id)arg1 structureID:(id)arg2 messageIDs:(id)arg3 consentGiven:(_Bool)arg4;
- (id)createWifiMigrationAgreedRecordWithUserIdentity:(id)arg1 structureID:(id)arg2 groupID:(id)arg3 messageIDs:(id)arg4 consentGiven:(_Bool)arg5;
- (id)createPersonalResultsChangedRecordWithUserIdentity:(id)arg1 deviceID:(id)arg2 personalizedResultsState:(long long)arg3 messageIDs:(id)arg4;
- (id)createDisconnectWorksWithNestRecordWithUserIdentity:(id)arg1 messageIDs:(id)arg2 eventTimeMillis:(long long)arg3 clientIDs:(id)arg4;
- (id)createSupplementalNestTermsAgreedRecordWithUserIdentity:(id)arg1 messageIDs:(id)arg2 eventTimeMillis:(long long)arg3;
- (id)structureManagementChangeRecordWithIdentity:(id)arg1 structureID:(id)arg2 joining:(_Bool)arg3 messageIDs:(id)arg4;
- (id)managerInvitationRecordWithUserIdentity:(id)arg1 structureID:(id)arg2 initiatedByInvitee:(_Bool)arg3 messageIDs:(id)arg4;
- (id)createDuoCreateAccountRecord:(_Bool)arg1 withUserIdentity:(id)arg2 cloudDeviceID:(id)arg3;
- (id)createDuoEnableCallingRecord:(_Bool)arg1 withUserIdentity:(id)arg2 cloudDeviceID:(id)arg3;
- (id)createThirdPartyLinkingRecordWithUserIdentity:(id)arg1 context:(long long)arg2 linkedServiceID:(id)arg3;
- (id)createAppCrashUploadConsentRecord:(_Bool)arg1 withUserIdentity:(id)arg2 messageIDs:(id)arg3;
- (id)createUpdateUMARecordWithUserIdentity:(id)arg1 UMAEnabled:(_Bool)arg2 withContext:(long long)arg3 deviceID:(id)arg4;
- (id)createUpdateEmailOptInRecordWithUserIdentity:(id)arg1 context:(long long)arg2 mailingLists:(long long)arg3 optInState:(long long)arg4;
- (id)createAssistantDisclosuresRecordWithUserIdentity:(id)arg1;
- (id)createSignInRecordWithUserIdentity:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;

@end

