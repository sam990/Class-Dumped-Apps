//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKNHTTPRequestDelegate-Protocol.h"
#import "GCKUIImageCache-Protocol.h"

@class GCKNHTTPClient, NSCache, NSMutableDictionary, NSString, NSURL;

@interface GCKUIDefaultImageCache : NSObject <GCKNHTTPRequestDelegate, GCKUIImageCache>
{
    NSMutableDictionary *_requests;
    NSMutableDictionary *_requestsByURL;
    GCKNHTTPClient *_httpClient;
    NSCache *_memoryCache;
    NSURL *_cacheDirectoryURL;
}

- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2;
- (id)removeFetchRequestForIdentifier:(unsigned long long)arg1;
- (void)fetchImageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long maxResponseSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

