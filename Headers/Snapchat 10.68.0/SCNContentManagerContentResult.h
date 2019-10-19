//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerContentResult-Protocol.h"

@class NSDictionary, NSString, SCNContentManagerContentKey, SCNContentManagerContentRetrievalMetrics;
@protocol SCNContentManagerReadStream;

@interface SCNContentManagerContentResult : NSObject <SCNContentManagerContentResult>
{
    SCNContentManagerContentKey *_contentKey;
    long long _status;
    NSString *_statusMessage;
    id <SCNContentManagerReadStream> _readStream;
    SCNContentManagerContentRetrievalMetrics *_metrics;
    long long _errorReason;
    _Bool _isStreaming;
    _Bool _isZipArchive;
    NSDictionary *_zipEntryData;
    unsigned long long _contentLength;
    id <SCNContentManagerReadStream> _zipArchiveLocalContent;
}

- (void).cxx_destruct;
- (id)getFilePath;
- (id)getZipArchiveForLocalContent;
- (id)getZipEntryData:(id)arg1;
- (_Bool)getIsZipArchive;
- (void)free;
- (_Bool)getIsStreaming;
- (id)getNetworkStats;
- (long long)getErrorReason;
- (id)getMetrics;
- (id)createReadStream;
- (id)getStatusMessage;
- (long long)getStatus;
- (id)getContentKey;
- (void)cancelWriteStreamRequest:(id)arg1;
- (id)pushBytesToWriteStream:(id)arg1 start:(long long)arg2 count:(long long)arg3;
- (long long)getTotalSize;
- (id)initWithContentKey:(id)arg1 status:(long long)arg2 statusMessage:(id)arg3 readStream:(id)arg4 isStreaming:(_Bool)arg5 isZipArchive:(_Bool)arg6 metrics:(id)arg7 errorReason:(long long)arg8 zipEntryData:(id)arg9 contentLength:(unsigned long long)arg10 zipArchiveLocalContent:(id)arg11;

@end
