//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface TIMPBNGroupInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) NSMutableDictionary *ext; // @dynamic ext;
@property(readonly, nonatomic) unsigned long long ext_Count; // @dynamic ext_Count;
@property(copy, nonatomic) NSString *groupDesc; // @dynamic groupDesc;
@property(copy, nonatomic) NSString *groupIcon; // @dynamic groupIcon;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasGroupDesc; // @dynamic hasGroupDesc;
@property(nonatomic) _Bool hasGroupIcon; // @dynamic hasGroupIcon;
@property(nonatomic) _Bool hasGroupName; // @dynamic hasGroupName;
@property(nonatomic) _Bool hasInfoVersion; // @dynamic hasInfoVersion;
@property(nonatomic) long long infoVersion; // @dynamic infoVersion;

@end
