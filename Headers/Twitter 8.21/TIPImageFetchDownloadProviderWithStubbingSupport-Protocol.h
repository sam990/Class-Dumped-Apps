//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPImageFetchDownloadProvider-Protocol.h>

@class NSData, NSString, NSURL;

@protocol TIPImageFetchDownloadProviderWithStubbingSupport <TIPImageFetchDownloadProvider>
@property(nonatomic) _Bool downloadStubbingEnabled;
- (void)removeAllDownloadStubs;
- (void)removeDownloadStubForRequestURL:(NSURL *)arg1;
- (void)addDownloadStubForRequestURL:(NSURL *)arg1 responseData:(NSData *)arg2 responseMIMEType:(NSString *)arg3 shouldSupportResuming:(_Bool)arg4 suggestedBitrate:(unsigned long long)arg5;
@end

