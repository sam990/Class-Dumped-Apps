//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIClientData_UploadData_EditData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool audioswapEnabled; // @dynamic audioswapEnabled;
@property(nonatomic) long long audioswapOffsetUs; // @dynamic audioswapOffsetUs;
@property(nonatomic) _Bool audioswapRepeat; // @dynamic audioswapRepeat;
@property(copy, nonatomic) NSString *audioswapSourceUri; // @dynamic audioswapSourceUri;
@property(nonatomic) float audioswapVolume; // @dynamic audioswapVolume;
@property(copy, nonatomic) NSString *captureSelectedFilter; // @dynamic captureSelectedFilter;
@property(nonatomic) _Bool hasAudioswapEnabled; // @dynamic hasAudioswapEnabled;
@property(nonatomic) _Bool hasAudioswapOffsetUs; // @dynamic hasAudioswapOffsetUs;
@property(nonatomic) _Bool hasAudioswapRepeat; // @dynamic hasAudioswapRepeat;
@property(nonatomic) _Bool hasAudioswapSourceUri; // @dynamic hasAudioswapSourceUri;
@property(nonatomic) _Bool hasAudioswapVolume; // @dynamic hasAudioswapVolume;
@property(nonatomic) _Bool hasCaptureSelectedFilter; // @dynamic hasCaptureSelectedFilter;
@property(nonatomic) _Bool hasOnlyUploadOverWifi; // @dynamic hasOnlyUploadOverWifi;
@property(nonatomic) _Bool hasSelectedFilter; // @dynamic hasSelectedFilter;
@property(nonatomic) _Bool hasSourceSlowMotion; // @dynamic hasSourceSlowMotion;
@property(nonatomic) _Bool hasStickerPosLayersUsed; // @dynamic hasStickerPosLayersUsed;
@property(nonatomic) _Bool hasTextPosLayersUsed; // @dynamic hasTextPosLayersUsed;
@property(nonatomic) _Bool hasTrimEnabled; // @dynamic hasTrimEnabled;
@property(nonatomic) _Bool hasTrimEndTimeUs; // @dynamic hasTrimEndTimeUs;
@property(nonatomic) _Bool hasTrimStartTimeUs; // @dynamic hasTrimStartTimeUs;
@property(nonatomic) _Bool onlyUploadOverWifi; // @dynamic onlyUploadOverWifi;
@property(copy, nonatomic) NSString *selectedFilter; // @dynamic selectedFilter;
@property(nonatomic) _Bool sourceSlowMotion; // @dynamic sourceSlowMotion;
@property(nonatomic) _Bool stickerPosLayersUsed; // @dynamic stickerPosLayersUsed;
@property(nonatomic) _Bool textPosLayersUsed; // @dynamic textPosLayersUsed;
@property(nonatomic) _Bool trimEnabled; // @dynamic trimEnabled;
@property(nonatomic) long long trimEndTimeUs; // @dynamic trimEndTimeUs;
@property(nonatomic) long long trimStartTimeUs; // @dynamic trimStartTimeUs;

@end

