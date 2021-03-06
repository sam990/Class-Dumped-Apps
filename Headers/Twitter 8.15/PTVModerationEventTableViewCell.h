//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVTableViewCell.h>

@class PTVBroadcastModerationEvent, PTVButton, PTVChatCommentTableViewCellContentView, UILabel;

@interface PTVModerationEventTableViewCell : PTVTableViewCell
{
    PTVBroadcastModerationEvent *_event;
    _Bool _blockedState;
    _Bool _useLargeChatFont;
    PTVButton *_checkButton;
    UILabel *_moderatorMutesLabel;
    UILabel *_moderatorUnmutesLabel;
    PTVChatCommentTableViewCellContentView *_chatCommentCellView;
    struct CGRect _cachedCommentFrame;
}

+ (id)AttributedUnmuteStringForEvent:(id)arg1;
+ (id)AttributedMuteStringForEvent:(id)arg1;
+ (id)ModeratorActionsLabelBoldFont;
+ (id)ModeratorActionsLabelFont;
+ (double)HeightForCommentBody:(id)arg1 ModeratorMuteAttributedString:(id)arg2 ModeratorUnmuteAttributedString:(id)arg3 UseLargeChatFont:(_Bool)arg4 ContainerSize:(struct CGSize)arg5;
+ (struct UIEdgeInsets)PreferredInsets;
@property(nonatomic) struct CGRect cachedCommentFrame; // @synthesize cachedCommentFrame=_cachedCommentFrame;
@property(retain, nonatomic) PTVChatCommentTableViewCellContentView *chatCommentCellView; // @synthesize chatCommentCellView=_chatCommentCellView;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) _Bool blockedState; // @synthesize blockedState=_blockedState;
@property(retain, nonatomic) PTVBroadcastModerationEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutChatCommentCellView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

