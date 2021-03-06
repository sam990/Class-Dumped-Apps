//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL;

@interface HTTPMultipartUpload : NSObject
{
    NSURL *url_;
    NSDictionary *parameters_;
    NSMutableDictionary *files_;
    NSString *boundary_;
    NSHTTPURLResponse *response_;
    NSString *reportName_;
}

- (id)response;
- (id)send:(id *)arg1 timeoutInterval:(double)arg2;
- (id)send:(id *)arg1;
- (id)files;
- (void)addFileUploadAttachment:(id)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void)setReportName:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)formDataForFileUploadAttachment:(id)arg1;
- (id)formDataForKey:(id)arg1 value:(id)arg2;
- (id)multipartBoundary;

@end

