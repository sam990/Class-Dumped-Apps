//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TIMOMessageProperty : NSObject
{
    int _type;
    int _status;
    int _propertyID;
    NSString *_identifier;
    NSString *_targetMessageID;
    NSString *_conversationID;
    long long _orderInMessage;
    long long _serverMessageID;
    NSData *_content;
    long long _indexInMessage;
}

+ (id)setMessageSyncProperty:(id)arg1 syncStatus:(unsigned long long)arg2 inConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)messagePropertiesInMessageIdentifier:(id)arg1 propertyType:(int)arg2;
@property(nonatomic) long long indexInMessage; // @synthesize indexInMessage=_indexInMessage;
@property(nonatomic) int propertyID; // @synthesize propertyID=_propertyID;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(nonatomic) long long serverMessageID; // @synthesize serverMessageID=_serverMessageID;
@property(nonatomic) long long orderInMessage; // @synthesize orderInMessage=_orderInMessage;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSString *targetMessageID; // @synthesize targetMessageID=_targetMessageID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long syncStatus;
- (id)initWithModel:(id)arg1;

@end
