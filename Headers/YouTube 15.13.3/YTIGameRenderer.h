//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIGameTrailerSupportedRenderers, YTIGamingSubscribeButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTIGameRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributionLinksArray; // @dynamic attributionLinksArray;
@property(readonly, nonatomic) unsigned long long attributionLinksArray_Count; // @dynamic attributionLinksArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *boxArt; // @dynamic boxArt;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) NSMutableArray *genresArray; // @dynamic genresArray;
@property(readonly, nonatomic) unsigned long long genresArray_Count; // @dynamic genresArray_Count;
@property(nonatomic) _Bool hasBoxArt; // @dynamic hasBoxArt;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasKgEntityId; // @dynamic hasKgEntityId;
@property(nonatomic) _Bool hasOfficialWebsite; // @dynamic hasOfficialWebsite;
@property(nonatomic) _Bool hasReleaseDate; // @dynamic hasReleaseDate;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTrailer; // @dynamic hasTrailer;
@property(copy, nonatomic) NSString *kgEntityId; // @dynamic kgEntityId;
@property(retain, nonatomic) NSMutableArray *metadataFieldsArray; // @dynamic metadataFieldsArray;
@property(readonly, nonatomic) unsigned long long metadataFieldsArray_Count; // @dynamic metadataFieldsArray_Count;
@property(retain, nonatomic) YTICommand *officialWebsite; // @dynamic officialWebsite;
@property(retain, nonatomic) YTIFormattedString *releaseDate; // @dynamic releaseDate;
@property(retain, nonatomic) YTIGamingSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIGameTrailerSupportedRenderers *trailer; // @dynamic trailer;

@end
