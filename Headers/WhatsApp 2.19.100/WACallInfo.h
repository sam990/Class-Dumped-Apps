//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACallCommonInfo.h"

@class NSArray, WACallHeldInfo, WACallParticipantInfo, WACallPendingInfo, WAUserJID;

@interface WACallInfo : WACallCommonInfo
{
    _Bool _isCallActive;
    _Bool _videoEnabledAtCallStart;
    _Bool _ending;
    _Bool _videoCaptureStarted;
    _Bool _videoPreviewStarted;
    _Bool _isGroupCallEnabled;
    _Bool _isGroupCall;
    _Bool _isGroupCallCreatedOnServer;
    int _audioDuration;
    int _videoDuration;
    WAUserJID *_initialPeerJID;
    WAUserJID *_creatorJID;
    WACallHeldInfo *_heldCallInfo;
    WACallPendingInfo *_pendingCallInfo;
    NSArray *_participants;
}

@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) _Bool isGroupCallCreatedOnServer; // @synthesize isGroupCallCreatedOnServer=_isGroupCallCreatedOnServer;
@property(readonly, nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(readonly, nonatomic) _Bool isGroupCallEnabled; // @synthesize isGroupCallEnabled=_isGroupCallEnabled;
@property(readonly, nonatomic) _Bool videoPreviewStarted; // @synthesize videoPreviewStarted=_videoPreviewStarted;
@property(readonly, nonatomic) _Bool videoCaptureStarted; // @synthesize videoCaptureStarted=_videoCaptureStarted;
@property(readonly, nonatomic) int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) int audioDuration; // @synthesize audioDuration=_audioDuration;
@property(readonly, nonatomic) _Bool ending; // @synthesize ending=_ending;
@property(readonly, nonatomic) _Bool videoEnabledAtCallStart; // @synthesize videoEnabledAtCallStart=_videoEnabledAtCallStart;
@property(copy, nonatomic) WACallPendingInfo *pendingCallInfo; // @synthesize pendingCallInfo=_pendingCallInfo;
@property(copy, nonatomic) WACallHeldInfo *heldCallInfo; // @synthesize heldCallInfo=_heldCallInfo;
@property(readonly, nonatomic) _Bool isCallActive; // @synthesize isCallActive=_isCallActive;
@property(readonly, nonatomic) WAUserJID *creatorJID; // @synthesize creatorJID=_creatorJID;
@property(readonly, nonatomic) WAUserJID *initialPeerJID; // @synthesize initialPeerJID=_initialPeerJID;
- (void).cxx_destruct;
- (_Bool)isCallIDHeld:(id)arg1;
- (_Bool)isCallIDPending:(id)arg1;
@property(readonly, nonatomic) NSArray *peerParticipants;
@property(readonly, nonatomic) NSArray *peerParticipantsJID;
@property(readonly, nonatomic) WACallParticipantInfo *selfParticipant;
- (id)participantWithJID:(id)arg1;
- (void)fillCallInfoWithHeldCallInfoOnEnding:(id)arg1;
@property(readonly, nonatomic) NSArray *participantsJID;
- (id)initWithCallID:(id)arg1 peerJIDs:(id)arg2 videoEnabled:(_Bool)arg3 startedByMe:(_Bool)arg4;
- (id)initWithCallInfo:(struct wa_call_info_t)arg1;

@end
