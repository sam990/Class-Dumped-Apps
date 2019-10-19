//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTCPN;

@interface YTVSS3State : NSObject
{
    _Bool _blackoutActive;
    _Bool _muted;
    _Bool _userAudioOnlyModeActive;
    int _visibility;
    int _connectionType;
    float _playbackRate;
    int _outputVolume;
    YTCPN *_CPN;
    NSString *_videoID;
    double _mediaLength;
    NSString *_captionTrackID;
    NSString *_audioTrackID;
}

@property(nonatomic) int outputVolume; // @synthesize outputVolume=_outputVolume;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) NSString *audioTrackID; // @synthesize audioTrackID=_audioTrackID;
@property(retain, nonatomic) NSString *captionTrackID; // @synthesize captionTrackID=_captionTrackID;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic, getter=isUserAudioOnlyModeActive) _Bool userAudioOnlyModeActive; // @synthesize userAudioOnlyModeActive=_userAudioOnlyModeActive;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic, getter=isBlackoutActive) _Bool blackoutActive; // @synthesize blackoutActive=_blackoutActive;
@property(readonly, nonatomic) double mediaLength; // @synthesize mediaLength=_mediaLength;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) YTCPN *CPN; // @synthesize CPN=_CPN;
- (void).cxx_destruct;
- (id)watchTimeSegmentWithCurrentState;
- (id)initWithCPN:(id)arg1 videoID:(id)arg2 mediaLength:(double)arg3;

@end
