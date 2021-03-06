//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, PDFIHTTPResponse;
@protocol PDFIHTTPRequest;

@protocol PDFIHTTPDownloadEventHandler
- (void)onFailure:(id <PDFIHTTPRequest>)arg1 error:(long long)arg2 explanation:(NSString *)arg3 response:(PDFIHTTPResponse *)arg4;
- (void)onSuccess:(id <PDFIHTTPRequest>)arg1 downloadedFilePath:(NSString *)arg2;
- (void)onProgress:(id <PDFIHTTPRequest>)arg1 bytesDownloaded:(long long)arg2;
- (void)onResponse:(id <PDFIHTTPRequest>)arg1 response:(PDFIHTTPResponse *)arg2;
@end

