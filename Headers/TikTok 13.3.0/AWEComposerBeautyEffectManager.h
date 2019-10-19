//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEComposerBeautyEffectManager : NSObject
{
    _Bool _needUpdate;
    _Bool _isRequestOnAir;
    NSArray *_currentEffects;
    NSString *_panelName;
    NSString *_categoryKey;
    NSArray *_updatedEffects;
    NSArray *_cachedEffects;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSArray *cachedEffects; // @synthesize cachedEffects=_cachedEffects;
@property(retain, nonatomic) NSArray *updatedEffects; // @synthesize updatedEffects=_updatedEffects;
@property(readonly, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
@property(readonly, nonatomic) NSString *panelName; // @synthesize panelName=_panelName;
@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(retain, nonatomic) NSArray *currentEffects; // @synthesize currentEffects=_currentEffects;
- (void).cxx_destruct;
- (void)downloadEffects:(id)arg1;
- (_Bool)effectsAllDownloaded:(id)arg1;
- (id)selectEffects:(id)arg1 forGroup:(long long)arg2;
- (void)updateEffectsWithResponse:(id)arg1;
- (void)loadCachedEffectsWithResponse:(id)arg1;
- (id)effectsWithResponse:(id)arg1;
- (void)snapshot;
- (void)updateEffects;
- (void)setRatio:(float)arg1 forEffect:(id)arg2;
- (float)ratioForEffect:(id)arg1;
- (void)setRatio:(float)arg1 forTag:(id)arg2;
- (float)ratioForTag:(id)arg1;
- (id)init;

@end
