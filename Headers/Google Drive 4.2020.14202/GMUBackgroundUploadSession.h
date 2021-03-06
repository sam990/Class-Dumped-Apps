//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMUBackgroundUploadDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class GPCPromise, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface GMUBackgroundUploadSession : NSObject <GMUBackgroundUploadDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_foregroundURLSession;
    NSURLSession *_backgroundURLSession;
    NSMutableDictionary *_taskIdToUpload;
    NSMutableDictionary *_taskIdToTask;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GPCPromise *_reconnectedUploadsPromise;
    GPCPromise *_completedUploadsPromise;
}

+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
@property(readonly, nonatomic) GPCPromise *completedUploadsPromise; // @synthesize completedUploadsPromise=_completedUploadsPromise;
@property(readonly, nonatomic) GPCPromise *reconnectedUploadsPromise; // @synthesize reconnectedUploadsPromise=_reconnectedUploadsPromise;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)backgroundUploadWasCancelled:(id)arg1;
- (id)uploadForTask:(id)arg1;
- (void)addUploadTask:(id)arg1 forUpload:(id)arg2;
- (void)beginChunkUploadsForUpload:(id)arg1;
- (void)addUpload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addUpload:(id)arg1;
- (void)fetchExistingBackgroundTasks;
- (id)initWithOperationQueue:(id)arg1 foregroundSession:(id)arg2 backgroundSession:(id)arg3;
- (id)initWithBackgroundSessionIdentifier:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

