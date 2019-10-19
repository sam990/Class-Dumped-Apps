//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEShareAweme-Protocol.h"
#import "AWEShareChallenge-Protocol.h"
#import "AWEShareCommon-Protocol.h"
#import "AWEShareCore-Protocol.h"
#import "AWEShareECommerce-Protocol.h"
#import "AWEShareFactory-Protocol.h"
#import "AWEShareImageAweme-Protocol.h"
#import "AWEShareIronMan-Protocol.h"
#import "AWEShareLegacy-Protocol.h"
#import "AWEShareLive-Protocol.h"
#import "AWEShareLuckyCat-Protocol.h"
#import "AWEShareMixVideo-Protocol.h"
#import "AWEShareMusic-Protocol.h"
#import "AWESharePOI-Protocol.h"
#import "AWESharePrivate-Protocol.h"
#import "AWEShareSearch-Protocol.h"
#import "AWEShareSticker-Protocol.h"
#import "AWEShareTracking-Protocol.h"
#import "AWEShareUser-Protocol.h"
#import "AWEShareUtility-Protocol.h"
#import "AWEShareWeb-Protocol.h"
#import "AWEShareWebView-Protocol.h"
#import "HTSShareMessage-Protocol.h"

@class AWEAwemeShareViewController, AWEShareContext, AWEShareTask, NSString;

@interface AWEShareService : HTSService <AWEShareAweme, AWEShareWeb, AWEShareFactory, AWEShareChallenge, AWEShareCommon, AWEShareECommerce, AWEShareImageAweme, AWEShareIronMan, AWEShareLive, AWEShareLuckyCat, AWEShareMixVideo, AWEShareMusic, AWESharePOI, AWESharePrivate, AWEShareSearch, AWEShareSticker, AWEShareTracking, AWEShareUser, AWEShareUtility, AWEShareWebView, HTSShareMessage, AWEShareCore, AWEShareLegacy>
{
    AWEShareContext *_context;
    CDUnknownBlockType _generalChannelFilter;
    CDUnknownBlockType _prepareBlock;
    AWEShareTask *_currentTask;
    AWEAwemeShareViewController *_shareController;
}

