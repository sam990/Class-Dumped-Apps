//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBMediaUploadMetricsBuilder.h>

@interface FBMediaStreamingUploadMetricsBuilder : FBMediaUploadMetricsBuilder
{
    unsigned int _numFileHits;
    unsigned int _numFileMisses;
    unsigned int _numGetRequests;
    unsigned int _numPostRequests;
}

- (id)build;
- (void)_finalizeCounters;
- (void)setFailedRequestType:(long long)arg1;
- (void)incrementNumPostRequests;
- (void)incrementNumGetRequests;
- (void)incrementNumServerFileMisses;
- (void)incrementNumServerFileHits;

@end

