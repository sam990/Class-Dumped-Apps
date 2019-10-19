//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIndex-Protocol.h"

@class FNamedNode, NSString;

@interface FKeyIndex : NSObject <FIndex>
{
    FNamedNode *_maxPost;
}

+ (id)keyIndex;
@property(retain, nonatomic) FNamedNode *maxPost; // @synthesize maxPost=_maxPost;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)queryDefinition;
- (id)makePost:(id)arg1 name:(id)arg2;
- (id)minPost;
- (_Bool)indexedValueChangedBetween:(id)arg1 and:(id)arg2;
- (_Bool)isDefinedOn:(id)arg1;
- (long long)compareNamedNode:(id)arg1 toNamedNode:(id)arg2;
- (long long)compareKey:(id)arg1 andNode:(id)arg2 toOtherKey:(id)arg3 andNode:(id)arg4 reverse:(_Bool)arg5;
- (long long)compareKey:(id)arg1 andNode:(id)arg2 toOtherKey:(id)arg3 andNode:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
