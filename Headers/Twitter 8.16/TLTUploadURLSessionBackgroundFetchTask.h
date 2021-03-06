//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLifecycleTools/TLTURLSessionBackgroundSessionTask.h>

@class NSURL, NSURLRequest;

@interface TLTUploadURLSessionBackgroundFetchTask : TLTURLSessionBackgroundSessionTask
{
    NSURLRequest *_request;
    NSURL *_sourceFileURL;
}

@property(readonly, nonatomic) NSURL *sourceFileURL; // @synthesize sourceFileURL=_sourceFileURL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)URLSessionUploadTaskDidComplete:(id)arg1 withData:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)URLSessionTaskDidComplete:(id)arg1 withData:(id)arg2 temporaryFileURL:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithURLRequest:(id)arg1 sourceFileURL:(id)arg2 identifier:(id)arg3 supportsBackgroundURLSession:(_Bool)arg4;

@end

