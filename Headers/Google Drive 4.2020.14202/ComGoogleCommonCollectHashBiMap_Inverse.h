//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_IteratorBasedAbstractMap.h"

#import "ComGoogleCommonCollectBiMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@class ComGoogleCommonCollectHashBiMap, NSString;

@interface ComGoogleCommonCollectHashBiMap_Inverse : ComGoogleCommonCollectMaps_IteratorBasedAbstractMap <ComGoogleCommonCollectBiMap, JavaIoSerializable>
{
    ComGoogleCommonCollectHashBiMap *this$0_;
}

- (void)dealloc;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entryIterator;
- (id)values;
- (id)keySet;
- (id)inverse;
- (id)removeWithId:(id)arg1;
- (id)forcePutWithId:(id)arg1 withId:(id)arg2;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (void)clear;
- (int)size;
- (id)forward;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

