//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCBitmojiStickerSearch <NSObject>
- (void)getAllTagsWithPrefix:(NSString *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)getFrequentTags:(NSArray *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)searchStickersWithText:(NSString *)arg1 stickerTarget:(long long)arg2 avatarIds:(NSArray *)arg3 forceFriendmojis:(_Bool)arg4 completionBlock:(void (^)(NSArray *))arg5;
@end
