//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGStorableObject.h>

#import <FBSharedFramework/IGAdGapRuleEnforceable-Protocol.h>
#import <FBSharedFramework/IGAdPlatformSponsoredItemInfoProviding-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>

@class IGAdPlatformGapRules, IGFeedItemStore, IGLocation, IGPhoto, IGReelCoverInfo, IGRingViewSpec, IGStoryAdPodRulesModel, IGStoryCarouselModel, IGStoryDismissCard, IGStoryNetegoModel, IGUserStore, NSArray, NSData, NSDate, NSString, NSURL;
@protocol IGReelOwnerType;

@interface IGReel : IGStorableObject <IGAdPlatformSponsoredItemInfoProviding, IGAdGapRuleEnforceable, IGUnitItemInformationProviding>
{
    IGFeedItemStore *_feedItemStore;
    IGUserStore *_userStore;
    _Bool _hasRightsManagerViolation;
    _Bool _isNux;
    _Bool _showNuxTooltip;
    _Bool _isMuted;
    _Bool _canReply;
    _Bool _canGIFQuickReply;
    _Bool _canReshare;
    _Bool _hideFromFeedUnit;
    _Bool _isSponsored;
    _Bool _hasFavoritesMedia;
    _Bool _hasPrideMedia;
    _Bool _hasSkipped;
    _Bool _hasRecentlyPostedTo;
    id <IGReelOwnerType> _owner;
    long long _rankedPosition;
    long long _seenRankedPosition;
    NSDate *_latestReelMediaDate;
    NSDate *_createdAtDate;
    NSDate *_expiringAtDate;
    long long _prefetchCount;
    long long _reelType;
    NSString *_promotionID;
    IGPhoto *_mediaPreviewPhoto;
    NSDate *_mediaPreviewPhotoCreationDate;
    NSData *_mediaPreviewData;
    NSString *_title;
    long long _reelMediaCount;
    IGRingViewSpec *_customRingSpec;
    IGReelCoverInfo *_coverInfo;
    NSURL *_firstItemPhotoURL;
    NSString *_sourceToken;
    NSString *_trayContext;
    IGStoryDismissCard *_dismissCard;
    NSString *_uniqueReelID;
    NSString *_code;
    NSString *_timeSinceInteraction;
    IGStoryNetegoModel *_storyNetegoModel;
    NSArray *_adFeedItems;
    long long _adOrNetegoPriorityIndex;
    IGAdPlatformGapRules *_gapRules;
    IGStoryAdPodRulesModel *_adPodRulesModel;
    IGStoryCarouselModel *_carouselModel;
    NSArray *_videoToCarouselCutSecs;
    unsigned long long _cardificationCardType;
    long long _highlightsHeaderDesign;
    IGLocation *_location;
    NSArray *_hashtagNames;
    NSArray *_pendingItems;
    NSArray *_feedItems;
}

