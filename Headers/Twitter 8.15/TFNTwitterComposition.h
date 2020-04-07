//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDropDataSource-Protocol.h>
#import <T1Twitter/TFNTwitterTweetTextCounterContext-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSValue, TFNTwitterCompositionCardPreview, TFNTwitterCompositionOriginatorStatusInfo, TFNTwitterCompositionPollingCard, TFNTwitterCompositionQuotedStatusInfo, TFNTwitterCompositionReplyChain, TFNTwitterCompositionReplyChainScribeDetails, TFNTwitterCompositionReplyStatusInfo, TFNTwitterGeotag, TFNTwitterMediaAsset, TFNTwitterTweetTextCounter, TFSTwitterTagSet, TFSTwitterUserReference, TFSTwitterVideoMonetizationSettings;

@interface TFNTwitterComposition : NSObject <TFNTwitterTweetTextCounterContext, NSCoding, TFNDropDataSource>
{
    NSMutableArray *_attachments;
    _Bool _isDraft;
    _Bool _hadFailedSend;
    _Bool _periscopeIsLive;
    _Bool _newsCameraComposition;
    _Bool _referencingAdPreviewTweet;
    NSString *_uniqueID;
    TFSTwitterUserReference *_replyToUserReference;
    NSArray *_initiallyMentionedUsers;
    TFNTwitterCompositionReplyStatusInfo *_replyToStatusInfo;
    TFNTwitterCompositionQuotedStatusInfo *_quotedStatusInfo;
    TFNTwitterCompositionOriginatorStatusInfo *_originatorStatusInfo;
    TFNTwitterCompositionReplyChainScribeDetails *_replyChainScribeDetails;
    TFNTwitterGeotag *_geotag;
    NSDate *_createdDate;
    NSDate *_draftsAddedDate;
    NSDate *_outboxAddedDate;
    NSDate *_retryExpiration;
    unsigned long long _draftType;
    NSArray *_excludedReplyUserIDs;
    NSString *_text;
    NSString *_validDisplayText;
    TFSTwitterTagSet *_tagSet;
    NSDictionary *_extraScribeParameters;
    NSDictionary *_mediaScribeParameters;
    TFNTwitterCompositionCardPreview *_cardPreview;
    TFNTwitterCompositionPollingCard *_pollingCard;
    TFSTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    NSString *_periscopeBroadcastID;
    NSString *_periscopeCreatorID;
    NSString *_cameraPaletteID;
    NSDate *_originalPostTime;
    unsigned long long _reactionType;
    unsigned long long _conversationControlType;
    NSDictionary *_engagementMetadata;
    TFNTwitterCompositionReplyChain *_replyChain;
    NSString *_replyChainUniqueID;
    unsigned long long _positionWithinReplyChain;
    NSString *_tweetPromptSourceID;
    TFNTwitterTweetTextCounter *_tweetTextCounter;
    NSMutableSet *_mutableSemanticAnnotationIds;
    NSValue *_initialSelectedRangeValue;
    NSString *_initialText;
}

