//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCGraphVertex : NSObject <NSCopying>
{
    long long _incomingConnections;
    NSArray *_vertices;
    id _item;
    double _priorityMultiplier;
}

@property(nonatomic) double priorityMultiplier; // @synthesize priorityMultiplier=_priorityMultiplier;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *vertices;
@property(readonly, nonatomic) long long incomingConnections;
- (id)_copyWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1 incomingConnections:(long long)arg2 vertices:(id)arg3;
- (id)initWithItem:(id)arg1;
- (id)weightedCopy;

@end
