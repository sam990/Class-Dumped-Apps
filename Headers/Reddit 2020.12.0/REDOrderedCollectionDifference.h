//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface REDOrderedCollectionDifference : NSObject
{
    _Bool _hasChanges;
    NSArray *_insertions;
    NSArray *_removals;
}

@property(readonly) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(readonly) NSArray *removals; // @synthesize removals=_removals;
@property(readonly) NSArray *insertions; // @synthesize insertions=_insertions;
- (void).cxx_destruct;
- (_Bool)isEqualToNSOrderedCollectionDifference:(id)arg1;
- (id)initWithRemovals:(id)arg1 insertions:(id)arg2;

@end

