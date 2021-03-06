//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTPlayableEntry-Protocol.h"
#import "YTVideoViewModel-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIChannelThumbnailSupportedRenderers, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIPromotedVideoCTASupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData;

@interface YTIRadioRenderer : GPBMessage <YTPlayableEntry, YTVideoViewModel>
{
}

+ (id)descriptor;
- (id)hintRenderer;
- (_Bool)hasInlinePlaybackEndpoint;
- (id)inlinePlaybackEndpoint;
@property(readonly, nonatomic) _Bool hasLengthText;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) _Bool isAd;
@property(readonly, nonatomic) _Bool hasPresentationStyle;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) YTIFormattedString *descriptionP;
@property(readonly, nonatomic) _Bool hasDescriptionP;
@property(readonly, nonatomic) _Bool hasOwnerText;
@property(readonly, nonatomic) YTIFormattedString *ownerText;
@property(readonly, nonatomic) _Bool hasRecommendationText;
@property(readonly, nonatomic) YTIFormattedString *recommendationText;
@property(readonly, nonatomic) _Bool hasIsWatched;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) _Bool hasSecondaryHeadline;
@property(readonly, nonatomic) YTIFormattedString *secondaryHeadline;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) YTIPromotedVideoCTASupportedRenderers *ctaRenderer;
@property(readonly, nonatomic) _Bool hasCtaRenderer;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *thumbnailBadgesArray;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@property(readonly, nonatomic) _Bool hasChannelThumbnailSupportedRenderers;
@property(readonly, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnailSupportedRenderers;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalThumbnailsArray; // @dynamic additionalThumbnailsArray;
@property(readonly, nonatomic) unsigned long long additionalThumbnailsArray_Count; // @dynamic additionalThumbnailsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasRadioRendererStyle; // @dynamic hasRadioRendererStyle;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailText; // @dynamic hasThumbnailText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoCountShortText; // @dynamic hasVideoCountShortText;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) int radioRendererStyle; // @dynamic radioRendererStyle;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *thumbnailText; // @dynamic thumbnailText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *videoCountShortText; // @dynamic videoCountShortText;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;

@end

