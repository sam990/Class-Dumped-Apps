//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTISharePanelTitleRenderer, YTISharePanelTitleV15Renderer;

@interface YTISharePanelTitleSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTISharePanelTitleRenderer *sharePanelTitleRenderer; // @dynamic sharePanelTitleRenderer;
@property(retain, nonatomic) YTISharePanelTitleV15Renderer *sharePanelTitleV15Renderer; // @dynamic sharePanelTitleV15Renderer;

@end

