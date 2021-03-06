//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchCache, IGSearchClientSideCachingConfiguration, NSString;

@interface IGSearchServerResultsStore : NSObject
{
    IGSearchCache *_searchCache;
    IGSearchClientSideCachingConfiguration *_cachingConfiguration;
    NSString *_lastQuery;
    NSString *_currentQuery;
}

- (void).cxx_destruct;
- (void)invalidateSearchCache;
- (_Bool)clearLocalResultsIfPossibleForQuery:(id)arg1;
- (void)setResults:(id)arg1 query:(id)arg2 contentInformModule:(id)arg3 rankToken:(id)arg4 cursor:(id)arg5 hasMoreResults:(_Bool)arg6;
- (id)setCurrentQuery:(id)arg1;
- (id)initWithCachingConfiguration:(id)arg1;

@end

