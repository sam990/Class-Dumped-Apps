//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIConversationAvailabilityMessageSupportedRenderers;

@interface YTIConversationBarRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConversationAvailabilityMessageSupportedRenderers *availabilityMessage; // @dynamic availabilityMessage;
@property(retain, nonatomic) YTICommand *conversationEndpoint; // @dynamic conversationEndpoint;
@property(nonatomic) _Bool hasAvailabilityMessage; // @dynamic hasAvailabilityMessage;
@property(nonatomic) _Bool hasConversationEndpoint; // @dynamic hasConversationEndpoint;

@end
