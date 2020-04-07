//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface YTIOfflineVideoRefreshPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastPlaybackTimestamp; // @dynamic hasLastPlaybackTimestamp;
@property(nonatomic) _Bool hasLastStreamRefreshTimestampInSecs; // @dynamic hasLastStreamRefreshTimestampInSecs;
@property(nonatomic) _Bool hasMainappVideoMetadataEntityVersion; // @dynamic hasMainappVideoMetadataEntityVersion;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) long long lastPlaybackTimestamp; // @dynamic lastPlaybackTimestamp;
@property(nonatomic) long long lastStreamRefreshTimestampInSecs; // @dynamic lastStreamRefreshTimestampInSecs;
@property(copy, nonatomic) NSData *mainappVideoMetadataEntityVersion; // @dynamic mainappVideoMetadataEntityVersion;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end