+ (id)userReferencesForReplyToStatus:(id)arg1 account:(id)arg2;
@property(retain, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(retain, nonatomic) NSValue *initialSelectedRangeValue; // @synthesize initialSelectedRangeValue=_initialSelectedRangeValue;
@property(retain, nonatomic) NSMutableSet *mutableSemanticAnnotationIds; // @synthesize mutableSemanticAnnotationIds=_mutableSemanticAnnotationIds;
@property(retain, nonatomic) TFNTwitterTweetTextCounter *tweetTextCounter; // @synthesize tweetTextCounter=_tweetTextCounter;
@property(nonatomic, getter=isReferencingAdPreviewTweet) _Bool referencingAdPreviewTweet; // @synthesize referencingAdPreviewTweet=_referencingAdPreviewTweet;
@property(copy, nonatomic) NSString *tweetPromptSourceID; // @synthesize tweetPromptSourceID=_tweetPromptSourceID;
@property(nonatomic) unsigned long long positionWithinReplyChain; // @synthesize positionWithinReplyChain=_positionWithinReplyChain;
@property(copy, nonatomic) NSString *replyChainUniqueID; // @synthesize replyChainUniqueID=_replyChainUniqueID;
@property(retain, nonatomic) TFNTwitterCompositionReplyChain *replyChain; // @synthesize replyChain=_replyChain;
@property(copy, nonatomic) NSDictionary *engagementMetadata; // @synthesize engagementMetadata=_engagementMetadata;
@property(nonatomic) unsigned long long conversationControlType; // @synthesize conversationControlType=_conversationControlType;
@property(nonatomic) unsigned long long reactionType; // @synthesize reactionType=_reactionType;
@property(readonly, nonatomic) NSDate *originalPostTime; // @synthesize originalPostTime=_originalPostTime;
@property(copy, nonatomic) NSString *cameraPaletteID; // @synthesize cameraPaletteID=_cameraPaletteID;
@property(nonatomic, getter=isNewsCameraComposition) _Bool newsCameraComposition; // @synthesize newsCameraComposition=_newsCameraComposition;
@property(nonatomic) _Bool periscopeIsLive; // @synthesize periscopeIsLive=_periscopeIsLive;
@property(copy, nonatomic) NSString *periscopeCreatorID; // @synthesize periscopeCreatorID=_periscopeCreatorID;
@property(copy, nonatomic) NSString *periscopeBroadcastID; // @synthesize periscopeBroadcastID=_periscopeBroadcastID;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(retain, nonatomic) TFNTwitterCompositionPollingCard *pollingCard; // @synthesize pollingCard=_pollingCard;
@property(retain, nonatomic) TFNTwitterCompositionCardPreview *cardPreview; // @synthesize cardPreview=_cardPreview;
@property(copy, nonatomic) NSDictionary *mediaScribeParameters; // @synthesize mediaScribeParameters=_mediaScribeParameters;
@property(copy, nonatomic) NSDictionary *extraScribeParameters; // @synthesize extraScribeParameters=_extraScribeParameters;
@property(retain, nonatomic) TFSTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
@property(readonly, nonatomic) NSString *validDisplayText; // @synthesize validDisplayText=_validDisplayText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs; // @synthesize excludedReplyUserIDs=_excludedReplyUserIDs;
@property(nonatomic) _Bool hadFailedSend; // @synthesize hadFailedSend=_hadFailedSend;
@property(nonatomic) unsigned long long draftType; // @synthesize draftType=_draftType;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSDate *retryExpiration; // @synthesize retryExpiration=_retryExpiration;
@property(retain, nonatomic) NSDate *outboxAddedDate; // @synthesize outboxAddedDate=_outboxAddedDate;
@property(retain, nonatomic) NSDate *draftsAddedDate; // @synthesize draftsAddedDate=_draftsAddedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) TFNTwitterGeotag *geotag; // @synthesize geotag=_geotag;
@property(retain, nonatomic) TFNTwitterCompositionReplyChainScribeDetails *replyChainScribeDetails; // @synthesize replyChainScribeDetails=_replyChainScribeDetails;
@property(retain, nonatomic) TFNTwitterCompositionOriginatorStatusInfo *originatorStatusInfo; // @synthesize originatorStatusInfo=_originatorStatusInfo;
@property(retain, nonatomic) TFNTwitterCompositionQuotedStatusInfo *quotedStatusInfo; // @synthesize quotedStatusInfo=_quotedStatusInfo;
@property(retain, nonatomic) TFNTwitterCompositionReplyStatusInfo *replyToStatusInfo; // @synthesize replyToStatusInfo=_replyToStatusInfo;
@property(readonly, nonatomic) NSArray *initiallyMentionedUsers; // @synthesize initiallyMentionedUsers=_initiallyMentionedUsers;
@property(retain, nonatomic) TFSTwitterUserReference *replyToUserReference; // @synthesize replyToUserReference=_replyToUserReference;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyVideos;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyImages;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyGIFs;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationMixedMedia;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationVideos;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationURL;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationText;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationStatus;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationImages;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationGIFs;
- (_Bool)canDropAnimatedGIFsCount:(unsigned long long)arg1;
- (_Bool)canDropVideosCount:(unsigned long long)arg1;
- (_Bool)canDropImagesCount:(unsigned long long)arg1;
- (_Bool)canAddPoll;
- (_Bool)_tfn_canAddPollOrNonImageAttachment;
- (_Bool)canAddImageAttachment;
- (_Bool)canAddQuoteTweet;
- (unsigned long long)imageAttachmentsCountWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *videoAttachments;
@property(readonly, nonatomic) _Bool hasVideoAttachments;
- (_Bool)hasVideoCaptureAttachments;
- (_Bool)hasLivePhotoAttachments;
@property(readonly, nonatomic) _Bool hasAnimatedImageAttachments;
- (_Bool)hasVideoImportAttachments;
- (_Bool)hasPeopleTaggableAttachments;
@property(readonly, nonatomic) _Bool hasImageAttachments;
- (_Bool)hasOnlyImageAttachments;
@property(readonly, nonatomic) _Bool hasAttachments;
@property(readonly, nonatomic) unsigned long long maxNumberOfPhotos;
@property(readonly, nonatomic) NSArray *imageAttachments;
@property(readonly, nonatomic) TFNTwitterMediaAsset *primaryImageAttachment;
@property(readonly, nonatomic) NSString *attachmentURL;
- (_Bool)isReplyUserReferenceExcludable:(id)arg1;
@property(readonly, nonatomic, getter=isTextOnly) _Bool textOnly;
- (void)scribeSendWithScribe:(id)arg1 settings:(id)arg2;
- (id)_tfn_scribeParameterForTweet;
- (id)_tfn_scribeItemForTweet;
- (id)scribeParameters;
- (id)scribePage;
@property(nonatomic) struct _NSRange initialSelectedRange;
- (id)accessibilityText;
- (id)textWithAttachment;
- (_Bool)_tfn_containsMoreThanWhitespace;
- (_Bool)isTextEdited;
- (_Bool)isWorthSending;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)hasEmptyText;
- (_Bool)isWorthSavingLegacy;
- (_Bool)isWorthSaving;
- (long long)remainingCharactersWithInputLocaleIdentifier:(id)arg1;
@property(readonly, nonatomic) long long remainingCharacters;
@property(readonly, nonatomic) long long indexOfFirstOverflowCharacter;
@property(readonly, nonatomic) long long characterCount;
@property(readonly, copy, nonatomic) NSString *textForCharacterCount;
- (long long)_tfn_secureLinkLength;
- (_Bool)isSelfThreadReplyFromUserID:(long long)arg1;
@property(readonly, nonatomic) NSNumber *replyToStatusIDNumber;
@property(readonly, nonatomic, getter=isReply) _Bool reply;
@property(readonly, nonatomic) _Bool hasPoll;
@property(readonly, nonatomic, getter=isQuotedStatusAllowed) _Bool quotedStatusAllowed;
@property(readonly, nonatomic, getter=isCardPreviewAllowed) _Bool cardPreviewAllowed;
@property(readonly, nonatomic) _Bool hasCardPreview;
@property(readonly, nonatomic) NSString *commaSeparatedSemanticAnnotationIds;
@property(readonly, nonatomic, getter=isGeotagged) _Bool geotagged;
- (void)_tfn_cleanupAsset:(id)arg1;
@property(readonly, nonatomic) NSSet *semanticAnnotationIds;
- (void)removeAllSemanticAnnotationIds;
- (void)addSemanticAnnotationIds:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (void)replaceAttachment:(id)arg1 withAttachment:(id)arg2;
- (void)addAttachment:(id)arg1;
- (id)attachmentForAssetReferencedFromAttachment:(id)arg1;
@property(copy, nonatomic) NSArray *attachments;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_tfn_twitterComposition_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialText:(id)arg1 mentionedUsers:(id)arg2;
- (id)init;
- (id)orderedUserReferencesForReplyFromAccount:(id)arg1;
- (id)initialMentionUserIDs;
- (id)statusesUpdateParametersForAccount:(id)arg1;
- (id)_tfn_engagementMetadataParameter;
- (id)_tfn_cardURIParameter;
- (id)_tfn_mediaTagsParameter;
- (id)_tfn_mediaIDsParameter;
- (id)_tfn_geoSearchRequestIDParameter;
- (unsigned long long)_tfn_conversationControlParameter;
- (id)_tfn_geotaggingModeParameter;
- (id)_tfn_placeIDParameter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
