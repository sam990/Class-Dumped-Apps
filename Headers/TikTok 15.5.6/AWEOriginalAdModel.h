//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAdCommentModel, AWEAdInterestingPlayModel, AWEAdLinkModel, AWEAdMaskModel, AWEAdSplashModel, AWEAdSymphonyModel, AWEAdSymphonyMusic, AWEOMSDKModel, AWEOriginalAdAutoRenewModel, AWEOriginalAdFakeAuthorModel, AWEOriginalAdPreloadModel, AWETagLabelModel, AWEURLModel, HTSVastIconsModel, HTSVastModel, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface AWEOriginalAdModel : AWEBaseApiModel
{
    _Bool _enableWebViewProgressBar;
    _Bool _isPreview;
    _Bool _hideIfExists;
    _Bool _isRealAuthor;
    _Bool _shouldShowCommentArea;
    _Bool _disableDouPlusClickTrack;
    _Bool _isNewMaskFormStyle;
    _Bool _disableShowAdMore;
    _Bool _disableShowAdGuide;
    _Bool _allowDspAutoJump;
    _Bool _showAdAfterInteraction;
    _Bool _isEnableReport;
    _Bool _showAvatarLinkIcon;
    _Bool _disableAdShowFilter;
    _Bool _disableAutoTrackClick;
    _Bool _appStoreEnabled;
    _Bool _appStoreReuseDisabled;
    _Bool _useDefaultWebViewBackgroundColor;
    _Bool _webviewOrdinaryMode;
    _Bool _isEmpty;
    _Bool _shouldUseServerPoiDetailShowTimeControl;
    _Bool _omsdkMode;
    _Bool _isVastModelLoading;
    _Bool _swithToUIWebView;
    _Bool _swithToWKWebView;
    _Bool _enableFilterSameVideo;
    _Bool _enableTitleClick;
    _Bool _showedBefore;
    _Bool _enableWebInfoReport;
    _Bool _showAdTagOnAvatar;
    _Bool _shouldAutolandWebURLInUserDetail;
    _Bool _disableAdShow;
    _Bool _isAdEndorseVideo;
    NSNumber *_adID;
    NSNumber *_creativeID;
    NSNumber *_groupID;
    unsigned long long _reportAdType;
    NSString *_type;
    NSString *_source;
    long long _webType;
    NSString *_logExtra;
    NSString *_actionExtra;
    NSString *_authorURL;
    NSString *_ironManURL;
    NSString *_webURL;
    NSString *_title;
    NSString *_webViewTitle;
    NSString *_appName;
    NSString *_appID;
    NSString *_buttonText;
    unsigned long long _landingStyle;
    NSString *_lightWebURL;
    long long _lightLandingPreloadType;
    AWEURLModel *_clickTrackURLList;
    AWEURLModel *_trackURLList;
    NSString *_downloadURL;
    NSArray *_videoPlayTrackURLList;
    NSNumber *_expireTime;
    AWEURLModel *_imageURL;
    NSString *_openURL;
    NSString *_packageName;
    NSString *_desc;
    AWEURLModel *_effectivePlayTrackURLList;
    AWEURLModel *_playOverTrackURLList;
    AWEURLModel *_playTrackURLList;
    NSArray *_playSecondsTrackURLList;
    NSNumber *_effectivePlayTime;
    long long _videoTranspose;
    long long _showMaskAfterPlayTimes;
    long long _showOutflowMaskTimes;
    long long _showSDKADCardAfterSeconds;
    long long _showLearnMoreAfterSeconds;
    long long _outflowButtonStyle;
    NSString *_formURLString;
    long long _formWidth;
    long long _formHeight;
    NSString *_phoneNumber;
    AWEAdCommentModel *_adComment;
    long long _adType;
    long long _extensionalADType;
    AWETagLabelModel *_label;
    AWETagLabelModel *_linkLabel;
    NSString *_moreText;
    NSString *_bottomTipText;
    AWEURLModel *_topIconURLList;
    NSString *_redPacketURL;
    NSString *_redPacketOpenURL;
    NSString *_learnMoreBgColor;
    NSString *_backgroundColor;
    long long _adTagPosition;
    long long _animationType;
    long long _interactionInterval;
    NSArray *_iconImageList;
    long long _buttonStyle;
    NSString *_schemeName;
    long long _tipsType;
    NSArray *_cardInfos;
    AWEOMSDKModel *_omsdk;
    unsigned long long _preloadType;
    AWEOriginalAdPreloadModel *_preloadData;
    NSString *_phoneKey;
    NSNumber *_instancePhoneID;
    unsigned long long _maskType;
    NSString *_appScore;
    NSString *_appInstallCount;
    NSString *_appCategory;
    AWEAdSymphonyModel *_symphony;
    AWEAdSymphonyMusic *_music;
    NSString *_consultURL;
    AWEAdSplashModel *_splashInfo;
    AWEURLModel *_contextTrackURLList;
    NSMutableArray *_convertedContextTrackURLList;
    long long _effectivePlayType;
    AWEAdLinkModel *_linkModel;
    NSNumber *_poiDetailShowTimeInterval;
    HTSVastModel *_vastModel;
    AWEAdMaskModel *_adMaskInfo;
    NSNumber *_changeButtonColorTime;
    long long _sourceType;
    NSString *_topTitle;
    long long _searchAdType;
    AWEURLModel *_searchAdImageURL;
    AWEOriginalAdAutoRenewModel *_autoRenewModel;
    unsigned long long _showAdTagOnAvatarStyle;
    AWEAdInterestingPlayModel *_interestingPlayModel;
    unsigned long long _leftSlideClickType;
    long long _leftSlideClickTime;
    HTSVastIconsModel *_vastAdChoiceIcon;
    AWEOriginalAdFakeAuthorModel *_fakeAuthor;
    long long _liveRoomType;
    NSArray *_highlightPosition;
    NSString *_highlightColor;
    long long _disableShowLinkLabel;
    long long _requestSimilarRecommendDelay;
    long long _similarRecommendType;
    NSString *_similarRecommendExtra;
    NSDictionary *_lynxRawData;
    NSString *_lynxButtonTemplateSchema;
    long long _newLearnMoreBtnPosition;
}

