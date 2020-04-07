//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails, YTIUnpluggedFamilyFlowConfirmationSupportedRenderers;

@interface YTIUnpluggedFamilyFlowProfileRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIUnpluggedFamilyFlowConfirmationSupportedRenderers *confirmation; // @dynamic confirmation;
@property(retain, nonatomic) YTIFormattedString *content; // @dynamic content;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTIFormattedString *footer; // @dynamic footer;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasConfirmation; // @dynamic hasConfirmation;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasMainThumbnail; // @dynamic hasMainThumbnail;
@property(nonatomic) _Bool hasManageButton; // @dynamic hasManageButton;
@property(nonatomic) _Bool hasThumbnailInfo; // @dynamic hasThumbnailInfo;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *mainThumbnail; // @dynamic mainThumbnail;
@property(retain, nonatomic) YTIButtonSupportedRenderers *manageButton; // @dynamic manageButton;
@property(retain, nonatomic) NSMutableArray *secondaryThumbnailsArray; // @dynamic secondaryThumbnailsArray;
@property(readonly, nonatomic) unsigned long long secondaryThumbnailsArray_Count; // @dynamic secondaryThumbnailsArray_Count;
@property(retain, nonatomic) YTIFormattedString *thumbnailInfo; // @dynamic thumbnailInfo;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