+ (void)shortenShareLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)shouldShortenShareURLWithShareType:(long long)arg1;
+ (void)shareByType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)shareWithContext:(id)arg1 type:(long long)arg2 prepare:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)shareItemImageForType:(long long)arg1;
+ (id)sharePlatformForType:(long long)arg1;
+ (long long)typeForLabel:(id)arg1;
+ (id)labelForType:(long long)arg1;
+ (_Bool)shouldDisableTencentSDKShareWithShareType:(long long)arg1 targetType:(unsigned long long)arg2 awemeMediaType:(long long)arg3;
+ (_Bool)is3rdPartyPlatform:(long long)arg1;
+ (_Bool)shareZaloAvailable;
+ (_Bool)shareSinaWeiboAvailable;
+ (_Bool)shareQQAvailable;
+ (_Bool)shareWeChatAvailable;
+ (void)initialize;
+ (void)dislikeAweme:(id)arg1;
+ (id)channelForType:(id)arg1 matchingMask:(unsigned long long)arg2;
+ (id)channelsMatchingMask:(unsigned long long)arg1;
+ (void)registerChannelClass:(Class)arg1 forTypes:(id)arg2 withMask:(unsigned long long)arg3;
+ (void)registerChannelClass:(Class)arg1 forType:(id)arg2 withMask:(unsigned long long)arg3;
+ (void)registerChannelsOnce;
+ (id)channelRegistry;
+ (void)trackWatermarkShareDownloadEventWithAweme:(id)arg1 platform:(id)arg2 enterFrom:(id)arg3 actionType:(id)arg4 downloadURLs:(id)arg5 hasWatermark:(_Bool)arg6 hasEndWatermark:(_Bool)arg7;
+ (void)trackShareSuccessEventWithContext:(id)arg1 platform:(id)arg2 toUserID:(id)arg3;
+ (void)showNoAlbumPermissionAlertWithCancelHandler:(CDUnknownBlockType)arg1 confirmHandler:(CDUnknownBlockType)arg2;
+ (void)setIMShareWebViewModelWithWebViewModel:(id)arg1;
+ (id)shareTextByTruncatingText:(id)arg1 withMaxLength:(unsigned long long)arg2;
+ (_Bool)shouldShowShareWithWebURL:(id)arg1;
+ (_Bool)shouldPrepareURLForChannelWithType:(id)arg1;
+ (_Bool)openAppWithPlatform:(long long)arg1;
+ (_Bool)isPlatformAvailable:(long long)arg1;
+ (void)debugCheckProtocolImplementationsArePresent;
@property(nonatomic) __weak AWEAwemeShareViewController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) AWEShareTask *currentTask; // @synthesize currentTask=_currentTask;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(copy, nonatomic) CDUnknownBlockType generalChannelFilter; // @synthesize generalChannelFilter=_generalChannelFilter;
@property(retain, nonatomic) AWEShareContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)prefetchImageWithModel:(id)arg1 imageURLString:(id)arg2;
- (CDUnknownBlockType)wrapperBlockWithContext:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 imageURLString:(id)arg3 isCover:(_Bool)arg4;
- (CDUnknownBlockType)wrapperBlockWithContext:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 coverURLString:(id)arg3;
- (id)isShareWithReflowPage:(long long)arg1;
- (void)shareServiceDidCompleteWithType:(long long)arg1;
- (_Bool)isActive;
- (void)dismissPanel:(_Bool)arg1;
- (void)dismissPanel;
- (void)showGifPanelWithContext:(id)arg1 prepare:(CDUnknownBlockType)arg2;
- (void)showGifPanel;
- (void)showShareViewController:(id)arg1 enableMask:(_Bool)arg2;
- (id)getShareViewControllerWithContext:(id)arg1 hideOptions:(long long)arg2;
- (void)showPanelWithContext:(id)arg1 imageURLString:(id)arg2 isCover:(_Bool)arg3 enableMask:(_Bool)arg4 prepare:(CDUnknownBlockType)arg5 hideOptions:(long long)arg6 hideFilter:(CDUnknownBlockType)arg7;
- (void)showPanelWithContext:(id)arg1 imageURLString:(id)arg2 isCover:(_Bool)arg3 enableMask:(_Bool)arg4 prepare:(CDUnknownBlockType)arg5 hideOptions:(long long)arg6;
- (void)showPanelWithContext:(id)arg1 coverURLString:(id)arg2 enableMask:(_Bool)arg3 prepare:(CDUnknownBlockType)arg4 hideOptions:(long long)arg5;
- (void)shareWithContext:(id)arg1 type:(long long)arg2;
- (void)shareWithContext:(id)arg1 coverURLString:(id)arg2 prepare:(CDUnknownBlockType)arg3 type:(long long)arg4;
- (void)openQRCodeShareDetail:(unsigned long long)arg1 shareContext:(id)arg2 platformType:(long long)arg3 settingShareMode:(long long)arg4 fromQRCode:(_Bool)arg5;
- (void)openQRCodeShareDetail:(unsigned long long)arg1 shareContext:(id)arg2 platformType:(long long)arg3 settingShareMode:(long long)arg4;
- (void)dealloc;
- (void)onServiceInit;
@property(readonly, nonatomic) _Bool isLegacyGlobalContextSet;
- (void)configureView:(id)arg1 withConfiguration:(id)arg2;
- (_Bool)executeTask:(id)arg1 withChannel:(id)arg2 inView:(id)arg3;
- (_Bool)executeTask:(id)arg1 withChannel:(id)arg2;
- (void)__prepareWithContext:(id)arg1 aweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareWithContext:(id)arg1 aweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareAweme:(id)arg1 type:(long long)arg2 referString:(id)arg3 enterMethod:(id)arg4;
- (void)shareAweme:(id)arg1 type:(long long)arg2 referString:(id)arg3;
- (void)shareAwemeOnWindow:(id)arg1 fromAweme:(id)arg2 pageTypeString:(id)arg3 isLongvideo:(_Bool)arg4 referString:(id)arg5 cityInfoString:(id)arg6 extraLogInfo:(id)arg7 enableMask:(_Bool)arg8 hideOptions:(long long)arg9;
- (void)setIMShareWebViewModelWithWebModel:(id)arg1;
- (void)updateConfiguration:(id)arg1 withWebMetadata:(id)arg2 context:(id)arg3;
- (void)showPanelWithWebModel:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (void)shareWebWithModel:(id)arg1 toPlatform:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)trackShareChallengeStage;
- (id)contextFromChallenge:(id)arg1;
- (void)showPanelWithChallenge:(id)arg1 onViewController:(id)arg2;
- (unsigned long long)commonPanelStyleMaskWithContext:(id)arg1;
- (void)removeChannelsInConfiguration:(id)arg1 withContext:(id)arg2;
- (void)showCommonPanelWithConfiguration:(id)arg1 onViewController:(id)arg2;
- (void)showCommonPanelWithTask:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (void)showCommonPanelWithTask:(id)arg1 onViewController:(id)arg2;
- (id)commonPanelWithConfiguration:(id)arg1;
- (_Bool)commonShareWithTask:(id)arg1 toPlatform:(long long)arg2;
- (_Bool)commonShareWithTask:(id)arg1 forType:(id)arg2;
- (id)commonConfigurationWithTask:(id)arg1;
- (id)commonTaskWithContext:(id)arg1;
- (id)trackShareShopOwnerStage;
- (id)contextWithShopOwner:(id)arg1;
- (void)showPanelWithShopOwner:(id)arg1 onViewController:(id)arg2;
- (id)trackShareGoodsStage;
- (id)contextWithGoods:(id)arg1;
- (void)showPanelWithGoods:(id)arg1 onViewController:(id)arg2;
- (void)_prepareWithContext:(id)arg1 imageAweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareImageAweme:(id)arg1 type:(long long)arg2 referString:(id)arg3;
- (void)shareImageAwemeOnWindow:(id)arg1 fromAweme:(id)arg2 pageTypeString:(id)arg3 referString:(id)arg4 enableMask:(_Bool)arg5 hideOptions:(long long)arg6;
- (void)showPanelWithIronMan:(id)arg1 onViewController:(id)arg2;
- (id)prepareShareLiveModelStage;
- (id)contextWithLive:(id)arg1;
- (void)showPanelWithLive:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (id)prepareShareLuckyCatModelStage;
- (id)contextWithWebViewLuckyCat:(id)arg1;
- (id)contextWithLuckyCat:(id)arg1;
- (id)taskWithLuckyCatContext:(id)arg1;
- (void)showPanelWithLuckyCat:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (void)shareLuckyCat:(id)arg1 toPlatform:(long long)arg2;
- (_Bool)shouldUseNewShareForLuckyCat;
- (id)trackShareMixVideoStage;
- (id)contextFromMixVideo:(id)arg1;
- (void)showPanelWithMixVideo:(id)arg1 previousPage:(id)arg2 onViewController:(id)arg3;
- (id)contextWithMusic:(id)arg1;
- (id)trackShareMusicStage;
- (void)showPanelWithMusic:(id)arg1 onViewController:(id)arg2;
- (id)trackShareCouponStage;
- (id)contextWithCouponPOI:(id)arg1;
- (void)showPanelWithCouponPOI:(id)arg1 previousPage:(id)arg2 onViewController:(id)arg3;
- (id)prepareSharePOIModelStage;
- (id)trackSharePOIStage;
- (id)contextWithPOI:(id)arg1;
- (void)showPanelWithPOI:(id)arg1 previousPage:(id)arg2 onViewController:(id)arg3;
- (void)shareWithContext:(id)arg1 coverURLArray:(id)arg2 needWatermark:(_Bool)arg3 shareAction:(CDUnknownBlockType)arg4;
- (void)shareWithContext:(id)arg1 user:(id)arg2 shareAction:(CDUnknownBlockType)arg3;
- (id)_urlStringWithString:(id)arg1 addQueryDict:(id)arg2;
- (void)addShareParamsToContext:(id)arg1 type:(long long)arg2 shareWeiboDesc:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_createContextFromAweme:(id)arg1;
- (id)_createContextFromUser:(id)arg1;
- (id)boardNameWithTrendingBoardType:(unsigned long long)arg1;
- (id)itemIDWithTrendingBoardType:(unsigned long long)arg1;
- (id)previousPageWithTrendingBoardType:(unsigned long long)arg1;
- (id)shareTrendingSearchTitleWithType:(id)arg1;
- (_Bool)canRecognizeQRCodeOfSize:(struct CGSize)arg1;
- (id)finalImageWithSnapshot:(id)arg1 qrcode:(id)arg2 boardName:(id)arg3;
- (id)showShareTrendingSearchAlertStage;
- (id)generateTrendingSearchImageStageWithSnapshot:(id)arg1;
- (id)fetchTrendingSearchQRCodeStage;
- (id)trackShareTrendingSearchStage;
- (id)contextWithTrendingSearch:(id)arg1 shareInfo:(id)arg2;
- (void)showPanelWithTrendingSearch:(id)arg1 shareInfo:(id)arg2 snapshot:(id)arg3 onViewController:(id)arg4;
- (id)trackShareStickerStage;
- (id)contextFromSticker:(id)arg1;
- (void)showPanelWithSticker:(id)arg1 extraLogInfo:(id)arg2 onViewController:(id)arg3;
- (id)trackShareUserStage;
- (id)contextWithUser:(id)arg1;
- (void)showPanelWithUser:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (id)webViewShareURLByRemovingUserInfoFromURL:(id)arg1;
- (id)webViewShareURLByAddingUserInfoToURL:(id)arg1 shareType:(id)arg2;
- (void)parseTitleInWebView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)parseWebMetadataInWebView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)prepareShareWebViewModelStage;
- (id)trackShareWebViewStage;
- (void)prepareContextWithWebView:(id)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contextWithWebViewModel:(id)arg1;
- (void)showPanelWithWebView:(id)arg1 model:(id)arg2 onViewController:(id)arg3;
- (_Bool)canShareWebViewWithPreviousPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
