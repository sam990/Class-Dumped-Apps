//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YCHLiveChatBaseCell.h>

#import <Module_Framework/MDCInkTouchControllerDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatBadgeReceiver-Protocol.h>
#import <Module_Framework/YCHLiveChatLabelDelegate-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class MDCInkTouchController, NSAttributedString, NSString, QTMButton, UIView, YCHConfig, YCHInfoButton, YCHLiveChatLabel, YTEmojiCustomEmojiParser, YTIAddChatItemAction, YTILiveChatAutoModMessageRenderer, YTILiveChatTextMessageRenderer, YTImageView;
@protocol YTResponder;

@interface YCHLiveChatAutoModCell : YCHLiveChatBaseCell <MDCInkTouchControllerDelegate, YCHLiveChatLabelDelegate, YCHLiveChatBadgeReceiver, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    id <YTResponder> _parentResponder;
    UIView *_moderatorIndicatorView;
    YTIAddChatItemAction *_addChatItemAction;
    YTILiveChatAutoModMessageRenderer *_autoModMessageRenderer;
    YTILiveChatTextMessageRenderer *_textMessageRenderer;
    YCHLiveChatLabel *_messageLabel;
    YTImageView *_authorImageView;
    YCHInfoButton *_headerButton;
    YTEmojiCustomEmojiParser *_emojiParser;
    NSAttributedString *_message;
    QTMButton *_firstModerationButton;
    QTMButton *_secondModerationButton;
    MDCInkTouchController *_inkTouchController;
    YCHConfig *_config;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) YCHConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(readonly, nonatomic) QTMButton *secondModerationButton; // @synthesize secondModerationButton=_secondModerationButton;
@property(readonly, nonatomic) QTMButton *firstModerationButton; // @synthesize firstModerationButton=_firstModerationButton;
@property(readonly, nonatomic) NSAttributedString *message; // @synthesize message=_message;
@property(readonly, nonatomic) YTEmojiCustomEmojiParser *emojiParser; // @synthesize emojiParser=_emojiParser;
@property(readonly, nonatomic) YCHInfoButton *headerButton; // @synthesize headerButton=_headerButton;
@property(readonly, nonatomic) YTImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(readonly, nonatomic) YCHLiveChatLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) YTILiveChatTextMessageRenderer *textMessageRenderer; // @synthesize textMessageRenderer=_textMessageRenderer;
@property(readonly, nonatomic) YTILiveChatAutoModMessageRenderer *autoModMessageRenderer; // @synthesize autoModMessageRenderer=_autoModMessageRenderer;
@property(readonly, nonatomic) YTIAddChatItemAction *addChatItemAction; // @synthesize addChatItemAction=_addChatItemAction;
@property(readonly, nonatomic) UIView *moderatorIndicatorView; // @synthesize moderatorIndicatorView=_moderatorIndicatorView;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)secondModerationButtonClicked;
- (void)firstModerationButtonClicked;
- (void)headerButtonClicked;
- (id)accessibilityElements;
- (void)label:(id)arg1 didTapLink:(id)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)applyStyle;
- (id)thumbnailMappings;
- (struct CGSize)liveChatAuthorBadgePreferredSize:(id)arg1;
- (void)liveChatAuthorBadge:(id)arg1 didLoadImage:(id)arg2;
- (void)setGimme:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
