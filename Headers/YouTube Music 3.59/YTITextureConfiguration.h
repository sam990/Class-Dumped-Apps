//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTITextureRangeConfiguration;

@interface YTITextureConfiguration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int cellLayoutMode; // @dynamic cellLayoutMode;
@property(nonatomic) unsigned int diskImageCacheLimitBytes; // @dynamic diskImageCacheLimitBytes;
@property(nonatomic) _Bool enableStatusView; // @dynamic enableStatusView;
@property(nonatomic) _Bool enableTextureImageDownloader; // @dynamic enableTextureImageDownloader;
@property(nonatomic) _Bool enableTextureSyncDataLoading; // @dynamic enableTextureSyncDataLoading;
@property(nonatomic) _Bool globallyEnable; // @dynamic globallyEnable;
@property(nonatomic) _Bool hasCellLayoutMode; // @dynamic hasCellLayoutMode;
@property(nonatomic) _Bool hasDiskImageCacheLimitBytes; // @dynamic hasDiskImageCacheLimitBytes;
@property(nonatomic) _Bool hasEnableStatusView; // @dynamic hasEnableStatusView;
@property(nonatomic) _Bool hasEnableTextureImageDownloader; // @dynamic hasEnableTextureImageDownloader;
@property(nonatomic) _Bool hasEnableTextureSyncDataLoading; // @dynamic hasEnableTextureSyncDataLoading;
@property(nonatomic) _Bool hasGloballyEnable; // @dynamic hasGloballyEnable;
@property(nonatomic) _Bool hasImmediatelyApplyCellLayouts; // @dynamic hasImmediatelyApplyCellLayouts;
@property(nonatomic) _Bool hasMaxConcurrentImageDownloads; // @dynamic hasMaxConcurrentImageDownloads;
@property(nonatomic) _Bool hasProtoArenaEnabled; // @dynamic hasProtoArenaEnabled;
@property(nonatomic) _Bool hasRemeasureDuringLayoutPassOnBoundsChange; // @dynamic hasRemeasureDuringLayoutPassOnBoundsChange;
@property(nonatomic) _Bool hasTextureRangeConfig; // @dynamic hasTextureRangeConfig;
@property(nonatomic) _Bool immediatelyApplyCellLayouts; // @dynamic immediatelyApplyCellLayouts;
@property(nonatomic) unsigned int maxConcurrentImageDownloads; // @dynamic maxConcurrentImageDownloads;
@property(nonatomic) _Bool protoArenaEnabled; // @dynamic protoArenaEnabled;
@property(nonatomic) _Bool remeasureDuringLayoutPassOnBoundsChange; // @dynamic remeasureDuringLayoutPassOnBoundsChange;
@property(retain, nonatomic) YTITextureRangeConfiguration *textureRangeConfig; // @dynamic textureRangeConfig;

@end

