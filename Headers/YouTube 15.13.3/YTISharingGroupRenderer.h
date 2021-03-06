//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTISharingGroupRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) YTIFormattedString *displayedParticipantCount; // @dynamic displayedParticipantCount;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasDisplayedParticipantCount; // @dynamic hasDisplayedParticipantCount;
@property(nonatomic) _Bool hasSerializedConnectionGroup; // @dynamic hasSerializedConnectionGroup;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *participantThumbsArray; // @dynamic participantThumbsArray;
@property(readonly, nonatomic) unsigned long long participantThumbsArray_Count; // @dynamic participantThumbsArray_Count;
@property(copy, nonatomic) NSString *serializedConnectionGroup; // @dynamic serializedConnectionGroup;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

