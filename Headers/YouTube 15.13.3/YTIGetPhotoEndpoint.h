//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIButtonSupportedRenderers, YTIFormattedString, YTIGetPhotoEndpoint_CropParams;

@interface YTIGetPhotoEndpoint : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasVisualCropRegions;
- (double)extraVisualCropRatio;
- (double)visualCropRatio;
- (double)primaryCropRatio;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *confirmButton; // @dynamic confirmButton;
@property(retain, nonatomic) YTIFormattedString *cropInfo; // @dynamic cropInfo;
@property(retain, nonatomic) YTIGetPhotoEndpoint_CropParams *cropParams; // @dynamic cropParams;
@property(nonatomic) _Bool hasConfirmButton; // @dynamic hasConfirmButton;
@property(nonatomic) _Bool hasCropInfo; // @dynamic hasCropInfo;
@property(nonatomic) _Bool hasCropParams; // @dynamic hasCropParams;
@property(nonatomic) _Bool hasPhotoAction; // @dynamic hasPhotoAction;
@property(nonatomic) int photoAction; // @dynamic photoAction;

@end

