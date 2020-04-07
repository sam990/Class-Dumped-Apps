//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIAudioTrackData, YTIPlayerCaptionsMetadataSupportedRenderers;

@interface YTIPlayerCaptionsTrackListRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)captionTrackWithEntry:(id)arg1;
- (void)enumerateCaptionTrackEntriesForAudioTrackData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 includeForcedTrack:(_Bool)arg3;
- (id)defaultCaptionTrackForAudioTrackData:(id)arg1;
- (id)forcedCaptionTrackForAudioTrackData:(id)arg1;
- (id)userVisibleCaptionTracksForAudioTrackData:(id)arg1;
- (id)audioTrackDataForAudioTrack:(id)arg1;
- (int)visibilityForAudioTrack:(id)arg1;
- (void)enumerateAllCaptionTrackEntriesForAudioTrack:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)defaultCaptionTrackForAudioTrack:(id)arg1;
- (id)forcedCaptionTrackForAudioTrack:(id)arg1;
- (id)userVisibleCaptionTracksForAudioTrack:(id)arg1;
- (void)enumerateAllOfflineableCaptionTrackEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllCaptionTrackEntriesForDefaultAudioTrackUsingBlock:(CDUnknownBlockType)arg1;
- (id)captionTrackAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YTIAudioTrackData *defaultAudioTrackData;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioTracksArray; // @dynamic audioTracksArray;
@property(readonly, nonatomic) unsigned long long audioTracksArray_Count; // @dynamic audioTracksArray_Count;
@property(retain, nonatomic) NSMutableArray *captionTracksArray; // @dynamic captionTracksArray;
@property(readonly, nonatomic) unsigned long long captionTracksArray_Count; // @dynamic captionTracksArray_Count;
@property(retain, nonatomic) YTIPlayerCaptionsMetadataSupportedRenderers *contribute; // @dynamic contribute;
@property(nonatomic) int defaultAudioTrackIndex; // @dynamic defaultAudioTrackIndex;
@property(nonatomic) _Bool hasContribute; // @dynamic hasContribute;
@property(nonatomic) _Bool hasDefaultAudioTrackIndex; // @dynamic hasDefaultAudioTrackIndex;

@end
