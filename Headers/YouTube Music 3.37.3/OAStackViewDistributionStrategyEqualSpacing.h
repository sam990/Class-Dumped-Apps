//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackViewDistributionStrategy.h"

@class NSMutableArray;

@interface OAStackViewDistributionStrategyEqualSpacing : OAStackViewDistributionStrategy
{
    NSMutableArray *_equalSpacingLayoutGuides;
}

@property(retain, nonatomic) NSMutableArray *equalSpacingLayoutGuides; // @synthesize equalSpacingLayoutGuides=_equalSpacingLayoutGuides;
- (void).cxx_destruct;
- (void)removeAddedConstraints;
- (void)alignMiddleView:(id)arg1 afterView:(id)arg2;
- (id)symbolicSpacingRelation;
- (long long)spanningAttributeForAxis:(long long)arg1 isInitialEdge:(_Bool)arg2;

@end
