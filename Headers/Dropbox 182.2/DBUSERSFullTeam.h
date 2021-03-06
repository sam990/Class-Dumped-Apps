//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBUSERSTeam.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBTEAMPOLICIESCameraUploadsPolicyState, DBTEAMPOLICIESFileLockingPolicyState, DBTEAMPOLICIESOfficeAddInPolicy, DBTEAMPOLICIESSmarterSmartSyncPolicyState, DBTEAMPOLICIESTeamSharingPolicies, DBUSERSQuotaInfo, DBUSERSTeamUserPermissions, NSNumber, NSString;

@interface DBUSERSFullTeam : DBUSERSTeam <DBSerializable, NSCopying>
{
    DBTEAMPOLICIESTeamSharingPolicies *_sharingPolicies;
    DBTEAMPOLICIESOfficeAddInPolicy *_officeAddinPolicy;
    NSNumber *_isLockedTeam;
    NSString *_lockedTeamReason;
    DBTEAMPOLICIESCameraUploadsPolicyState *_cameraUploadsPolicy;
    DBTEAMPOLICIESSmarterSmartSyncPolicyState *_smarterSmartSyncPolicy;
    DBTEAMPOLICIESFileLockingPolicyState *_fileLockingPolicy;
    NSString *_ssoState;
    NSString *_emmState;
    NSNumber *_isLimited;
    NSString *_pathRoot;
    DBUSERSQuotaInfo *_quotaInfo;
    NSString *_mslCapsType;
    DBUSERSTeamUserPermissions *_teamUserPermissions;
    NSNumber *_isMsl;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *isMsl; // @synthesize isMsl=_isMsl;
@property(readonly, nonatomic) DBUSERSTeamUserPermissions *teamUserPermissions; // @synthesize teamUserPermissions=_teamUserPermissions;
@property(readonly, copy, nonatomic) NSString *mslCapsType; // @synthesize mslCapsType=_mslCapsType;
@property(readonly, nonatomic) DBUSERSQuotaInfo *quotaInfo; // @synthesize quotaInfo=_quotaInfo;
@property(readonly, copy, nonatomic) NSString *pathRoot; // @synthesize pathRoot=_pathRoot;
@property(readonly, nonatomic) NSNumber *isLimited; // @synthesize isLimited=_isLimited;
@property(readonly, copy, nonatomic) NSString *emmState; // @synthesize emmState=_emmState;
@property(readonly, copy, nonatomic) NSString *ssoState; // @synthesize ssoState=_ssoState;
@property(readonly, nonatomic) DBTEAMPOLICIESFileLockingPolicyState *fileLockingPolicy; // @synthesize fileLockingPolicy=_fileLockingPolicy;
@property(readonly, nonatomic) DBTEAMPOLICIESSmarterSmartSyncPolicyState *smarterSmartSyncPolicy; // @synthesize smarterSmartSyncPolicy=_smarterSmartSyncPolicy;
@property(readonly, nonatomic) DBTEAMPOLICIESCameraUploadsPolicyState *cameraUploadsPolicy; // @synthesize cameraUploadsPolicy=_cameraUploadsPolicy;
@property(readonly, copy, nonatomic) NSString *lockedTeamReason; // @synthesize lockedTeamReason=_lockedTeamReason;
@property(readonly, nonatomic) NSNumber *isLockedTeam; // @synthesize isLockedTeam=_isLockedTeam;
@property(readonly, nonatomic) DBTEAMPOLICIESOfficeAddInPolicy *officeAddinPolicy; // @synthesize officeAddinPolicy=_officeAddinPolicy;
@property(readonly, nonatomic) DBTEAMPOLICIESTeamSharingPolicies *sharingPolicies; // @synthesize sharingPolicies=_sharingPolicies;
- (void).cxx_destruct;
- (_Bool)isEqualToFullTeam:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithId_:(id)arg1 name:(id)arg2 sharingPolicies:(id)arg3 officeAddinPolicy:(id)arg4 isLockedTeam:(id)arg5 lockedTeamReason:(id)arg6 cameraUploadsPolicy:(id)arg7 ssoState:(id)arg8 emmState:(id)arg9 isLimited:(id)arg10 quotaInfo:(id)arg11 mslCapsType:(id)arg12 teamUserPermissions:(id)arg13 isMsl:(id)arg14;
- (id)initWithId_:(id)arg1 name:(id)arg2 sharingPolicies:(id)arg3 officeAddinPolicy:(id)arg4 isLockedTeam:(id)arg5 lockedTeamReason:(id)arg6 cameraUploadsPolicy:(id)arg7 ssoState:(id)arg8 emmState:(id)arg9 isLimited:(id)arg10 quotaInfo:(id)arg11 mslCapsType:(id)arg12 teamUserPermissions:(id)arg13 isMsl:(id)arg14 smarterSmartSyncPolicy:(id)arg15 fileLockingPolicy:(id)arg16 pathRoot:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

