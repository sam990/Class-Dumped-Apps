//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMMSMediaDownloadOperationDelegate-Protocol.h"
#import "WAMediaDownloadOperationHandlerDelegate-Protocol.h"

@class WAChatStorage, WAMMSTaskSession, WAMMSTaskSessionV4, WAMediaDownloadOperationHandler, WANetworkUsageManager, WANetworkUsageMetricsManager;
@protocol OS_dispatch_queue, WARegularMediaDownloadManagerDelegate;

@interface WARegularMediaDownloadManager : NSObject <WAMMSMediaDownloadOperationDelegate, WAMediaDownloadOperationHandlerDelegate>
{
    WAChatStorage *_chatStorage;
    WAMMSTaskSessionV4 *_taskSessionV4;
    WAMMSTaskSession *_taskSessionV3;
    WANetworkUsageManager *_networkUsageManager;
    WANetworkUsageMetricsManager *_networkUsageMetricsManager;
    id <WARegularMediaDownloadManagerDelegate> _delegate;
    WAMediaDownloadOperationHandler *_operationHandler;
    NSObject<OS_dispatch_queue> *_downloadDelegateQueue;
}

- (void).cxx_destruct;
- (id)operationHandler:(id)arg1 needsKeyForDownloadOperation:(id)arg2;
- (void)downloadTask:(id)arg1 populatedDownloadEvent:(id)arg2 shouldSubmit:(_Bool)arg3 isRetry:(_Bool)arg4;
- (void)processMediaAsset:(id)arg1 forDownloadTask:(id)arg2 error:(id)arg3 bytesTransferred:(unsigned long long)arg4 messageHandlingBlock:(CDUnknownBlockType)arg5;
- (void)downloadTask:(id)arg1 didFinishWithFullMediaAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4 bytesTransferred:(unsigned long long)arg5;
- (void)downloadTask:(id)arg1 didFinishWithThumbnailAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4 bytesTransferred:(unsigned long long)arg5;
- (void)downloadTask:(id)arg1 didFinishWithAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4 bytesTransferred:(unsigned long long)arg5;
- (void)downloadTask:(id)arg1 assetForDecryptedFile:(CDUnknownBlockType)arg2;
- (void)prepareThumbnailAssetForDownloadTask:(id)arg1;
- (void)downloadTaskDidDecryptPartialMedia:(id)arg1;
- (void)downloadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)endSuspendingDownloadsForReason:(unsigned long long)arg1;
- (void)beginSuspendingDownloadsForReason:(unsigned long long)arg1;
- (_Bool)isDownloadingMediaInMessage:(id)arg1;
- (float)progressOfMediaDownloadForMessage:(id)arg1;
- (void)cancelAllDownloads;
- (void)mergeContentExtensionPartialDownloadAfterCancellationWithEncHash:(id)arg1 andTemporaryMediaPath:(id)arg2;
- (void)mergeContentExtensionPartialDownloadForMessage:(id)arg1 withTemporaryMediaPath:(id)arg2;
- (void)mergeContentExtensionDownloadForMessage:(id)arg1 withTemporaryMediaPath:(id)arg2;
- (void)cancelMediaDownloadForMessageUniqueKey:(id)arg1 fileHash:(id)arg2 userInitiated:(_Bool)arg3 onlyIfWaiting:(_Bool)arg4 fireDelegateCallback:(_Bool)arg5;
- (void)cancelMediaDownloadForMessage:(id)arg1 userInitiated:(_Bool)arg2 onlyIfWaiting:(_Bool)arg3;
- (void)cancelMediaDownloadForMessage:(id)arg1 userInitiated:(_Bool)arg2;
- (void)queueMediaDownloadForMessage:(id)arg1 autoDownload:(_Bool)arg2 requestLengthType:(long long)arg3 policy:(id)arg4;
- (id)initWithChatStorage:(id)arg1 mmsTaskSessionV4:(id)arg2 mmsTaskSessionV3:(id)arg3 networkUsageManager:(id)arg4 networkUsageMetricsManager:(id)arg5 delegate:(id)arg6;

@end

