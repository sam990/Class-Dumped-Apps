//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBMetadataUpdateProtocol-Protocol.h>

@class DBChangeSetResult, DBDropboxPath, DBObserverHandle, NSArray, NSString;
@protocol DBDropboxPathArray, DBDropboxPathSet, DBMetadataUpdateObserver;

@protocol DBMetadataManagerProtocol <DBMetadataUpdateProtocol>
@property(readonly, nonatomic) id <DBDropboxPathSet> filesBeingCopied;
@property(readonly, nonatomic) id <DBDropboxPathSet> filesBeingMoved;
@property(readonly, nonatomic) id <DBDropboxPathSet> filesBeingDeleted;
@property(readonly, nonatomic) id <DBDropboxPathArray> filesBeingCreated;
- (DBObserverHandle *)addDeltaUpdateObserver:(void (^)(id <DBDropboxPathSet>, id <DBDropboxPathSet>))arg1;
- (DBObserverHandle *)addUpdateObserver:(void (^)(struct NSDictionary *, struct NSDictionary *, DBMetadataDatabaseUpdateObserverContext *, id <DBDropboxPathSet>))arg1;
- (void)removeMetadataUpdateObserver:(id <DBMetadataUpdateObserver>)arg1;
- (void)addMetadataUpdateObserver:(id <DBMetadataUpdateObserver>)arg1;
- (void)batchUnlockEntries:(id <DBDropboxPathArray>)arg1 completion:(void (^)(_Bool, NSArray *, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg2;
- (void)batchLockEntries:(id <DBDropboxPathArray>)arg1 completion:(void (^)(_Bool, NSArray *, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg2;
- (void)requestUnlock:(id <DBDropboxPathArray>)arg1 confirmedFsws:(NSArray *)arg2 completion:(void (^)(_Bool, NSArray *, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg3;
- (void)undoBatch:(DBChangeSetResult *)arg1 completion:(void (^)(_Bool, DBAPIErrorWrapper *))arg2;
- (void)batchCopyEntries:(id <DBDropboxPathArray>)arg1 to:(DBDropboxPath *)arg2 confirmedFsws:(NSArray *)arg3 completion:(void (^)(_Bool, NSArray *, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg4;
- (void)copyFromPath:(DBDropboxPath *)arg1 toPath:(DBDropboxPath *)arg2 confirmedFsws:(NSArray *)arg3 completion:(void (^)(_Bool, id <DBFileMetadataFull>, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg4;
- (void)copyFromRef:(NSString *)arg1 toPath:(DBDropboxPath *)arg2 confirmedFsws:(NSArray *)arg3 completion:(void (^)(_Bool, id <DBFileMetadataFull>, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg4;
- (void)renameFromPath:(DBDropboxPath *)arg1 newFileName:(NSString *)arg2 confirmedFsws:(NSArray *)arg3 completion:(void (^)(_Bool, id <DBFileMetadataFull>, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg4;
- (void)batchMoveEntries:(id <DBDropboxPathArray>)arg1 to:(DBDropboxPath *)arg2 confirmedFsws:(NSArray *)arg3 completion:(void (^)(_Bool, NSArray *, DBChangeSetResult *, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg4;
- (void)batchDeleteEntries:(id <DBDropboxPathArray>)arg1 confirmedFsws:(NSArray *)arg2 completion:(void (^)(_Bool, id <DBDropboxPathArray>, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg3;
- (void)deleteEntry:(DBDropboxPath *)arg1 confirmedFsws:(NSArray *)arg2 completion:(void (^)(_Bool, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg3;
- (void)createFolder:(DBDropboxPath *)arg1 confirmedFsws:(NSArray *)arg2 completion:(void (^)(_Bool, id <DBFileMetadataFull>, DBFilesystemWarnings *, DBAPIErrorWrapper *))arg3;
@end

