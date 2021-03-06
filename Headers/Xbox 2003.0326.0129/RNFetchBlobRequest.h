//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSDictionary, NSError, NSMutableArray, NSMutableData, NSOutputStream, NSString, NSURLSessionDataTask, RCTBridge, RNFetchBlobProgress;

@interface RNFetchBlobRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool respFile;
    _Bool isNewPart;
    _Bool isIncrement;
    NSMutableData *partBuffer;
    NSString *destPath;
    NSOutputStream *writeStream;
    long long bodyLength;
    long long respStatus;
    NSMutableArray *redirects;
    unsigned long long responseFormat;
    _Bool followRedirect;
    _Bool backgroundTask;
    _Bool _isServerPush;
    NSString *taskId;
    long long expectedBytes;
    long long receivedBytes;
    NSMutableData *respData;
    CDUnknownBlockType callback;
    RCTBridge *bridge;
    NSDictionary *options;
    NSError *error;
    RNFetchBlobProgress *_progressConfig;
    RNFetchBlobProgress *_uploadProgressConfig;
    NSURLSessionDataTask *_task;
}

@property(nonatomic) __weak NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) RNFetchBlobProgress *uploadProgressConfig; // @synthesize uploadProgressConfig=_uploadProgressConfig;
@property(retain, nonatomic) RNFetchBlobProgress *progressConfig; // @synthesize progressConfig=_progressConfig;
@property(nonatomic) _Bool isServerPush; // @synthesize isServerPush=_isServerPush;
@property(retain, nonatomic) NSError *error; // @synthesize error;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options;
@property(retain, nonatomic) RCTBridge *bridge; // @synthesize bridge;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback;
@property(retain, nonatomic) NSMutableData *respData; // @synthesize respData;
@property(nonatomic) long long receivedBytes; // @synthesize receivedBytes;
@property(nonatomic) long long expectedBytes; // @synthesize expectedBytes;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 contentLength:(long long)arg2 bridge:(id)arg3 taskId:(id)arg4 withRequest:(id)arg5 taskOperationQueue:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (id)md5:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

