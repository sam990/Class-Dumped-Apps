//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVChatTableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PTVInChatPromptTableViewCell : PTVChatTableViewCell
{
    UIView *_containerView;
    UILabel *_messageLabel;
    NSString *_inChatPromptMessage;
    UIImage *_inChatPromptIcon;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
- (void)messageAttributedLabelStateDidChange;
- (void)setLocalizedInChatPromptIcon:(id)arg1;
- (void)setLocalizedInChatPromptMessage:(id)arg1;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (id)containerView;
- (void)layoutSubviews;

@end

