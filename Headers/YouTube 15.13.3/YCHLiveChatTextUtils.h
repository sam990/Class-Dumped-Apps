//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YCHLiveChatTextUtils : NSObject
{
}

+ (id)stickerTextWithThumbnail:(id)arg1 color:(id)arg2 font:(id)arg3 boldFont:(id)arg4 size:(struct CGSize)arg5 spacing:(double)arg6 thumbnail:(id)arg7;
+ (long long)highlightTypeForBadges:(id)arg1 creatorHighlightsEnabled:(_Bool)arg2 verifiedHighlightsEnabled:(_Bool)arg3;
+ (id)replaceEmojiShortcutsByEmojiInRichInput:(id)arg1 emojiParser:(id)arg2;
+ (id)replaceEmojiByEmojiShortcutInString:(id)arg1;
+ (id)addShowOriginalContentString:(id)arg1 toMessageString:(id)arg2;
+ (id)matchesforName:(id)arg1 inMessage:(id)arg2;
+ (id)messageTextWithFormattedString:(id)arg1 color:(id)arg2 font:(id)arg3 boldFont:(id)arg4 mentionName:(id)arg5 mentionTextColor:(id)arg6 mentionColor:(id)arg7 imageService:(id)arg8 emojiParser:(id)arg9 emojiUpdate:(CDUnknownBlockType)arg10;
+ (id)richMessageInputText:(id)arg1 simpleText:(id)arg2;
+ (id)decoratedAuthorTextWithName:(id)arg1 defaultColor:(id)arg2 font:(id)arg3 badges:(id)arg4 size:(struct CGSize)arg5 spacing:(double)arg6 style:(id)arg7 highlight:(long long)arg8;
+ (id)buildTextMessageWithBlock:(CDUnknownBlockType)arg1;

@end
