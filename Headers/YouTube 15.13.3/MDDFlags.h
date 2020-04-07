//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MOBServiceLockFlags-Protocol.h>
#import <Module_Framework/NSCopying-Protocol.h>

@interface MDDFlags : NSObject <MOBServiceLockFlags, NSCopying>
{
    _Bool _registerBackgroundTaskOnAppStateChange;
    _Bool _trackAppStateChanges;
    _Bool _crashOnSuspensionWithFileLock;
    _Bool _fileExpirationEnabled;
    _Bool _allOwnedFileGroupsExpireImmediately;
    _Bool _resumeBackgroundDownloadsOnStartup;
    _Bool _allowLocalhostDownloads;
    _Bool _allowHTTPDownloads;
    _Bool _allowDownloadsOnCellular;
    int _unsetCleanupDateBehavior;
    int _logSamplingInterval;
    double _expireFilesLazilyEverySeconds;
    long long _timeToLiveForFilegroupsAddedWithoutExpirationSeconds;
}

+ (id)defaultFlags;
@property(readonly) _Bool allowDownloadsOnCellular; // @synthesize allowDownloadsOnCellular=_allowDownloadsOnCellular;
@property(readonly) _Bool allowHTTPDownloads; // @synthesize allowHTTPDownloads=_allowHTTPDownloads;
@property(readonly) _Bool allowLocalhostDownloads; // @synthesize allowLocalhostDownloads=_allowLocalhostDownloads;
@property(readonly) _Bool resumeBackgroundDownloadsOnStartup; // @synthesize resumeBackgroundDownloadsOnStartup=_resumeBackgroundDownloadsOnStartup;
@property(readonly) long long timeToLiveForFilegroupsAddedWithoutExpirationSeconds; // @synthesize timeToLiveForFilegroupsAddedWithoutExpirationSeconds=_timeToLiveForFilegroupsAddedWithoutExpirationSeconds;
@property(readonly) int logSamplingInterval; // @synthesize logSamplingInterval=_logSamplingInterval;
@property(readonly) int unsetCleanupDateBehavior; // @synthesize unsetCleanupDateBehavior=_unsetCleanupDateBehavior;
@property(readonly) double expireFilesLazilyEverySeconds; // @synthesize expireFilesLazilyEverySeconds=_expireFilesLazilyEverySeconds;
@property(readonly) _Bool allOwnedFileGroupsExpireImmediately; // @synthesize allOwnedFileGroupsExpireImmediately=_allOwnedFileGroupsExpireImmediately;
@property(readonly, getter=isFileExpirationEnabled) _Bool fileExpirationEnabled; // @synthesize fileExpirationEnabled=_fileExpirationEnabled;
@property(readonly, nonatomic) _Bool crashOnSuspensionWithFileLock; // @synthesize crashOnSuspensionWithFileLock=_crashOnSuspensionWithFileLock;
@property(readonly, nonatomic) _Bool trackAppStateChanges; // @synthesize trackAppStateChanges=_trackAppStateChanges;
@property(readonly, nonatomic) _Bool registerBackgroundTaskOnAppStateChange; // @synthesize registerBackgroundTaskOnAppStateChange=_registerBackgroundTaskOnAppStateChange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
