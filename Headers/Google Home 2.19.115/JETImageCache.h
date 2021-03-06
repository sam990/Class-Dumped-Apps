//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPLRUCache, GTMSessionFetcherService, NSMutableDictionary;

@interface JETImageCache : NSObject
{
    double _imageDownloadTimeoutSeconds;
    GIPLRUCache *_imageCache;
    NSMutableDictionary *_callbacks;
    GTMSessionFetcherService *_fetcherService;
}

@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) GIPLRUCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) double imageDownloadTimeoutSeconds; // @synthesize imageDownloadTimeoutSeconds=_imageDownloadTimeoutSeconds;
- (void).cxx_destruct;
- (void)lowMemoryWarning:(id)arg1;
- (void)imageDidFail:(id)arg1;
- (void)imageDidLoad:(id)arg1;
- (id)keyForImageURL:(id)arg1;
- (void)fetchImageForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned long long)arg1 downloadTimeoutSeconds:(double)arg2;

@end

