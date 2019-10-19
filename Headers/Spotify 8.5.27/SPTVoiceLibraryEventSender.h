//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibraryLogger-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTVoiceLibraryEventSender : NSObject <SPTVoiceLibraryLogger>
{
    id <SPTEventSender> _eventSender;
    NSString *_referrerId;
}

@property(readonly, copy, nonatomic) NSString *referrerId; // @synthesize referrerId=_referrerId;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)logAudioInputWithUtteranceId:(id)arg1 audioPort:(id)arg2 audioPortOrientation:(id)arg3;
- (void)logResultWithUtteranceId:(id)arg1;
- (void)logStatusWithUtteranceId:(id)arg1 micPermissionGranted:(_Bool)arg2 isOffline:(_Bool)arg3 connectivityType:(id)arg4;
- (void)logErrorWithUtteranceId:(id)arg1 errorDomain:(id)arg2 errorType:(id)arg3 errorDescription:(id)arg4;
- (id)initWithEventSender:(id)arg1 withReferrerId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
