//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSString, NSURLResponse;

@interface LLVideoPlayerCacheFile : NSObject
{
    unsigned long long _fileLength;
    void *_fileDataPtr;
    _Bool _complete;
    NSString *_cacheFilePath;
    NSString *_indexFilePath;
    NSDictionary *_allHeaderFields;
    NSLock *_lock;
    NSURLResponse *_response;
    NSMutableArray *_ranges;
}

+ (id)cacheFilePathWithURL:(id)arg1;
+ (id)cacheDirectory;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *allHeaderFields; // @synthesize allHeaderFields=_allHeaderFields;
@property(retain, nonatomic) NSString *indexFilePath; // @synthesize indexFilePath=_indexFilePath;
@property(retain, nonatomic) NSString *cacheFilePath; // @synthesize cacheFilePath=_cacheFilePath;
@property(readonly, nonatomic) unsigned long long fileLength; // @synthesize fileLength=_fileLength;
- (void).cxx_destruct;
- (id)cachedRanges;
- (_Bool)isComplete;
- (void)synchronize;
- (void)enumerateRangesWithRequestRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)constructURLResponseForURL:(id)arg1 andRange:(struct _NSRange)arg2;
- (void)receiveResponse:(id)arg1;
- (_Bool)gotFileLength:(unsigned long long)arg1;
- (void)writeData:(id)arg1 atOffset:(unsigned long long)arg2;
- (id)dataWithRange:(struct _NSRange)arg1;
- (struct _NSRange)cachedRangeForRange:(struct _NSRange)arg1;
- (void)addRange:(struct _NSRange)arg1;
- (_Bool)saveIndexFile;
- (_Bool)tryloadCacheFile;
- (void)loadCacheFile;
- (void)checkComplete;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (long long)_inc_priv_refcount:(long long)arg1;
- (void)set_priv_refcount:(long long)arg1;
- (long long)_priv_refcount;

@end

