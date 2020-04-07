//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, MDDNotificationHelpers, NSMutableSet, NSURLSession;
@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment, MDDSessionFetcherDownloaderDelegate;

@interface MDDSessionFetcherDownloader : NSObject
{
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment> _configuration;
    GTMSessionFetcherService *_sessionFetcherService;
    NSMutableSet *_allFetchers;
    MDDNotificationHelpers *_notificationHelpers;
    id <MDDSessionFetcherDownloaderDelegate> _delegate;
    NSURLSession *_downloadSession;
}

+ (id)downloaderWithDelegate:(id)arg1 sessionFetcherService:(id)arg2 configuration:(id)arg3;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(readonly, nonatomic) __weak id <MDDSessionFetcherDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelAllFetchers;
- (void)fetcher:(id)arg1 didDownloadFileGroupFile:(id)arg2 fileGroup:(id)arg3 fileGroupName:(id)arg4 error:(id)arg5;
- (void)downloadFileGroupFile:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3 createSessionFile:(_Bool)arg4 fetcherCreationCallback:(CDUnknownBlockType)arg5;
- (void)resumeSession:(id)arg1;
- (void)downloadFileGroupFile:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3;
- (_Bool)resumeSessions;
- (id)initWithDelegate:(id)arg1 sessionFetcherService:(id)arg2 configuration:(id)arg3;

@end
