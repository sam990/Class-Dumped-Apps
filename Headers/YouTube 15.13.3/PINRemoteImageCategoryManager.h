//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINRemoteImageCategoryManager : NSObject
{
}

+ (void)setImageOnView:(id)arg1 fromURLs:(id)arg2 placeholderImage:(id)arg3 processorKey:(id)arg4 processor:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)cancelImageDownloadOnView:(id)arg1;
+ (void)setUpdateWithProgressOnView:(_Bool)arg1 onView:(id)arg2;
+ (_Bool)updateWithProgressOnView:(id)arg1;
+ (void)setDownloadImageOperationUUID:(id)arg1 onView:(id)arg2;
+ (id)downloadImageOperationUUIDOnView:(id)arg1;
+ (void)setImageOnView:(id)arg1 fromURLs:(id)arg2 placeholderImage:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setImageOnView:(id)arg1 fromURLs:(id)arg2 placeholderImage:(id)arg3;
+ (void)setImageOnView:(id)arg1 fromURLs:(id)arg2;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 placeholderImage:(id)arg3 processorKey:(id)arg4 processor:(CDUnknownBlockType)arg5;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 placeholderImage:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2 placeholderImage:(id)arg3;
+ (void)setImageOnView:(id)arg1 fromURL:(id)arg2;

@end

