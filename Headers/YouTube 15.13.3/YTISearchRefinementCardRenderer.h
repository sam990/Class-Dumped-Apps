//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand, YTIFormattedString, YTISearchRefinementCardRendererStyle, YTIThumbnailDetails;

@interface YTISearchRefinementCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasSearchEndpoint; // @dynamic hasSearchEndpoint;
@property(nonatomic) _Bool hasSearchRefinementCardRendererStyle; // @dynamic hasSearchRefinementCardRendererStyle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *query; // @dynamic query;
@property(retain, nonatomic) YTICommand *searchEndpoint; // @dynamic searchEndpoint;
@property(retain, nonatomic) YTISearchRefinementCardRendererStyle *searchRefinementCardRendererStyle; // @dynamic searchRefinementCardRendererStyle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
