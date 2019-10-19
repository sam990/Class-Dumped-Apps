//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingLegacyGroupSequenceNumbers, SCNMessagingUUID;

@interface SCNMessagingLegacyGroupConversationInfo : NSObject
{
    SCNMessagingUUID *_conversationId;
    SCNMessagingLegacyGroupSequenceNumbers *_conversationVersionInfo;
    long long _groupVersion;
}

+ (id)LegacyGroupConversationInfoWithConversationId:(id)arg1 conversationVersionInfo:(id)arg2 groupVersion:(long long)arg3;
@property(readonly, nonatomic) long long groupVersion; // @synthesize groupVersion=_groupVersion;
@property(readonly, nonatomic) SCNMessagingLegacyGroupSequenceNumbers *conversationVersionInfo; // @synthesize conversationVersionInfo=_conversationVersionInfo;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConversationId:(id)arg1 conversationVersionInfo:(id)arg2 groupVersion:(long long)arg3;

@end
