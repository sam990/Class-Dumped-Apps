//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURLRequest, YYImageCache;

@protocol YYWebImageOperation <NSObject>
- (void)start;
- (id)initWithRequest:(NSURLRequest *)arg1 options:(unsigned long long)arg2 cache:(YYImageCache *)arg3 cacheKey:(NSString *)arg4 progress:(void (^)(long long, long long))arg5 transform:(UIImage * (^)(UIImage *, NSURL *))arg6 completion:(void (^)(UIImage *, NSURL *, unsigned long long, long long, NSError *))arg7;
@end