+ (id)reelForReelOwner:(id)arg1 store:(id)arg2;
+ (id)reelForDirectShareRecipient:(id)arg1 store:(id)arg2;
+ (id)reelForInvitesSticker:(id)arg1 store:(id)arg2;
+ (id)feedReelWithPK:(id)arg1 items:(id)arg2 user:(id)arg3 store:(id)arg4;
+ (id)emptyReelWithPK:(id)arg1 user:(id)arg2 store:(id)arg3;
+ (id)emptyHighlightsReelWithPK:(id)arg1 user:(id)arg2 store:(id)arg3;
+ (id)reelForUser:(id)arg1 store:(id)arg2;
+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(readonly, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(readonly, nonatomic) NSArray *hashtagNames; // @synthesize hashtagNames=_hashtagNames;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long highlightsHeaderDesign; // @synthesize highlightsHeaderDesign=_highlightsHeaderDesign;
@property(readonly, nonatomic) _Bool hasRecentlyPostedTo; // @synthesize hasRecentlyPostedTo=_hasRecentlyPostedTo;
@property(readonly, nonatomic) unsigned long long cardificationCardType; // @synthesize cardificationCardType=_cardificationCardType;
@property(copy, nonatomic) NSArray *videoToCarouselCutSecs; // @synthesize videoToCarouselCutSecs=_videoToCarouselCutSecs;
@property(readonly, nonatomic) IGStoryCarouselModel *carouselModel; // @synthesize carouselModel=_carouselModel;
@property(readonly, nonatomic) IGStoryAdPodRulesModel *adPodRulesModel; // @synthesize adPodRulesModel=_adPodRulesModel;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules; // @synthesize gapRules=_gapRules;
@property(readonly, nonatomic) long long adOrNetegoPriorityIndex; // @synthesize adOrNetegoPriorityIndex=_adOrNetegoPriorityIndex;
@property(readonly, nonatomic) NSArray *adFeedItems; // @synthesize adFeedItems=_adFeedItems;
@property(readonly, nonatomic) IGStoryNetegoModel *storyNetegoModel; // @synthesize storyNetegoModel=_storyNetegoModel;
@property(readonly, nonatomic) _Bool hasSkipped; // @synthesize hasSkipped=_hasSkipped;
@property(readonly, nonatomic) NSString *timeSinceInteraction; // @synthesize timeSinceInteraction=_timeSinceInteraction;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) NSString *uniqueReelID; // @synthesize uniqueReelID=_uniqueReelID;
@property(readonly, nonatomic) IGStoryDismissCard *dismissCard; // @synthesize dismissCard=_dismissCard;
@property(readonly, copy, nonatomic) NSString *trayContext; // @synthesize trayContext=_trayContext;
@property(readonly, copy, nonatomic) NSString *sourceToken; // @synthesize sourceToken=_sourceToken;
@property(readonly, nonatomic) NSURL *firstItemPhotoURL; // @synthesize firstItemPhotoURL=_firstItemPhotoURL;
@property(readonly, nonatomic) IGReelCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(readonly, nonatomic) IGRingViewSpec *customRingSpec; // @synthesize customRingSpec=_customRingSpec;
@property(readonly, nonatomic) long long reelMediaCount; // @synthesize reelMediaCount=_reelMediaCount;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSData *mediaPreviewData; // @synthesize mediaPreviewData=_mediaPreviewData;
@property(readonly, nonatomic) NSDate *mediaPreviewPhotoCreationDate; // @synthesize mediaPreviewPhotoCreationDate=_mediaPreviewPhotoCreationDate;
@property(readonly, nonatomic) IGPhoto *mediaPreviewPhoto; // @synthesize mediaPreviewPhoto=_mediaPreviewPhoto;
@property(readonly, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(nonatomic) long long reelType; // @synthesize reelType=_reelType;
@property(readonly, nonatomic) _Bool hasPrideMedia; // @synthesize hasPrideMedia=_hasPrideMedia;
@property(readonly, nonatomic) _Bool hasFavoritesMedia; // @synthesize hasFavoritesMedia=_hasFavoritesMedia;
@property(readonly, nonatomic) long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, nonatomic) _Bool hideFromFeedUnit; // @synthesize hideFromFeedUnit=_hideFromFeedUnit;
@property(readonly, nonatomic) _Bool canReshare; // @synthesize canReshare=_canReshare;
@property(readonly, nonatomic) _Bool canGIFQuickReply; // @synthesize canGIFQuickReply=_canGIFQuickReply;
@property(readonly, nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(readonly, nonatomic) NSDate *expiringAtDate; // @synthesize expiringAtDate=_expiringAtDate;
@property(readonly, nonatomic) NSDate *createdAtDate; // @synthesize createdAtDate=_createdAtDate;
@property(readonly, nonatomic) NSDate *latestReelMediaDate; // @synthesize latestReelMediaDate=_latestReelMediaDate;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool showNuxTooltip; // @synthesize showNuxTooltip=_showNuxTooltip;
@property(readonly, nonatomic) _Bool isNux; // @synthesize isNux=_isNux;
@property(readonly, nonatomic) long long seenRankedPosition; // @synthesize seenRankedPosition=_seenRankedPosition;
@property(readonly, nonatomic) long long rankedPosition; // @synthesize rankedPosition=_rankedPosition;
@property(retain, nonatomic) id <IGReelOwnerType> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (unsigned long long)unitItemType;
- (id)unitItemId;
- (void)_clearOutInvalidOrExpiredFeedItems;
- (void)_removeDeletedMedia:(id)arg1;
- (id)_parseOwner:(id)arg1;
- (void)_parseNetegoUnit:(id)arg1;
- (void)updateLatestReelMediaDate:(id)arg1;
- (void)updateMediaPreviewPhotoCreationDate:(id)arg1;
- (void)updateMediaPreviewPhoto:(id)arg1;
@property(readonly, nonatomic) _Bool hasRightsManagerViolation;
- (void)updateHasRecentlyPostedTo:(_Bool)arg1;
- (void)updateSkipped:(_Bool)arg1;
- (void)updateMuteStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool needsFetch;
- (_Bool)hasUnexpiredContent;
- (id)sortedItemsIncludingExpired;
- (id)sortedItems;
- (void)updatePendingItems:(id)arg1;
- (void)updateWithPostedFeedItem:(id)arg1;
- (void)removeFeedItem:(id)arg1;
- (void)updateFeedItems:(id)arg1 shouldUpdateLatestReelMediaDate:(_Bool)arg2 shouldClearOutInvalidOrExpiredFeedItems:(_Bool)arg3;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 feedItemStore:(id)arg2 userStore:(id)arg3;
- (long long)numberOfAdsInAdPod;
- (long long)indexInAdPod;
- (id)adPodId;
- (id)adTrackingToken;
- (id)mediaPk;
- (id)adPlatformInvalidationInfo;
- (id)adPlatformSponsoredItemId;
@property(readonly, nonatomic) long long priorityIndex;
- (long long)highestPositionGap;
@property(readonly, nonatomic) double timeGapToPreviousItemInSec;
- (long long)consumedMediaContainerCountToPreviousItemType:(unsigned long long)arg1;
@property(readonly, nonatomic) long long minMediaGapToPreviousItem;
- (long long)consumedMediaGapToPreviousItemType:(unsigned long long)arg1;
@property(readonly, nonatomic) long long maxMediaContainerGapToPreviousItem;
- (_Bool)seenWithReelSeenStateStoreState:(id)arg1;
- (_Bool)seenWithReelSeenStateStore:(id)arg1;
- (id)lastSeenDateForReelSeenStateStore:(id)arg1;
- (void)fetchPermalinkWithUserSession:(id)arg1 entryPointString:(id)arg2 successHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *permalink;
- (_Bool)_isStoryHighlight;
- (id)_currentItemWithReelSeenStateStore:(id)arg1 sortedItems:(id)arg2;
- (id)viewerViewModelForTutorialsWithCurrentUser:(id)arg1 focusedFeedItemMediaID:(id)arg2;
- (id)_viewerViewModelForHighlightsWithFocusedFeedItem:(id)arg1 currentUser:(id)arg2 launcherSetProvider:(id)arg3;
- (id)viewerViewModelForHighlightsWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 launcherSetProvider:(id)arg3;
- (id)viewerViewModelForMemoriesWithCurrentUser:(id)arg1 trayViewModel:(id)arg2 reelSeenStateStore:(id)arg3;
- (id)singleItemViewerViewModelWithUnfetchedFeedItem:(id)arg1 currentUser:(id)arg2;
- (id)singleItemViewerViewModelWithFeedItem:(id)arg1 currentUser:(id)arg2 enableReply:(_Bool)arg3 enableReshare:(_Bool)arg4 didOpenFromPush:(_Bool)arg5 shouldOpenViewerListAtLaunch:(_Bool)arg6 hideFooter:(_Bool)arg7 presentDiscussionStickerCommentsToTargetComment:(id)arg8;
- (id)viewerViewModelWithFocusedFeedItem:(id)arg1 currentUser:(id)arg2 shouldOpenViewerListAtLaunch:(_Bool)arg3 launcherSetProvider:(id)arg4;
- (id)viewerViewModelWithFocusedFeedItem:(id)arg1 currentUser:(id)arg2 launcherSetProvider:(id)arg3;
- (id)viewerViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 broadcasts:(id)arg3 focusedMediaID:(id)arg4 openViewerListAtLaunch:(_Bool)arg5 shouldShowUnavailableItem:(_Bool)arg6 title:(id)arg7;
- (id)viewerViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 broadcasts:(id)arg3 focusedMediaID:(id)arg4 openViewerListAtLaunch:(_Bool)arg5;
- (id)viewerViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 broadcasts:(id)arg3;
- (id)storyMentionsViewerViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2;
- (id)groupStoriesTrayViewModelWithCurrentUser:(id)arg1 groupStoriesContextString:(id)arg2;
- (id)highlightsTrayViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 placeholderStyle:(long long)arg3;
- (id)highlightsTrayViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 placeholderStyle:(long long)arg3 shouldShowBadge:(_Bool)arg4;
- (id)trayViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2 currentItem:(id)arg3;
- (id)trayViewModelWithReelSeenStateStore:(id)arg1 currentUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

