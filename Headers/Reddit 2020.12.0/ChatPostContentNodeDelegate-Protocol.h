//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommentTreeHeaderNodeDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class AvatarImageNode, ChatPostContentNode, Comment, NSURL, _TtC6Reddit16ChatPostTextNode;

@protocol ChatPostContentNodeDelegate <NSObject, CommentTreeHeaderNodeDelegate>
- (unsigned long long)presentationStyle;
- (void)chatPostTextNode:(_TtC6Reddit16ChatPostTextNode *)arg1 didTapURL:(NSURL *)arg2;
- (void)didTapParentCommentNodeWithComment:(Comment *)arg1;
- (void)chatPostContentNode:(ChatPostContentNode *)arg1 didTapAvatarImageNode:(AvatarImageNode *)arg2;
- (void)didTapContentNode:(ChatPostContentNode *)arg1;
@end

