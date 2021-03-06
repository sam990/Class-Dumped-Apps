//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGImageEncoding, NSDictionary, NSError, NSURL;
@protocol IGUploadTaskType;

@protocol IGUploadTaskListener <NSObject>
- (void)videoUploadTask:(id <IGUploadTaskType>)arg1 didUpdateWithRenderedVideoUrl:(NSURL *)arg2;
- (void)videoUploadTask:(id <IGUploadTaskType>)arg1 didUpdateWithVideoCoverImageEncoding:(IGImageEncoding *)arg2;
- (void)imageUploadTask:(id <IGUploadTaskType>)arg1 didUpdateWithRenderedImageEncoding:(IGImageEncoding *)arg2;
- (void)uploadTaskDidCancel:(id <IGUploadTaskType>)arg1;
- (void)uploadTask:(id <IGUploadTaskType>)arg1 didCompleteWithResponse:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)uploadTask:(id <IGUploadTaskType>)arg1 didUpdateToProgress:(double)arg2;
@end

