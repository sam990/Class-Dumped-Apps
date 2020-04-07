//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, TAVFoundationAVPlayerSnapshot, TAVPlayerTechnologyControlState, TAVPlayerTechnologyState, TAVVidmanJSONMetadata;

@interface TAVFoundationPlayerTechnologyInternalState : NSObject
{
    _Bool _didPlayToEndTime;
    _Bool _shouldSkipStallAvoidance;
    TAVFoundationAVPlayerSnapshot *_avPlayerSnapshot;
    TAVPlayerTechnologyState *_lastStateSent;
    TAVPlayerTechnologyControlState *_controlState;
    unsigned long long _preparationState;
    NSError *_preparationError;
    TAVVidmanJSONMetadata *_mostRecentPeriscopeJSONMetadata;
    CDStruct_1b6d18a9 _initialPlaybackTime;
}

@property(retain, nonatomic) TAVVidmanJSONMetadata *mostRecentPeriscopeJSONMetadata; // @synthesize mostRecentPeriscopeJSONMetadata=_mostRecentPeriscopeJSONMetadata;
@property(nonatomic) _Bool shouldSkipStallAvoidance; // @synthesize shouldSkipStallAvoidance=_shouldSkipStallAvoidance;
@property(nonatomic) CDStruct_1b6d18a9 initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(copy, nonatomic) NSError *preparationError; // @synthesize preparationError=_preparationError;
@property(nonatomic) unsigned long long preparationState; // @synthesize preparationState=_preparationState;
@property(copy, nonatomic) TAVPlayerTechnologyControlState *controlState; // @synthesize controlState=_controlState;
@property(copy, nonatomic) TAVPlayerTechnologyState *lastStateSent; // @synthesize lastStateSent=_lastStateSent;
@property(nonatomic) _Bool didPlayToEndTime; // @synthesize didPlayToEndTime=_didPlayToEndTime;
@property(copy, nonatomic) TAVFoundationAVPlayerSnapshot *avPlayerSnapshot; // @synthesize avPlayerSnapshot=_avPlayerSnapshot;
- (void).cxx_destruct;
- (id)init;

@end
