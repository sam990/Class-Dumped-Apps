//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMdeMonetizationGuidelinesRenderer, YTIMdeMonetizationMidrollsRenderer, YTIMdeMonetizationSettingRenderer, YTIMessageRenderer;

@interface YTIMdeMonetizationSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMdeMonetizationGuidelinesRenderer; // @dynamic hasMdeMonetizationGuidelinesRenderer;
@property(nonatomic) _Bool hasMdeMonetizationMidrollsRenderer; // @dynamic hasMdeMonetizationMidrollsRenderer;
@property(nonatomic) _Bool hasMdeMonetizationSettingRenderer; // @dynamic hasMdeMonetizationSettingRenderer;
@property(nonatomic) _Bool hasMessageRenderer; // @dynamic hasMessageRenderer;
@property(retain, nonatomic) YTIMdeMonetizationGuidelinesRenderer *mdeMonetizationGuidelinesRenderer; // @dynamic mdeMonetizationGuidelinesRenderer;
@property(retain, nonatomic) YTIMdeMonetizationMidrollsRenderer *mdeMonetizationMidrollsRenderer; // @dynamic mdeMonetizationMidrollsRenderer;
@property(retain, nonatomic) YTIMdeMonetizationSettingRenderer *mdeMonetizationSettingRenderer; // @dynamic mdeMonetizationSettingRenderer;
@property(retain, nonatomic) YTIMessageRenderer *messageRenderer; // @dynamic messageRenderer;

@end

