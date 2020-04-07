//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <Module_Framework/GTMLogWriter-Protocol.h>

@class NSString;

@interface NSArray (Functional) <GTMLogWriter>
+ (id)arrayWithContentsOfData:(id)arg1 error:(id *)arg2;
+ (id)arrayWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)arrayByTransferring:(id *)arg1 count:(unsigned long long)arg2;
+ (CDUnknownBlockType)defaultCompareBlock;
- (id)gsc_foldLeft:(CDUnknownBlockType)arg1 initialValue:(id)arg2;
- (id)gsc_find:(CDUnknownBlockType)arg1;
- (id)gsc_pluck:(id)arg1;
- (id)gsc_filter:(CDUnknownBlockType)arg1;
- (id)gsc_map:(CDUnknownBlockType)arg1;
- (id)goo_filteredArrayUsingPredicate:(CDUnknownBlockType)arg1;
- (id)goo_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (id)ych_randomlySlicedArrayWithMaxSlices:(long long)arg1 minSize:(long long)arg2 maxSize:(long long)arg3;
- (id)nb_safeDataAtIndex:(unsigned long long)arg1;
- (id)nb_safeArrayAtIndex:(unsigned long long)arg1;
- (id)nb_safeNumberAtIndex:(unsigned long long)arg1;
- (id)nb_safeStringAtIndex:(unsigned long long)arg1;
- (id)nb_safeObjectAtIndex:(unsigned long long)arg1 class:(Class)arg2;
- (_Bool)grw_containsAllObjectsInArray:(id)arg1;
- (id)grw_filterUsingBlock:(CDUnknownBlockType)arg1;
- (id)yt_flattenEntries;
- (id)yt_deepCopy;
- (id)_asdk_commonIndexesWithArray:(id)arg1 compareBlock:(CDUnknownBlockType)arg2;
- (void)asdk_diffWithArray:(id)arg1 insertions:(id *)arg2 deletions:(id *)arg3 moves:(id *)arg4 compareBlock:(CDUnknownBlockType)arg5;
- (void)asdk_diffWithArray:(id)arg1 insertions:(id *)arg2 deletions:(id *)arg3 moves:(id *)arg4;
- (void)asdk_diffWithArray:(id)arg1 insertions:(id *)arg2 deletions:(id *)arg3 compareBlock:(CDUnknownBlockType)arg4;
- (void)asdk_diffWithArray:(id)arg1 insertions:(id *)arg2 deletions:(id *)arg3;
- (void)yt_enumerateObjectsAndNextUsingBlock:(CDUnknownBlockType)arg1;
- (id)yt_sortedSizesByWidthAscending:(_Bool)arg1;
- (id)mdf_sortArray:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)mdf_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)mdf_anyObjectPassesTest:(CDUnknownBlockType)arg1;
- (id)mdf_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (void)logMessage:(id)arg1 level:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
