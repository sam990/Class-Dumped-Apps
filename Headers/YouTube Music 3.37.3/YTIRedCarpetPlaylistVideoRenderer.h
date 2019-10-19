//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTRendererForOfflineVideo-Protocol.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIIosClientOfflineData, YTIRenderer, YTIThumbnailDetails, YTIVideoClientBindingData;

@interface YTIRedCarpetPlaylistVideoRenderer : GPBMessage <YTRendererForOfflineVideo>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIVideoClientBindingData *videoClientBindingData;
@property(readonly, nonatomic) _Bool hasVideoClientBindingData;
- (void)setIosClientOfflineData:(id)arg1;
@property(readonly, nonatomic) YTIIosClientOfflineData *iosClientOfflineData;
@property(readonly, nonatomic) _Bool hasIosClientOfflineData;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *aboveTitleBadge; // @dynamic aboveTitleBadge;
@property(retain, nonatomic) YTIRenderer *belowTitleBadge; // @dynamic belowTitleBadge;
@property(retain, nonatomic) YTIFormattedString *contentDescription; // @dynamic contentDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContentDescription; // @dynamic hasContentDescription;
@property(nonatomic) _Bool hasLayoutStyle; // @dynamic hasLayoutStyle;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(readonly) unsigned long long hash;
@property(nonatomic) int layoutStyle; // @dynamic layoutStyle;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIRenderer *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(readonly, nonatomic) int titleBadgeOneOfCase; // @dynamic titleBadgeOneOfCase;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end
