//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionUploadTask;

@interface YTEditUploadThumbnailPending : NSObject
{
    NSURLSessionUploadTask *_task;
    unsigned long long _countOfBytesExpectedToSend;
}

@property(nonatomic) unsigned long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property(retain, nonatomic) NSURLSessionUploadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;

@end

