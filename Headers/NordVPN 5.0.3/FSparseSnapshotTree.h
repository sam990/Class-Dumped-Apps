//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol FNode;

@interface FSparseSnapshotTree : NSObject
{
    id <FNode> value;
    NSMutableDictionary *children;
}

- (void).cxx_destruct;
- (void)forEachChild:(CDUnknownBlockType)arg1;
- (void)forEachTreeAtPath:(id)arg1 do:(CDUnknownBlockType)arg2;
- (_Bool)forgetPath:(id)arg1;
- (void)rememberData:(id)arg1 onPath:(id)arg2;
- (id)findPath:(id)arg1;
- (id)init;

@end
