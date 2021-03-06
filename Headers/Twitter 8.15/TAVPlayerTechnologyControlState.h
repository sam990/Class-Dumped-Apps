//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol TAVMediaSelectionOption;

@interface TAVPlayerTechnologyControlState : NSObject
{
    _Bool _isPlaybackDesired;
    _Bool _isMuted;
    _Bool _allowsExternalPlayback;
    _Bool _captionsEnabled;
    _Bool _shouldLoop;
    _Bool _preventSleep;
    float _volume;
    double _preferredPeakBitrate;
    double _preferredForwardBufferDuration;
    id <TAVMediaSelectionOption> _selectedLegibleMediaOption;
    NSNumber *_targetRelativePresentationOffset;
    struct CGSize _preferredMaximumResolution;
}

@property(nonatomic) _Bool preventSleep; // @synthesize preventSleep=_preventSleep;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(copy, nonatomic) NSNumber *targetRelativePresentationOffset; // @synthesize targetRelativePresentationOffset=_targetRelativePresentationOffset;
@property(nonatomic) _Bool captionsEnabled; // @synthesize captionsEnabled=_captionsEnabled;
@property(copy, nonatomic) id <TAVMediaSelectionOption> selectedLegibleMediaOption; // @synthesize selectedLegibleMediaOption=_selectedLegibleMediaOption;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;
@property(nonatomic) struct CGSize preferredMaximumResolution; // @synthesize preferredMaximumResolution=_preferredMaximumResolution;
@property(nonatomic) double preferredPeakBitrate; // @synthesize preferredPeakBitrate=_preferredPeakBitrate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isPlaybackDesired; // @synthesize isPlaybackDesired=_isPlaybackDesired;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIsPlaybackDesired:(_Bool)arg1 isMuted:(_Bool)arg2 volume:(float)arg3 preferredPeakBitrate:(double)arg4 preferredMaximumResolution:(struct CGSize)arg5 preferredForwardBufferDuration:(double)arg6 allowsExternalPlayback:(_Bool)arg7 selectedLegibleMediaOption:(id)arg8 captionsEnabled:(_Bool)arg9 targetRelativePresentationOffset:(id)arg10 shouldLoop:(_Bool)arg11 preventSleep:(_Bool)arg12;

@end

