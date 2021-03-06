//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKMediaInformation, GCKMediaQueueData, NSArray, NSNumber, NSString;

@interface GCKMediaLoadRequestDataBuilder : NSObject
{
    float _playbackRate;
    GCKMediaInformation *_mediaInformation;
    GCKMediaQueueData *_queueData;
    NSNumber *_autoplay;
    double _startTime;
    NSArray *_activeTrackIDs;
    id _customData;
    NSString *_credentials;
    NSString *_credentialsType;
}

@property(copy, nonatomic) NSString *credentialsType; // @synthesize credentialsType=_credentialsType;
@property(copy, nonatomic) NSString *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSArray *activeTrackIDs; // @synthesize activeTrackIDs=_activeTrackIDs;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSNumber *autoplay; // @synthesize autoplay=_autoplay;
@property(copy, nonatomic) GCKMediaQueueData *queueData; // @synthesize queueData=_queueData;
@property(copy, nonatomic) GCKMediaInformation *mediaInformation; // @synthesize mediaInformation=_mediaInformation;
- (void).cxx_destruct;
- (id)build;
- (id)initWithMediaLoadRequestData:(id)arg1;
- (id)init;

@end

