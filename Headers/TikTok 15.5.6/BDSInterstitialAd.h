//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDSInterstitialAdProtocol-Protocol.h"

@class NSDictionary, NSNumber, NSString;
@protocol BDSAdBidProtocol;

@interface BDSInterstitialAd : NSObject <BDSInterstitialAdProtocol>
{
    id _adEntity;
    NSString *_bds_placement;
    NSString *_bds_placementPrefix;
    NSString *_bds_placementSeed;
    NSString *_bds_testKey;
    NSNumber *_bds_provider;
    NSString *_bds_source;
    id <BDSAdBidProtocol> _bds_adBid;
    NSDictionary *_bds_userInfo;
    double _bds_createTime;
    double _bds_validInterval;
    CDUnknownBlockType _bds_stateObserver;
    CDUnknownBlockType _loadHandler;
}

@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(copy, nonatomic) CDUnknownBlockType bds_stateObserver; // @synthesize bds_stateObserver=_bds_stateObserver;
@property(nonatomic) double bds_validInterval; // @synthesize bds_validInterval=_bds_validInterval;
@property(nonatomic) double bds_createTime; // @synthesize bds_createTime=_bds_createTime;
@property(retain, nonatomic) NSDictionary *bds_userInfo; // @synthesize bds_userInfo=_bds_userInfo;
@property(retain, nonatomic) id <BDSAdBidProtocol> bds_adBid; // @synthesize bds_adBid=_bds_adBid;
@property(copy, nonatomic) NSString *bds_source; // @synthesize bds_source=_bds_source;
@property(retain, nonatomic) NSNumber *bds_provider; // @synthesize bds_provider=_bds_provider;
@property(copy, nonatomic) NSString *bds_testKey; // @synthesize bds_testKey=_bds_testKey;
@property(copy, nonatomic) NSString *bds_placementSeed; // @synthesize bds_placementSeed=_bds_placementSeed;
@property(copy, nonatomic) NSString *bds_placementPrefix; // @synthesize bds_placementPrefix=_bds_placementPrefix;
@property(copy, nonatomic) NSString *bds_placement; // @synthesize bds_placement=_bds_placement;
@property(retain, nonatomic) id adEntity; // @synthesize adEntity=_adEntity;
- (void).cxx_destruct;
- (void)notifyLoss;
- (void)notifyWin;
- (_Bool)showAdFromViewController:(id)arg1;
- (id)bds_uploadMaterial;
- (id)bds_eventDictionary;
- (void)loadRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

