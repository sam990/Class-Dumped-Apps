//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (WANormalization)
+ (id)wa_regularExpressionForMap:(id)arg1;
+ (id)wa_emojiMap;
+ (id)wa_postLowerMap;
+ (id)wa_postLowerCharacterSet;
+ (id)wa_preNFKDMap;
+ (id)wa_preNFKDCharacterSet;
- (void)wa_foldEmoji;
- (void)wa_postLowercase;
- (void)wa_preNormalize;
- (void)wa_replaceUsingMap:(id)arg1;
- (void)wa_fancilyFoldCase;
- (void)wa_fancilyRemoveDiacritics;
@end

