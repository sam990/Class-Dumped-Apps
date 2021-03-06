//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLoadMoreResponseType-Protocol.h>

@class NSArray, NSString;

@interface IGStoryCreativeAssetsResponse : NSObject <IGLoadMoreResponseType>
{
    _Bool _isIGTVLinkAllowed;
    _Bool _isSwipeUpLinkAllowed;
    _Bool _isAREffectLinkAllowed;
    _Bool _isProfileShopLinkAllowed;
    _Bool _isProductDetailPageLinkAllowed;
    _Bool _hasMoreShoppingLinkOptions;
    NSArray *_staticStickers;
    NSString *_versionID;
    NSArray *_stickerSets;
}

@property(readonly, nonatomic) _Bool hasMoreShoppingLinkOptions; // @synthesize hasMoreShoppingLinkOptions=_hasMoreShoppingLinkOptions;
@property(readonly, nonatomic) _Bool isProductDetailPageLinkAllowed; // @synthesize isProductDetailPageLinkAllowed=_isProductDetailPageLinkAllowed;
@property(readonly, nonatomic) _Bool isProfileShopLinkAllowed; // @synthesize isProfileShopLinkAllowed=_isProfileShopLinkAllowed;
@property(readonly, nonatomic) _Bool isAREffectLinkAllowed; // @synthesize isAREffectLinkAllowed=_isAREffectLinkAllowed;
@property(readonly, nonatomic) _Bool isSwipeUpLinkAllowed; // @synthesize isSwipeUpLinkAllowed=_isSwipeUpLinkAllowed;
@property(readonly, nonatomic) _Bool isIGTVLinkAllowed; // @synthesize isIGTVLinkAllowed=_isIGTVLinkAllowed;
@property(readonly, copy, nonatomic) NSArray *stickerSets; // @synthesize stickerSets=_stickerSets;
@property(readonly, copy, nonatomic) NSString *versionID; // @synthesize versionID=_versionID;
@property(readonly, copy, nonatomic) NSArray *staticStickers; // @synthesize staticStickers=_staticStickers;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithStaticStickers:(id)arg1 versionID:(id)arg2 stickerSets:(id)arg3 isIGTVLinkAllowed:(_Bool)arg4 isAREffectLinkAllowed:(_Bool)arg5 isSwipeUpLinkAllowed:(_Bool)arg6 isProfileShopLinkAllowed:(_Bool)arg7 isProductDetailPageLinkAllowed:(_Bool)arg8 hasMoreShoppingLinkOptions:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

