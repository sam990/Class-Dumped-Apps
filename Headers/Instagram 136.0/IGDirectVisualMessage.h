//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMessageActionSummaryProvider-Protocol.h>
#import <FBSharedFramework/IGDirectMessageProtocol-Protocol.h>
#import <FBSharedFramework/IGDirectMessageReplyable-Protocol.h>
#import <FBSharedFramework/IGMediaPreloaderItem-Protocol.h>
#import <FBSharedFramework/IGPhotosRenderedTracking-Protocol.h>

@class IGDirectMessageMetadata, IGDirectPublishedMessageVisualMediaInfo, IGDirectQuotedPublishedMessage, NSArray, NSString, NSURL, UIImage;

@interface IGDirectVisualMessage : NSObject <IGDirectMessageActionSummaryProvider, IGDirectMessageProtocol, IGDirectMessageReplyable, IGMediaPreloaderItem, IGPhotosRenderedTracking>
{
    NSURL *_initialUploadVideoURL;
    NSString *_tombstoneTextCaption;
    IGDirectQuotedPublishedMessage *_quotedMessage;
    NSArray *_likers;
    NSArray *_reactions;
    IGDirectMessageMetadata *_metadata;
    IGDirectPublishedMessageVisualMediaInfo *_visualMediaInfo;
    UIImage *_pendingUploadImage;
    NSString *_dependentMediaUploadId;
}

@property(readonly, copy, nonatomic) NSString *tombstoneTextCaption; // @synthesize tombstoneTextCaption=_tombstoneTextCaption;
@property(readonly, nonatomic) NSString *dependentMediaUploadId; // @synthesize dependentMediaUploadId=_dependentMediaUploadId;
@property(readonly, nonatomic) UIImage *pendingUploadImage; // @synthesize pendingUploadImage=_pendingUploadImage;
@property(readonly, nonatomic) IGDirectPublishedMessageVisualMediaInfo *visualMediaInfo; // @synthesize visualMediaInfo=_visualMediaInfo;
@property(readonly, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, nonatomic) IGDirectQuotedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
- (void).cxx_destruct;
- (id)mediaId;
- (id)video;
- (id)photo;
- (long long)mediaType;
- (id)pk;
- (id)currentActionSummary;
- (long long)replyType;
- (long long)replyableConfigurationMediaViewMode;
- (id)replyableConfigurationMedia;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)_copyWithPreservedPendingInformation;
- (id)copyWithTapModels:(id)arg1;
- (id)copyWithPreservedInfoFromUnexpiredMessage:(id)arg1;
- (id)copyWithSeenCountForCurrentUser:(long long)arg1 isExpired:(_Bool)arg2;
@property(readonly, nonatomic) NSURL *pendingVideoURL;
- (_Bool)_isValidPendingVideo;
- (_Bool)hasValidPendingMedia;
- (_Bool)isPending;
- (_Bool)isExpired;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageMetadata:(id)arg1 mediaType:(long long)arg2 viewMode:(long long)arg3 replyType:(long long)arg4 textLabelCaptions:(id)arg5 uploadImage:(id)arg6 initialUploadVideoURL:(id)arg7 dependentMediaUploadId:(id)arg8;
- (id)initWithMetadata:(id)arg1 mediaType:(long long)arg2 mediaId:(id)arg3 photo:(id)arg4 video:(id)arg5 viewMode:(long long)arg6 textLabelCaptions:(id)arg7 playbackDuration:(double)arg8 mediaUrlGoesStaleDate:(id)arg9 actionSummary:(id)arg10 seenCountForCurrentUser:(long long)arg11 viewers:(id)arg12 replyType:(long long)arg13 organicTrackingToken:(id)arg14 archivedMediaDate:(id)arg15 likers:(id)arg16 reactions:(id)arg17 attributionModel:(id)arg18 tapModels:(id)arg19 creativeConfig:(id)arg20;
- (id)initWithMetadata:(id)arg1 visualMediaInfo:(id)arg2 likers:(id)arg3 reactions:(id)arg4;
- (_Bool)messageWasSentMoreThan24HoursAgo;
- (_Bool)isPermanentlyPlayable;
- (_Bool)isReplayableForCurrentUser;
- (_Bool)isSeenByCurrentUser;
- (_Bool)mediaUrlIsStale;
- (id)creativeConfig;
- (id)rawTapModelArray;
- (id)rawViewers;
- (id)rawMediaId;
- (long long)rawMediaType;
- (id)attributionModel;
- (id)archivedMediaDate;
- (id)organicTrackingToken;
- (id)mediaUrlGoesStaleDate;
- (double)customPlaybackDuration;
- (id)actionSummary;
- (long long)seenCountForCurrentUser;
- (id)textLabelCaptions;
- (long long)viewMode;
- (id)rawVideo;
- (id)rawPhoto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

