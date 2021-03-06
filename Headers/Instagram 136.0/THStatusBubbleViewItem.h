//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSAttributedString, THStatus, THTypingIndicatorViewModel;

@interface THStatusBubbleViewItem : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    THTypingIndicatorViewModel *_typing_viewModel;
    NSAttributedString *_status_emoji;
    NSAttributedString *_status_text;
    THStatus *_status_status;
}

+ (id)typingWithViewModel:(id)arg1;
+ (id)statusWithEmoji:(id)arg1 text:(id)arg2 status:(id)arg3;
- (void).cxx_destruct;
- (void)matchTyping:(CDUnknownBlockType)arg1 status:(CDUnknownBlockType)arg2;

@end

