//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIChannelSubscribeButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIMainAppCompactRendererStyle, YTIStandaloneBadgeSupportedRenderers, YTISubscriptionButton, YTIThumbnailDetails;

@interface YTIChannelRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *activityText; // @dynamic activityText;
@property(retain, nonatomic) YTIFormattedString *additionalChannelCountText; // @dynamic additionalChannelCountText;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(retain, nonatomic) YTIFormattedString *descriptionSnippet; // @dynamic descriptionSnippet;
@property(nonatomic) _Bool hasActivityText; // @dynamic hasActivityText;
@property(nonatomic) _Bool hasAdditionalChannelCountText; // @dynamic hasAdditionalChannelCountText;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDescriptionSnippet; // @dynamic hasDescriptionSnippet;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortSubscriberCountText; // @dynamic hasShortSubscriberCountText;
@property(nonatomic) _Bool hasShortVideoCountText; // @dynamic hasShortVideoCountText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasSubscriptionButton; // @dynamic hasSubscriptionButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortSubscriberCountText; // @dynamic shortSubscriberCountText;
@property(retain, nonatomic) YTIFormattedString *shortVideoCountText; // @dynamic shortVideoCountText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(retain, nonatomic) YTIChannelSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTISubscriptionButton *subscriptionButton; // @dynamic subscriptionButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;

@end
