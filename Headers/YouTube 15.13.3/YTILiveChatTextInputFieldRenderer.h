//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString;

@interface YTILiveChatTextInputFieldRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int activeUnderlineColor; // @dynamic activeUnderlineColor;
@property(nonatomic) unsigned int emojiCharacterCount; // @dynamic emojiCharacterCount;
@property(nonatomic) _Bool hasActiveUnderlineColor; // @dynamic hasActiveUnderlineColor;
@property(nonatomic) _Bool hasEmojiCharacterCount; // @dynamic hasEmojiCharacterCount;
@property(nonatomic) _Bool hasInactiveUnderlineColor; // @dynamic hasInactiveUnderlineColor;
@property(nonatomic) _Bool hasMaxCharacterLimit; // @dynamic hasMaxCharacterLimit;
@property(nonatomic) _Bool hasPlaceholder; // @dynamic hasPlaceholder;
@property(nonatomic) _Bool hasPlaceholderTextColor; // @dynamic hasPlaceholderTextColor;
@property(nonatomic) unsigned int inactiveUnderlineColor; // @dynamic inactiveUnderlineColor;
@property(nonatomic) unsigned int maxCharacterLimit; // @dynamic maxCharacterLimit;
@property(retain, nonatomic) YTIFormattedString *placeholder; // @dynamic placeholder;
@property(nonatomic) unsigned int placeholderTextColor; // @dynamic placeholderTextColor;

@end
