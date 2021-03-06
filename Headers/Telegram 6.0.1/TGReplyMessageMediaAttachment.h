//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMediaAttachment.h>

#import <TelegramUI/NSCopying-Protocol.h>
#import <TelegramUI/TGMediaAttachmentParser-Protocol.h>

@class NSString, TGMessage;

@interface TGReplyMessageMediaAttachment : TGMediaAttachment <NSCopying, TGMediaAttachmentParser>
{
    int _replyMessageId;
    TGMessage *_replyMessage;
}

@property(retain, nonatomic) TGMessage *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(nonatomic) int replyMessageId; // @synthesize replyMessageId=_replyMessageId;
- (void).cxx_destruct;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

