//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, RKModmailConversationInfo, RKModmailUser;

@interface RKModmailConversation : MTLModel <MTLJSONSerializing>
{
    NSArray *_messages;
    NSArray *_modActions;
    RKModmailUser *_user;
    RKModmailConversationInfo *_firstOptionConversationInfo;
    RKModmailConversationInfo *_secondOptionConversationInfo;
}

+ (id)userJSONTransformer;
+ (id)messagesJSONTransformer;
+ (id)secondOptionConversationInfoJSONTransformer;
+ (id)firstOptionConversationInfoJSONTransformer;
+ (id)modActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) RKModmailConversationInfo *secondOptionConversationInfo; // @synthesize secondOptionConversationInfo=_secondOptionConversationInfo;
@property(retain, nonatomic) RKModmailConversationInfo *firstOptionConversationInfo; // @synthesize firstOptionConversationInfo=_firstOptionConversationInfo;
@property(retain, nonatomic) RKModmailUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSArray *modActions; // @synthesize modActions=_modActions;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
@property(retain, nonatomic) RKModmailConversationInfo *conversationInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

