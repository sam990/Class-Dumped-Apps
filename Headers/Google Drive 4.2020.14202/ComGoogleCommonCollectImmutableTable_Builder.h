//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilComparator, JavaUtilList;

@interface ComGoogleCommonCollectImmutableTable_Builder : NSObject
{
    id <JavaUtilList> cells_;
    id <JavaUtilComparator> rowComparator_;
    id <JavaUtilComparator> columnComparator_;
}

- (void)dealloc;
- (id)build;
- (id)combineWithComGoogleCommonCollectImmutableTable_Builder:(id)arg1;
- (id)putAllWithComGoogleCommonCollectTable:(id)arg1;
- (id)putWithComGoogleCommonCollectTable_Cell:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (id)orderColumnsByWithJavaUtilComparator:(id)arg1;
- (id)orderRowsByWithJavaUtilComparator:(id)arg1;
- (id)init;

@end

