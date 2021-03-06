//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBASYNCPollError, DBFilesystemWarnings, DBRequestError, DBSHARINGGetFileMetadataError, DBSHARINGModifySharedLinkSettingsError, DBSHARINGRevokeSharedLinkError, DBSHARINGShareFileError, DBSHARINGShareFolderError, DBSHARINGSharedFolderAccessError, DBSHARINGUnmountFolderError, DBSHARINGUnshareFileError, DBSHARINGUnshareFolderError, DBSHARINGUpdateFilePolicyError, DBSHARINGUpdateFolderPolicyError, DBSHARINGValidateFolderPathError, DBSharedLinkCreateError, DBSharedLinkListError, NSError, NSString;

@interface DBSharedContentError : NSObject
{
    long long _errorSource;
    DBSHARINGValidateFolderPathError *_sdkValidateFolderPathError;
    DBSHARINGShareFolderError *_sdkShareFolderError;
    DBSHARINGSharedFolderAccessError *_sdkSharedFolderAccessError;
    DBSHARINGUpdateFolderPolicyError *_sdkUpdateFolderPolicyError;
    DBSHARINGUnshareFolderError *_sdkUnshareFolderError;
    DBSHARINGUnmountFolderError *_sdkUnmountFolderError;
    DBSHARINGShareFileError *_sdkShareFileError;
    DBSHARINGGetFileMetadataError *_sdkGetFileMetadataError;
    DBSHARINGUpdateFilePolicyError *_sdkUpdateFilePolicyError;
    DBSHARINGUnshareFileError *_sdkUnshareFileError;
    DBASYNCPollError *_sdkAsyncPollError;
    DBSHARINGModifySharedLinkSettingsError *_modifyLinkSettingsError;
    DBSHARINGRevokeSharedLinkError *_revokeSharedLinkError;
    DBRequestError *_sdkRequestError;
    NSError *_customError;
    NSError *_legacyError;
    DBSharedLinkListError *_listSharedLinksError;
    DBSharedLinkCreateError *_createSharedLinkError;
}

+ (void)displayTooManyFilesAlertWithTitle:(id)arg1 helpCenterURLString:(id)arg2;
+ (void)displayAlertForError:(id)arg1 title:(id)arg2 fallbackMessage:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) DBSharedLinkCreateError *createSharedLinkError; // @synthesize createSharedLinkError=_createSharedLinkError;
@property(retain, nonatomic) DBSharedLinkListError *listSharedLinksError; // @synthesize listSharedLinksError=_listSharedLinksError;
@property(readonly, nonatomic) NSError *legacyError; // @synthesize legacyError=_legacyError;
@property(readonly, nonatomic) NSError *customError; // @synthesize customError=_customError;
- (void).cxx_destruct;
- (_Bool)db_isLegacyFolderFileError;
- (_Bool)db_isLegacyInsidePublicFolderFileError;
- (_Bool)db_isLegacyInsidePackageFileError;
- (_Bool)db_isLegacyEmailUnverifiedFileError;
- (_Bool)db_isLegacyIsPublicFolderFolderError;
- (_Bool)db_isLegacyInsidePublicFolderFolderError;
- (_Bool)db_isLegacyInsidePackageFolderError;
- (_Bool)db_isLegacyPackageFolderError;
- (_Bool)db_isLegacyContainsSharedFolderFolderError;
- (_Bool)db_isLegacyInsideSharedFolderFolderError;
- (_Bool)db_isLegacyNoPermissionFolderError;
- (_Bool)db_isLegacyPathAlreadySharedFolderError;
- (_Bool)db_isLegacyEmailUnverifiedFolderError;
- (id)db_sdkAccessFileError;
- (id)db_sdkUserFileError;
- (id)db_sdkAccessFolderError;
- (id)db_sdkBadPathFolderError;
@property(readonly, nonatomic) NSString *userMessage;
@property(readonly, nonatomic) DBFilesystemWarnings *fsws;
- (_Bool)isLinkAlreadyExistsError;
- (_Bool)isSharedLinkMalformedLinkError;
- (_Bool)isInvalidModifiedSettingsLinkError;
- (_Bool)isUnsupportedLinkError;
- (_Bool)isAccessDeniedLinkError;
- (_Bool)isSharedLinkNotFoundLinkError;
- (_Bool)isFolderFileError;
- (_Bool)isTooManyFilesFolderError;
- (_Bool)isValidateFolderPathNoAccessError;
- (_Bool)isContainsSharedFolderFolderError;
- (_Bool)isInsideSharedFolderFolderError;
- (_Bool)isPublicFolderFolderError;
- (_Bool)isPackageFolderError;
- (_Bool)isNoPermissionFolderError;
- (_Bool)isPathAlreadySharedFolderErrorWithSharedFolderId:(id *)arg1;
- (_Bool)isAsyncPollInternalError;
- (_Bool)isInsidePublicFolderError;
- (_Bool)isInsidePackageError;
- (_Bool)isEmailUnverifiedError;
- (_Bool)isNetworkError;
- (id)initWithCustomError:(id)arg1;
- (id)initWithSDKRequestError:(id)arg1;
- (id)initWithCreateSharedLinkError:(id)arg1;
- (id)initWithListSharedLinksError:(id)arg1;
- (id)initWithSDKRevokeSharedLinkError:(id)arg1;
- (id)initWithSDKModifyLinkSettingsError:(id)arg1;
- (id)initWithSDKAsyncPollError:(id)arg1;
- (id)initWithSDKUnshareFileError:(id)arg1;
- (id)initWithSDKUpdateFilePolicyError:(id)arg1;
- (id)initWithSDKGetFileMetadataError:(id)arg1;
- (id)initWithSDKShareFileError:(id)arg1;
- (id)initWithSDKUnmountFolderError:(id)arg1;
- (id)initWithSDKUnshareFolderError:(id)arg1;
- (id)initWithSDKUpdateFolderPolicyError:(id)arg1;
- (id)initWithSDKSharedFolderAccessError:(id)arg1;
- (id)initWithSDKShareFolderError:(id)arg1;
- (id)initWithSDKValidateFolderPathError:(id)arg1;
- (id)initWithLegacyError:(id)arg1;

@end

