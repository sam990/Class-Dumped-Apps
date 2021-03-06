//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDDPrimitiveDownloaderDelegate-Protocol.h"

@class MDDFileGroupUpdater, MDDNotificationHelpers, MDDPrimitiveDownloader, NSMutableDictionary, NSMutableSet, NSString;
@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment;

@interface MDDPrimitiveDownloadCoordinator : NSObject <MDDPrimitiveDownloaderDelegate>
{
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment> _configuration;
    NSMutableSet *_inProgressDownloads;
    MDDPrimitiveDownloader *_primitiveDownloader;
    NSMutableDictionary *_retryCount;
    MDDFileGroupUpdater *_updater;
    MDDNotificationHelpers *_notificationHelpers;
}

+ (id)coordinatorWithUpdater:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (void)downloadFileGroupFile:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3;
- (void)scheduleIndividualFile:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3;
- (void)MDDPrimitiveDownloader:(id)arg1 didDownloadData:(id)arg2 forFileGroupFile:(id)arg3 fileGroup:(id)arg4 fileGroupName:(id)arg5 error:(id)arg6;
- (void)retry:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3;
- (id)initWithUpdater:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

