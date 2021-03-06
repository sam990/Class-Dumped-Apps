//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32Array;

@interface YTIHamplayerABRConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *autoQualityExcludedItagsArray; // @dynamic autoQualityExcludedItagsArray;
@property(readonly, nonatomic) unsigned long long autoQualityExcludedItagsArray_Count; // @dynamic autoQualityExcludedItagsArray_Count;
@property(nonatomic) long long bufferMaxSizeBytes; // @dynamic bufferMaxSizeBytes;
@property(nonatomic) int bufferTargetReadahead; // @dynamic bufferTargetReadahead;
@property(nonatomic) int bufferTrimAhead; // @dynamic bufferTrimAhead;
@property(nonatomic) int bufferTrimBehind; // @dynamic bufferTrimBehind;
@property(nonatomic) float downshiftConstant; // @dynamic downshiftConstant;
@property(nonatomic) float downshiftScalar; // @dynamic downshiftScalar;
@property(nonatomic) _Bool enableClientAbrState; // @dynamic enableClientAbrState;
@property(nonatomic) _Bool enableHfrFiltering; // @dynamic enableHfrFiltering;
@property(nonatomic) _Bool enforceMinUpshiftReadahead; // @dynamic enforceMinUpshiftReadahead;
@property(nonatomic) _Bool fixMinUpshiftTime; // @dynamic fixMinUpshiftTime;
@property(nonatomic) _Bool hasBufferMaxSizeBytes; // @dynamic hasBufferMaxSizeBytes;
@property(nonatomic) _Bool hasBufferTargetReadahead; // @dynamic hasBufferTargetReadahead;
@property(nonatomic) _Bool hasBufferTrimAhead; // @dynamic hasBufferTrimAhead;
@property(nonatomic) _Bool hasBufferTrimBehind; // @dynamic hasBufferTrimBehind;
@property(nonatomic) _Bool hasDownshiftConstant; // @dynamic hasDownshiftConstant;
@property(nonatomic) _Bool hasDownshiftScalar; // @dynamic hasDownshiftScalar;
@property(nonatomic) _Bool hasEnableClientAbrState; // @dynamic hasEnableClientAbrState;
@property(nonatomic) _Bool hasEnableHfrFiltering; // @dynamic hasEnableHfrFiltering;
@property(nonatomic) _Bool hasEnforceMinUpshiftReadahead; // @dynamic hasEnforceMinUpshiftReadahead;
@property(nonatomic) _Bool hasFixMinUpshiftTime; // @dynamic hasFixMinUpshiftTime;
@property(nonatomic) _Bool hasLoadExtraFormats; // @dynamic hasLoadExtraFormats;
@property(nonatomic) _Bool hasLocalMaxBitrateReadahead; // @dynamic hasLocalMaxBitrateReadahead;
@property(nonatomic) _Bool hasLowMemoryBufferSizeCoolDownMs; // @dynamic hasLowMemoryBufferSizeCoolDownMs;
@property(nonatomic) _Bool hasLowMemoryCriticalBufferSizeBytes; // @dynamic hasLowMemoryCriticalBufferSizeBytes;
@property(nonatomic) _Bool hasLowMemoryWarnBufferSizeBytes; // @dynamic hasLowMemoryWarnBufferSizeBytes;
@property(nonatomic) _Bool hasMaxChunksPerRequest; // @dynamic hasMaxChunksPerRequest;
@property(nonatomic) _Bool hasMaxConsecutiveErrors; // @dynamic hasMaxConsecutiveErrors;
@property(nonatomic) _Bool hasMaxDownshiftReadaheadMs; // @dynamic hasMaxDownshiftReadaheadMs;
@property(nonatomic) _Bool hasMaxMediaSecondsPerRequest; // @dynamic hasMaxMediaSecondsPerRequest;
@property(nonatomic) _Bool hasMinReadaheadForAverageBitrate; // @dynamic hasMinReadaheadForAverageBitrate;
@property(nonatomic) _Bool hasMinUpshiftReadaheadMs; // @dynamic hasMinUpshiftReadaheadMs;
@property(nonatomic) _Bool hasMinUpshiftReplaceChunksReadaheadMs; // @dynamic hasMinUpshiftReplaceChunksReadaheadMs;
@property(nonatomic) _Bool hasOversendFactor; // @dynamic hasOversendFactor;
@property(nonatomic) _Bool hasStickyCeilingOverridesViewportSize; // @dynamic hasStickyCeilingOverridesViewportSize;
@property(nonatomic) _Bool hasStunDuration; // @dynamic hasStunDuration;
@property(nonatomic) _Bool hasSyncReadahead; // @dynamic hasSyncReadahead;
@property(nonatomic) _Bool hasUpshiftConstant; // @dynamic hasUpshiftConstant;
@property(nonatomic) _Bool hasUpshiftReplaceChunksInPlace; // @dynamic hasUpshiftReplaceChunksInPlace;
@property(nonatomic) _Bool hasUpshiftReplaceMedia; // @dynamic hasUpshiftReplaceMedia;
@property(nonatomic) _Bool hasUpshiftScalar; // @dynamic hasUpshiftScalar;
@property(nonatomic) _Bool hasUseHighReplicationFormatsWhileStunned; // @dynamic hasUseHighReplicationFormatsWhileStunned;
@property(nonatomic) _Bool loadExtraFormats; // @dynamic loadExtraFormats;
@property(nonatomic) int localMaxBitrateReadahead; // @dynamic localMaxBitrateReadahead;
@property(nonatomic) long long lowMemoryBufferSizeCoolDownMs; // @dynamic lowMemoryBufferSizeCoolDownMs;
@property(nonatomic) long long lowMemoryCriticalBufferSizeBytes; // @dynamic lowMemoryCriticalBufferSizeBytes;
@property(nonatomic) long long lowMemoryWarnBufferSizeBytes; // @dynamic lowMemoryWarnBufferSizeBytes;
@property(nonatomic) int maxChunksPerRequest; // @dynamic maxChunksPerRequest;
@property(nonatomic) int maxConsecutiveErrors; // @dynamic maxConsecutiveErrors;
@property(nonatomic) int maxDownshiftReadaheadMs; // @dynamic maxDownshiftReadaheadMs;
@property(nonatomic) int maxMediaSecondsPerRequest; // @dynamic maxMediaSecondsPerRequest;
@property(nonatomic) int minReadaheadForAverageBitrate; // @dynamic minReadaheadForAverageBitrate;
@property(nonatomic) int minUpshiftReadaheadMs; // @dynamic minUpshiftReadaheadMs;
@property(nonatomic) int minUpshiftReplaceChunksReadaheadMs; // @dynamic minUpshiftReplaceChunksReadaheadMs;
@property(nonatomic) float oversendFactor; // @dynamic oversendFactor;
@property(nonatomic) _Bool stickyCeilingOverridesViewportSize; // @dynamic stickyCeilingOverridesViewportSize;
@property(nonatomic) int stunDuration; // @dynamic stunDuration;
@property(nonatomic) int syncReadahead; // @dynamic syncReadahead;
@property(nonatomic) float upshiftConstant; // @dynamic upshiftConstant;
@property(nonatomic) _Bool upshiftReplaceChunksInPlace; // @dynamic upshiftReplaceChunksInPlace;
@property(nonatomic) _Bool upshiftReplaceMedia; // @dynamic upshiftReplaceMedia;
@property(nonatomic) float upshiftScalar; // @dynamic upshiftScalar;
@property(nonatomic) _Bool useHighReplicationFormatsWhileStunned; // @dynamic useHighReplicationFormatsWhileStunned;

@end

