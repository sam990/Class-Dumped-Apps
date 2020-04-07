//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIEffectPackageConfig, YTIFeatureControl, YTILoggingInfo, YTIRenderer, YTIWebServingLayer;

@interface YTIArCampaignRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *arCameraStatusKey; // @dynamic arCameraStatusKey;
@property(copy, nonatomic) NSString *campaignId; // @dynamic campaignId;
@property(retain, nonatomic) YTIEffectPackageConfig *effectPackageConfig; // @dynamic effectPackageConfig;
@property(retain, nonatomic) YTIFeatureControl *featureControl; // @dynamic featureControl;
@property(nonatomic) _Bool hasArCameraStatusKey; // @dynamic hasArCameraStatusKey;
@property(nonatomic) _Bool hasCampaignId; // @dynamic hasCampaignId;
@property(nonatomic) _Bool hasEffectPackageConfig; // @dynamic hasEffectPackageConfig;
@property(nonatomic) _Bool hasFeatureControl; // @dynamic hasFeatureControl;
@property(nonatomic) _Bool hasLoggingInfo; // @dynamic hasLoggingInfo;
@property(nonatomic) _Bool hasProductBannerHintRenderer; // @dynamic hasProductBannerHintRenderer;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasWebServingLayer; // @dynamic hasWebServingLayer;
@property(nonatomic) _Bool hasWelcomeElementRenderer; // @dynamic hasWelcomeElementRenderer;
@property(retain, nonatomic) YTILoggingInfo *loggingInfo; // @dynamic loggingInfo;
@property(retain, nonatomic) YTIRenderer *productBannerHintRenderer; // @dynamic productBannerHintRenderer;
@property(retain, nonatomic) YTIRenderer *survey; // @dynamic survey;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIWebServingLayer *webServingLayer; // @dynamic webServingLayer;
@property(retain, nonatomic) YTIRenderer *welcomeElementRenderer; // @dynamic welcomeElementRenderer;

@end
