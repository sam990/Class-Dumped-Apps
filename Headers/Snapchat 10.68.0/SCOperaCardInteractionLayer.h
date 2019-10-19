//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSDictionary, NSNumber, NSString, SCOperaPage;

@interface SCOperaCardInteractionLayer : NSObject <SCOperaLayer>
{
    NSString *_appIconImageKey;
    NSString *_customUserAgent;
    NSString *_subtitle;
    NSString *_title;
    NSString *_uri;
    SCOperaPage *_page;
    NSNumber *_cardDeepLinkDelaySeconds;
    long long _deepLinkFallbackType;
    NSDictionary *_deepLinkAppInstallFallbackStoreParams;
    double _liveAreaRatioXInset;
    double _liveAreaRatioYInset;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) double liveAreaRatioYInset; // @synthesize liveAreaRatioYInset=_liveAreaRatioYInset;
@property(nonatomic) double liveAreaRatioXInset; // @synthesize liveAreaRatioXInset=_liveAreaRatioXInset;
@property(readonly, copy, nonatomic) NSDictionary *deepLinkAppInstallFallbackStoreParams; // @synthesize deepLinkAppInstallFallbackStoreParams=_deepLinkAppInstallFallbackStoreParams;
@property(readonly, nonatomic) long long deepLinkFallbackType; // @synthesize deepLinkFallbackType=_deepLinkFallbackType;
@property(readonly, nonatomic) NSNumber *cardDeepLinkDelaySeconds; // @synthesize cardDeepLinkDelaySeconds=_cardDeepLinkDelaySeconds;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(readonly, copy, nonatomic) NSString *appIconImageKey; // @synthesize appIconImageKey=_appIconImageKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
