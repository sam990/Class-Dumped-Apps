//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCacheForwardingCache.h"

@protocol ComGoogleCommonCacheCache;

@interface ComGoogleCommonCacheForwardingCache_SimpleForwardingCache : ComGoogleCommonCacheForwardingCache
{
    id <ComGoogleCommonCacheCache> delegate_;
}

- (void)dealloc;
- (id)delegate;
- (id)initWithComGoogleCommonCacheCache:(id)arg1;

@end

