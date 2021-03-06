//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBMetadataManagerErrorMessage : NSObject
{
}

+ (id)errorStringForUploadToPath:(id)arg1 withError:(id)arg2;
+ (id)errorStringForBatchCopyToPath:(id)arg1 withError:(id)arg2;
+ (id)errorStringForCopyFromPath:(id)arg1 toPath:(id)arg2 withError:(id)arg3;
+ (id)errorStringForCopyRef:(id)arg1 withError:(id)arg2;
+ (id)errorStringForBatchMove:(id)arg1 toPath:(id)arg2 withError:(id)arg3;
+ (id)errorStringForBatchDelete:(id)arg1 withError:(id)arg2;
+ (id)errorStringForRename:(id)arg1 to:(id)arg2 withError:(id)arg3;
+ (id)errorStringForDelete:(id)arg1 withError:(id)arg2;
+ (id)errorStringForUnlockFile:(id)arg1 withError:(id)arg2;
+ (id)errorStringForLockFile:(id)arg1 withError:(id)arg2;
+ (id)errorStringForRequestUnlock:(id)arg1 withError:(id)arg2;
+ (id)errorStringForCreateFolder:(id)arg1 withError:(id)arg2;
+ (id)db_userErrorMessageFromErrorWrapper:(id)arg1;
+ (id)db_userErrorMessageFromError:(id)arg1;
+ (unsigned long long)db_failureReasonFromError:(id)arg1;
+ (unsigned long long)db_failureReasonFromRequestError:(id)arg1 orAsyncPollError:(id)arg2 orErrorV1:(id)arg3;
+ (unsigned long long)db_failureReasonFromUploadError:(id)arg1;
+ (unsigned long long)db_failureReasonFromDeleteBatchError:(id)arg1;
+ (unsigned long long)db_failureReasonFromLockFileError:(id)arg1;
+ (unsigned long long)db_failureReasonFromDeleteError:(id)arg1;
+ (unsigned long long)db_failureReasonFromRelocationBatchError:(id)arg1;
+ (unsigned long long)db_failureReasonFromCopyRefError:(id)arg1;
+ (unsigned long long)db_failureReasonFromWriteError:(id)arg1;
+ (unsigned long long)db_failureReasonFromLookupError:(id)arg1;
+ (unsigned long long)db_failureReasonFromRelocationError:(id)arg1;
+ (unsigned long long)db_failureReasonFromCreateFolderError:(id)arg1;

@end

