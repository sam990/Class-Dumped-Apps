//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

#import "NFUILolomoListItemViewModel-Protocol.h"

@class LolomoViewConfig, NFUILolomoEntity, NFUILolomoListIdentity, NSIndexPath, PlaybackSourceModel;

@interface NFUILolomoListItemViewModel : NFLXGeneratedObject <NFUILolomoListItemViewModel>
{
    _Bool forceHorizontal;
    _Bool impressionRecorded;
    NSIndexPath *indexPath;
    long long timesRendered;
    PlaybackSourceModel *entityPlaybackSource;
    NFUILolomoEntity *entity;
    NFUILolomoListIdentity *listIdentity;
    long long itemIndex;
    LolomoViewConfig *config;
}

@property(nonatomic) LolomoViewConfig *config; // @synthesize config;
@property(nonatomic) long long itemIndex; // @synthesize itemIndex;
@property(retain, nonatomic) NFUILolomoListIdentity *listIdentity; // @synthesize listIdentity;
@property(retain, nonatomic) NFUILolomoEntity *entity; // @synthesize entity;
@property(retain, nonatomic) PlaybackSourceModel *entityPlaybackSource; // @synthesize entityPlaybackSource;
@property(nonatomic) _Bool impressionRecorded; // @synthesize impressionRecorded;
@property(nonatomic) long long timesRendered; // @synthesize timesRendered;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath;
@property(nonatomic) _Bool forceHorizontal; // @synthesize forceHorizontal;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)resetPresentationImageData;
- (void)renewEntity;
- (void)cleanupEntity;
- (id)description;
- (id)playSourceModel;
- (void)setupWithEntity:(id)arg1 listIdentity:(id)arg2 lolomoConfig:(id)arg3 itemIndex:(long long)arg4;

@end

