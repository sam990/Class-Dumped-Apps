//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PTVGuestRoomConfiguration : NSObject
{
    NSNumber *_bitsPerSecond;
    NSNumber *_videoBitrateRatio;
    _Bool _isAudioOnly;
    _Bool _isPrivateBroadcast;
    NSString *_roomID;
    NSString *_vidManToken;
    NSString *_janusURL;
    NSString *_streamName;
    NSString *_guestServicesSessionUUID;
    NSNumber *_initialBitrate;
}

@property(readonly, nonatomic) NSNumber *initialBitrate; // @synthesize initialBitrate=_initialBitrate;
@property(readonly, nonatomic) _Bool isPrivateBroadcast; // @synthesize isPrivateBroadcast=_isPrivateBroadcast;
@property(readonly, nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly, nonatomic) NSString *guestServicesSessionUUID; // @synthesize guestServicesSessionUUID=_guestServicesSessionUUID;
@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(readonly, nonatomic) NSString *janusURL; // @synthesize janusURL=_janusURL;
@property(readonly, nonatomic) NSString *vidManToken; // @synthesize vidManToken=_vidManToken;
@property(readonly, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (void)calculateInitialBitrateIfNeeded;
- (id)initWithRoomID:(id)arg1 streamName:(id)arg2 vidManToken:(id)arg3 bitsPerSecond:(id)arg4 videoBitrateRatio:(id)arg5 janusURL:(id)arg6 guestServicesSessionUUID:(id)arg7 isAudioOnly:(_Bool)arg8 isPrivateBroadcast:(_Bool)arg9;

@end

