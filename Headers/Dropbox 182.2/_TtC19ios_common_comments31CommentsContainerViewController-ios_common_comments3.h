//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC19ios_common_comments31CommentsContainerViewController.h"

#import "DBCommentsTextInputMentionsDelegate-Protocol.h"

@interface _TtC19ios_common_comments31CommentsContainerViewController (ios_common_comments3) <DBCommentsTextInputMentionsDelegate>
- (void)textInputController:(id)arg1 addedMentionWithPrefix:(_Bool)arg2 fromPartialMention:(_Bool)arg3;
- (id)textInputController:(id)arg1 shouldCommitPartialMention:(id)arg2;
- (void)textInputControllerCursorDidLeavePartialMention:(id)arg1;
- (void)textInputController:(id)arg1 cursorDidMoveToPartialMention:(id)arg2;
@end

