//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YTLCMovieSequence : NSObject
{
    NSArray *_assetURLs;
}

@property(readonly, nonatomic) NSArray *assetURLs; // @synthesize assetURLs=_assetURLs;
- (void).cxx_destruct;
- (long long)totalBytes;
- (int)overallDurationMilliseconds;
- (id)initWithAssetURLs:(id)arg1;

@end
