//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWRemoteIndex;

__attribute__((visibility("hidden")))
@interface TWSearchClient : NSObject
{
    TWRemoteIndex *_channelRemoteIndex;
    TWRemoteIndex *_gameRemoteIndex;
}

- (void).cxx_destruct;
- (id)searchGameForQuery:(id)arg1 hitsPerPage:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (id)searchChannelsForQuery:(id)arg1 hitsPerPage:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (id)init;

@end

