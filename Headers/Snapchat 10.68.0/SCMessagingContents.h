//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingExternalMedia, SCMessagingLocation, SCMessagingNote, SCMessagingShare, SCMessagingSnap, SCMessagingSnapReply, SCMessagingSnapdocWrapper, SCMessagingStatusMessage, SCMessagingSticker, SCMessagingText;

@interface SCMessagingContents : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(retain, nonatomic) SCMessagingExternalMedia *externalMedia; // @dynamic externalMedia;
@property(retain, nonatomic) SCMessagingLocation *location; // @dynamic location;
@property(retain, nonatomic) SCMessagingNote *note; // @dynamic note;
@property(retain, nonatomic) SCMessagingShare *share; // @dynamic share;
@property(retain, nonatomic) SCMessagingSnap *snap; // @dynamic snap;
@property(retain, nonatomic) SCMessagingSnapReply *snapReply; // @dynamic snapReply;
@property(retain, nonatomic) SCMessagingSnapdocWrapper *snapdoc; // @dynamic snapdoc;
@property(retain, nonatomic) SCMessagingStatusMessage *statusMessage; // @dynamic statusMessage;
@property(retain, nonatomic) SCMessagingSticker *sticker; // @dynamic sticker;
@property(retain, nonatomic) SCMessagingText *text; // @dynamic text;

@end
