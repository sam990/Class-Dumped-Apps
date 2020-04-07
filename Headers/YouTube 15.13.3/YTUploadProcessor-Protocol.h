//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSError, YTUploadTask;

@protocol YTUploadProcessor <NSObject>
@property(readonly, nonatomic) NSArray *retryPattern;
@property(readonly, nonatomic) long long requirements;
@property(readonly, nonatomic) int processorType;
- (_Bool)isRetryableError:(NSError *)arg1;
- (void)cancel;
- (_Bool)canExecuteWithTask:(YTUploadTask *)arg1;
- (void)cleanupWithTask:(YTUploadTask *)arg1 undo:(_Bool)arg2 completion:(void (^)(id <YTUploadTaskEntityUpdater>, NSError *))arg3;
- (long long)requirementsForCleanupWithUndo:(_Bool)arg1;
- (void)executeWithTask:(YTUploadTask *)arg1 completion:(void (^)(id <YTUploadTaskEntityUpdater>, NSError *))arg2;
@end
