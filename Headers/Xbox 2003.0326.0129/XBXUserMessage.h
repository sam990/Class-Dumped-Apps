//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableDictionary, NSNumber, NSString, XBXUser;

@interface XBXUserMessage : NSObject <NSCoding>
{
    _Bool _hasAttachments;
    _Bool _hasImageAttachment;
    _Bool _hasAudioAttachment;
    _Bool _isRead;
    _Bool _isSentItem;
    int _attachmentPlatform;
    int _messageType;
    NSString *_identifier;
    XBXUser *_sender;
    NSDate *_sentDate;
    NSString *_sharedItemLocator;
    NSString *_messageSummary;
    NSString *_fullMessage;
    NSNumber *_sharedItemContentHeight;
    NSMutableDictionary *_textViewSize;
}

+ (int)getMessageTypeFromString:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *textViewSize; // @synthesize textViewSize=_textViewSize;
@property(retain, nonatomic) NSNumber *sharedItemContentHeight; // @synthesize sharedItemContentHeight=_sharedItemContentHeight;
@property(nonatomic) _Bool isSentItem; // @synthesize isSentItem=_isSentItem;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSString *fullMessage; // @synthesize fullMessage=_fullMessage;
@property(copy, nonatomic) NSString *messageSummary; // @synthesize messageSummary=_messageSummary;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) int attachmentPlatform; // @synthesize attachmentPlatform=_attachmentPlatform;
@property(copy, nonatomic) NSString *sharedItemLocator; // @synthesize sharedItemLocator=_sharedItemLocator;
@property(nonatomic) _Bool hasAudioAttachment; // @synthesize hasAudioAttachment=_hasAudioAttachment;
@property(nonatomic) _Bool hasImageAttachment; // @synthesize hasImageAttachment=_hasImageAttachment;
@property(nonatomic) _Bool hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property(retain, nonatomic) NSDate *sentDate; // @synthesize sentDate=_sentDate;
@property(retain, nonatomic) XBXUser *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isUserMessage;
@property(readonly, nonatomic) _Bool isXboxLiveServiceMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)unsupportedErrorMessage;
@property(readonly, nonatomic) NSString *displayMessage;

@end