+ (id)highlightPositionJSONTransformer;
+ (id)sourceTypeJSONTransformer;
+ (id)newLearnMoreBtnPositionJSONTransformer;
+ (id)similarRecommendTypeJSONTransformer;
+ (id)liveRoomTypeJSONTransformer;
+ (id)fakeAuthorJSONTransformer;
+ (id)interestingPlayModelJSONTransformer;
+ (id)adMaskInfoJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)symphonyJSONTransformer;
+ (id)iconImageListJSONTransformer;
+ (id)cardInfosJSONTransformer;
+ (id)linkModelJSONTransformer;
+ (id)adCommentJSONTransformer;
+ (id)contextTrackURLListJSONTransformer;
+ (id)searchAdImageURLJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)playSecondsTrackURLListJSONTransformer;
+ (id)effectivePlayTrackURLListJSONTransformer;
+ (id)playOverTrackURLListJSONTransformer;
+ (id)playTrackURLListJSONTransformer;
+ (id)autoRenewModelJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)videoPlayTrackURLListJSONTransformer;
+ (id)extensionalADTypeJSONTransformer;
+ (id)adTypeJSONTransformer;
+ (id)maskTypeJSONTransformer;
+ (id)showAdTagOnAvatarStyleJSONTransformer;
+ (id)effectivePlayTypeJSONTransformer;
+ (id)videoTransposeJSONTransformer;
+ (id)reportAdTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long newLearnMoreBtnPosition; // @synthesize newLearnMoreBtnPosition=_newLearnMoreBtnPosition;
@property(copy, nonatomic) NSString *lynxButtonTemplateSchema; // @synthesize lynxButtonTemplateSchema=_lynxButtonTemplateSchema;
@property(copy, nonatomic) NSDictionary *lynxRawData; // @synthesize lynxRawData=_lynxRawData;
@property(copy, nonatomic) NSString *similarRecommendExtra; // @synthesize similarRecommendExtra=_similarRecommendExtra;
@property(nonatomic) long long similarRecommendType; // @synthesize similarRecommendType=_similarRecommendType;
@property(nonatomic) long long requestSimilarRecommendDelay; // @synthesize requestSimilarRecommendDelay=_requestSimilarRecommendDelay;
@property(nonatomic) _Bool isAdEndorseVideo; // @synthesize isAdEndorseVideo=_isAdEndorseVideo;
@property(nonatomic) _Bool disableAdShow; // @synthesize disableAdShow=_disableAdShow;
@property(nonatomic) long long disableShowLinkLabel; // @synthesize disableShowLinkLabel=_disableShowLinkLabel;
@property(copy, nonatomic) NSString *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(copy, nonatomic) NSArray *highlightPosition; // @synthesize highlightPosition=_highlightPosition;
@property(nonatomic) long long liveRoomType; // @synthesize liveRoomType=_liveRoomType;
@property(retain, nonatomic) AWEOriginalAdFakeAuthorModel *fakeAuthor; // @synthesize fakeAuthor=_fakeAuthor;
@property(nonatomic) _Bool shouldAutolandWebURLInUserDetail; // @synthesize shouldAutolandWebURLInUserDetail=_shouldAutolandWebURLInUserDetail;
@property(retain, nonatomic) HTSVastIconsModel *vastAdChoiceIcon; // @synthesize vastAdChoiceIcon=_vastAdChoiceIcon;
@property(nonatomic) long long leftSlideClickTime; // @synthesize leftSlideClickTime=_leftSlideClickTime;
@property(nonatomic) unsigned long long leftSlideClickType; // @synthesize leftSlideClickType=_leftSlideClickType;
@property(retain, nonatomic) AWEAdInterestingPlayModel *interestingPlayModel; // @synthesize interestingPlayModel=_interestingPlayModel;
@property(nonatomic) unsigned long long showAdTagOnAvatarStyle; // @synthesize showAdTagOnAvatarStyle=_showAdTagOnAvatarStyle;
@property(nonatomic) _Bool showAdTagOnAvatar; // @synthesize showAdTagOnAvatar=_showAdTagOnAvatar;
@property(nonatomic) _Bool enableWebInfoReport; // @synthesize enableWebInfoReport=_enableWebInfoReport;
@property(nonatomic) _Bool showedBefore; // @synthesize showedBefore=_showedBefore;
@property(retain, nonatomic) AWEOriginalAdAutoRenewModel *autoRenewModel; // @synthesize autoRenewModel=_autoRenewModel;
@property(retain, nonatomic) AWEURLModel *searchAdImageURL; // @synthesize searchAdImageURL=_searchAdImageURL;
@property(nonatomic) long long searchAdType; // @synthesize searchAdType=_searchAdType;
@property(nonatomic) _Bool enableTitleClick; // @synthesize enableTitleClick=_enableTitleClick;
@property(copy, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool enableFilterSameVideo; // @synthesize enableFilterSameVideo=_enableFilterSameVideo;
@property(retain, nonatomic) NSNumber *changeButtonColorTime; // @synthesize changeButtonColorTime=_changeButtonColorTime;
@property(nonatomic) _Bool swithToWKWebView; // @synthesize swithToWKWebView=_swithToWKWebView;
@property(nonatomic) _Bool swithToUIWebView; // @synthesize swithToUIWebView=_swithToUIWebView;
@property(retain, nonatomic) AWEAdMaskModel *adMaskInfo; // @synthesize adMaskInfo=_adMaskInfo;
@property(retain, nonatomic) HTSVastModel *vastModel; // @synthesize vastModel=_vastModel;
@property(nonatomic) _Bool isVastModelLoading; // @synthesize isVastModelLoading=_isVastModelLoading;
@property(nonatomic) _Bool omsdkMode; // @synthesize omsdkMode=_omsdkMode;
@property(retain, nonatomic) NSNumber *poiDetailShowTimeInterval; // @synthesize poiDetailShowTimeInterval=_poiDetailShowTimeInterval;
@property(nonatomic) _Bool shouldUseServerPoiDetailShowTimeControl; // @synthesize shouldUseServerPoiDetailShowTimeControl=_shouldUseServerPoiDetailShowTimeControl;
@property(retain, nonatomic) AWEAdLinkModel *linkModel; // @synthesize linkModel=_linkModel;
@property(nonatomic) long long effectivePlayType; // @synthesize effectivePlayType=_effectivePlayType;
@property(retain, nonatomic) NSMutableArray *convertedContextTrackURLList; // @synthesize convertedContextTrackURLList=_convertedContextTrackURLList;
@property(copy, nonatomic) AWEURLModel *contextTrackURLList; // @synthesize contextTrackURLList=_contextTrackURLList;
@property(retain, nonatomic) AWEAdSplashModel *splashInfo; // @synthesize splashInfo=_splashInfo;
@property(copy, nonatomic) NSString *consultURL; // @synthesize consultURL=_consultURL;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) AWEAdSymphonyMusic *music; // @synthesize music=_music;
@property(retain, nonatomic) AWEAdSymphonyModel *symphony; // @synthesize symphony=_symphony;
@property(nonatomic) _Bool webviewOrdinaryMode; // @synthesize webviewOrdinaryMode=_webviewOrdinaryMode;
@property(copy, nonatomic) NSString *appCategory; // @synthesize appCategory=_appCategory;
@property(copy, nonatomic) NSString *appInstallCount; // @synthesize appInstallCount=_appInstallCount;
@property(copy, nonatomic) NSString *appScore; // @synthesize appScore=_appScore;
@property(nonatomic) unsigned long long maskType; // @synthesize maskType=_maskType;
@property(nonatomic) _Bool useDefaultWebViewBackgroundColor; // @synthesize useDefaultWebViewBackgroundColor=_useDefaultWebViewBackgroundColor;
@property(retain, nonatomic) NSNumber *instancePhoneID; // @synthesize instancePhoneID=_instancePhoneID;
@property(copy, nonatomic) NSString *phoneKey; // @synthesize phoneKey=_phoneKey;
@property(retain, nonatomic) AWEOriginalAdPreloadModel *preloadData; // @synthesize preloadData=_preloadData;
@property(nonatomic) _Bool appStoreReuseDisabled; // @synthesize appStoreReuseDisabled=_appStoreReuseDisabled;
@property(nonatomic) _Bool appStoreEnabled; // @synthesize appStoreEnabled=_appStoreEnabled;
@property(nonatomic) unsigned long long preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) _Bool disableAutoTrackClick; // @synthesize disableAutoTrackClick=_disableAutoTrackClick;
@property(nonatomic) _Bool disableAdShowFilter; // @synthesize disableAdShowFilter=_disableAdShowFilter;
@property(retain, nonatomic) AWEOMSDKModel *omsdk; // @synthesize omsdk=_omsdk;
@property(copy, nonatomic) NSArray *cardInfos; // @synthesize cardInfos=_cardInfos;
@property(nonatomic) long long tipsType; // @synthesize tipsType=_tipsType;
@property(copy, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(nonatomic) _Bool showAvatarLinkIcon; // @synthesize showAvatarLinkIcon=_showAvatarLinkIcon;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) _Bool isEnableReport; // @synthesize isEnableReport=_isEnableReport;
@property(retain, nonatomic) NSArray *iconImageList; // @synthesize iconImageList=_iconImageList;
@property(nonatomic) long long interactionInterval; // @synthesize interactionInterval=_interactionInterval;
@property(nonatomic) _Bool showAdAfterInteraction; // @synthesize showAdAfterInteraction=_showAdAfterInteraction;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) long long adTagPosition; // @synthesize adTagPosition=_adTagPosition;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *learnMoreBgColor; // @synthesize learnMoreBgColor=_learnMoreBgColor;
@property(nonatomic) _Bool allowDspAutoJump; // @synthesize allowDspAutoJump=_allowDspAutoJump;
@property(copy, nonatomic) NSString *redPacketOpenURL; // @synthesize redPacketOpenURL=_redPacketOpenURL;
@property(copy, nonatomic) NSString *redPacketURL; // @synthesize redPacketURL=_redPacketURL;
@property(nonatomic) _Bool disableShowAdGuide; // @synthesize disableShowAdGuide=_disableShowAdGuide;
@property(nonatomic) _Bool disableShowAdMore; // @synthesize disableShowAdMore=_disableShowAdMore;
@property(copy, nonatomic) AWEURLModel *topIconURLList; // @synthesize topIconURLList=_topIconURLList;
@property(copy, nonatomic) NSString *bottomTipText; // @synthesize bottomTipText=_bottomTipText;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(retain, nonatomic) AWETagLabelModel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) AWETagLabelModel *label; // @synthesize label=_label;
@property(nonatomic) _Bool isNewMaskFormStyle; // @synthesize isNewMaskFormStyle=_isNewMaskFormStyle;
@property(nonatomic) _Bool disableDouPlusClickTrack; // @synthesize disableDouPlusClickTrack=_disableDouPlusClickTrack;
@property(nonatomic) long long extensionalADType; // @synthesize extensionalADType=_extensionalADType;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(retain, nonatomic) AWEAdCommentModel *adComment; // @synthesize adComment=_adComment;
@property(nonatomic) _Bool shouldShowCommentArea; // @synthesize shouldShowCommentArea=_shouldShowCommentArea;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) long long formHeight; // @synthesize formHeight=_formHeight;
@property(nonatomic) long long formWidth; // @synthesize formWidth=_formWidth;
@property(copy, nonatomic) NSString *formURLString; // @synthesize formURLString=_formURLString;
@property(nonatomic) long long outflowButtonStyle; // @synthesize outflowButtonStyle=_outflowButtonStyle;
@property(nonatomic) long long showLearnMoreAfterSeconds; // @synthesize showLearnMoreAfterSeconds=_showLearnMoreAfterSeconds;
@property(nonatomic) long long showSDKADCardAfterSeconds; // @synthesize showSDKADCardAfterSeconds=_showSDKADCardAfterSeconds;
@property(nonatomic) long long showOutflowMaskTimes; // @synthesize showOutflowMaskTimes=_showOutflowMaskTimes;
@property(nonatomic) long long showMaskAfterPlayTimes; // @synthesize showMaskAfterPlayTimes=_showMaskAfterPlayTimes;
@property(nonatomic) _Bool isRealAuthor; // @synthesize isRealAuthor=_isRealAuthor;
@property(nonatomic) long long videoTranspose; // @synthesize videoTranspose=_videoTranspose;
@property(retain, nonatomic) NSNumber *effectivePlayTime; // @synthesize effectivePlayTime=_effectivePlayTime;
@property(retain, nonatomic) NSArray *playSecondsTrackURLList; // @synthesize playSecondsTrackURLList=_playSecondsTrackURLList;
@property(retain, nonatomic) AWEURLModel *playTrackURLList; // @synthesize playTrackURLList=_playTrackURLList;
@property(retain, nonatomic) AWEURLModel *playOverTrackURLList; // @synthesize playOverTrackURLList=_playOverTrackURLList;
@property(retain, nonatomic) AWEURLModel *effectivePlayTrackURLList; // @synthesize effectivePlayTrackURLList=_effectivePlayTrackURLList;
@property(nonatomic) _Bool hideIfExists; // @synthesize hideIfExists=_hideIfExists;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSNumber *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSArray *videoPlayTrackURLList; // @synthesize videoPlayTrackURLList=_videoPlayTrackURLList;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) AWEURLModel *trackURLList; // @synthesize trackURLList=_trackURLList;
@property(retain, nonatomic) AWEURLModel *clickTrackURLList; // @synthesize clickTrackURLList=_clickTrackURLList;
@property(nonatomic) long long lightLandingPreloadType; // @synthesize lightLandingPreloadType=_lightLandingPreloadType;
@property(copy, nonatomic) NSString *lightWebURL; // @synthesize lightWebURL=_lightWebURL;
@property(nonatomic) unsigned long long landingStyle; // @synthesize landingStyle=_landingStyle;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool enableWebViewProgressBar; // @synthesize enableWebViewProgressBar=_enableWebViewProgressBar;
@property(copy, nonatomic) NSString *webViewTitle; // @synthesize webViewTitle=_webViewTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *ironManURL; // @synthesize ironManURL=_ironManURL;
@property(copy, nonatomic) NSString *authorURL; // @synthesize authorURL=_authorURL;
@property(copy, nonatomic) NSString *actionExtra; // @synthesize actionExtra=_actionExtra;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(nonatomic) long long webType; // @synthesize webType=_webType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long reportAdType; // @synthesize reportAdType=_reportAdType;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSNumber *creativeID; // @synthesize creativeID=_creativeID;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
- (_Bool)disableShowOutflowLink;
- (_Bool)shouldShowOutflowButton;
- (id)mergeIconModel:(id)arg1 with:(id)arg2;
- (id)progress;
- (id)adVerificationInVast;
- (id)adVerification;
- (id)getCardInfoWithAdStatusCode:(unsigned long long)arg1;
- (id)init;

@end

