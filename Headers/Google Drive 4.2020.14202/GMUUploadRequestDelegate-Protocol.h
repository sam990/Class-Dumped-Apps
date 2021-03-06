//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMUUploadRequestItemStateProvider-Protocol.h"

@class GMUAssetFingerprint, GMUFingerprint, NSError, NSString, PhotosMCMediaItem;
@protocol GMUUpload;

@protocol GMUUploadRequestDelegate <GMUUploadRequestItemStateProvider>
- (_Bool)uploadRequest:(id <GMUUpload>)arg1 shouldUploadFingerprint:(GMUAssetFingerprint *)arg2;
- (void)uploadRequestDidProgress:(id <GMUUpload>)arg1;
- (void)uploadRequest:(id <GMUUpload>)arg1 didCompleteWithError:(NSError *)arg2 resultantMediaItem:(PhotosMCMediaItem *)arg3;

@optional
- (void)uploadRequest:(id <GMUUpload>)arg1 didDiscoverFingerprintExists:(GMUFingerprint *)arg2 mediaKey:(NSString *)arg3;
- (NSString *)uploadRequest:(id <GMUUpload>)arg1 mediaKeyForFingerprint:(GMUFingerprint *)arg2;
- (void)uploadRequestDidBeginUploading:(id <GMUUpload>)arg1;
@end

