//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTAdsBaseEntity, SPTAdsBaseRegistryObserver;

@protocol SPTAdsBaseRegistry <NSObject>
@property(readonly, copy, nonatomic) NSArray *availableEntities;
- (void)discardAd:(id <SPTAdsBaseEntity>)arg1;
- (void)removeObserver:(id <SPTAdsBaseRegistryObserver>)arg1;
- (void)addObserver:(id <SPTAdsBaseRegistryObserver>)arg1;
@end
