//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIMenuSupportedRenderers, YTIPlayerOverlayVideoInteractions, YTIReelPlayerHeaderSupportedRenderers, YTIReelPlayerProgressSupportedRenderers, YTIRenderer, YTIVideoReportingSupportedRenderers;

@interface YTIReelPlayerOverlayRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *autoplayRenderer; // @dynamic autoplayRenderer;
@property(retain, nonatomic) YTIRenderer *createCommentButton; // @dynamic createCommentButton;
@property(nonatomic) _Bool hasAutoplayRenderer; // @dynamic hasAutoplayRenderer;
@property(nonatomic) _Bool hasCreateCommentButton; // @dynamic hasCreateCommentButton;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLikeOption; // @dynamic hasLikeOption;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNextItemButton; // @dynamic hasNextItemButton;
@property(nonatomic) _Bool hasPrevItemButton; // @dynamic hasPrevItemButton;
@property(nonatomic) _Bool hasReelPlayerHeaderSupportedRenderers; // @dynamic hasReelPlayerHeaderSupportedRenderers;
@property(nonatomic) _Bool hasReelPlayerNavigationModel; // @dynamic hasReelPlayerNavigationModel;
@property(nonatomic) _Bool hasReelPlayerProgressSupportedRenderers; // @dynamic hasReelPlayerProgressSupportedRenderers;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasSubscribeButtonRenderer; // @dynamic hasSubscribeButtonRenderer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoInteractions; // @dynamic hasVideoInteractions;
@property(nonatomic) _Bool hasVideoReporting; // @dynamic hasVideoReporting;
@property(nonatomic) _Bool hasViewCommentsButton; // @dynamic hasViewCommentsButton;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(nonatomic) _Bool hasVodLinkRenderer; // @dynamic hasVodLinkRenderer;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(nonatomic) int likeOption; // @dynamic likeOption;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTIRenderer *nextItemButton; // @dynamic nextItemButton;
@property(retain, nonatomic) YTIRenderer *prevItemButton; // @dynamic prevItemButton;
@property(retain, nonatomic) YTIReelPlayerHeaderSupportedRenderers *reelPlayerHeaderSupportedRenderers; // @dynamic reelPlayerHeaderSupportedRenderers;
@property(nonatomic) int reelPlayerNavigationModel; // @dynamic reelPlayerNavigationModel;
@property(retain, nonatomic) YTIReelPlayerProgressSupportedRenderers *reelPlayerProgressSupportedRenderers; // @dynamic reelPlayerProgressSupportedRenderers;
@property(retain, nonatomic) YTIRenderer *shareButton; // @dynamic shareButton;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIRenderer *subscribeButtonRenderer; // @dynamic subscribeButtonRenderer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIPlayerOverlayVideoInteractions *videoInteractions; // @dynamic videoInteractions;
@property(retain, nonatomic) YTIVideoReportingSupportedRenderers *videoReporting; // @dynamic videoReporting;
@property(retain, nonatomic) YTIRenderer *viewCommentsButton; // @dynamic viewCommentsButton;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;
@property(retain, nonatomic) YTIRenderer *vodLinkRenderer; // @dynamic vodLinkRenderer;

@end
