//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVChatTableViewCell.h>

#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVChatCommentCellMutedView, PTVChatCommentTableViewCellContentView, UIPanGestureRecognizer, UIView;

@interface PTVChatCommentTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate>
{
    _Bool _displayAsBlocked;
    _Bool _displayAsMuted;
    UIView *_containerView;
    PTVChatCommentCellMutedView *_mutedView;
    struct CGRect _cachedMutedContainerFrame;
    _Bool _animatingMuteOperation;
    PTVChatCommentTableViewCellContentView *_chatCommentCellView;
    long long _blockState;
    CDUnknownBlockType _muteActionBlock;
    CDUnknownBlockType _muteBeginActionBlock;
    CDUnknownBlockType _muteEndActionBlock;
    UIPanGestureRecognizer *_mutePanRecognizer;
    struct CGRect _cachedContainerFrame;
}

@property(nonatomic) _Bool animatingMuteOperation; // @synthesize animatingMuteOperation=_animatingMuteOperation;
@property(readonly, nonatomic) UIPanGestureRecognizer *mutePanRecognizer; // @synthesize mutePanRecognizer=_mutePanRecognizer;
@property(copy, nonatomic) CDUnknownBlockType muteEndActionBlock; // @synthesize muteEndActionBlock=_muteEndActionBlock;
@property(copy, nonatomic) CDUnknownBlockType muteBeginActionBlock; // @synthesize muteBeginActionBlock=_muteBeginActionBlock;
@property(copy, nonatomic) CDUnknownBlockType muteActionBlock; // @synthesize muteActionBlock=_muteActionBlock;
@property(readonly, nonatomic) long long blockState; // @synthesize blockState=_blockState;
@property(nonatomic) struct CGRect cachedContainerFrame; // @synthesize cachedContainerFrame=_cachedContainerFrame;
@property(retain, nonatomic) PTVChatCommentTableViewCellContentView *chatCommentCellView; // @synthesize chatCommentCellView=_chatCommentCellView;
- (void).cxx_destruct;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelMuteOperation;
- (void)commitMuteOperation;
- (void)prepareViewsForMute;
- (void)prepareForMuteSwipe;
- (void)setDisplayAsMuted:(_Bool)arg1;
- (void)_setBlockState;
- (void)setDisplayAsBlockedByLoggedInUser:(_Bool)arg1;
- (void)setIsReplyComment:(_Bool)arg1;
@property(nonatomic) long long candyDisplayStyle;
@property(nonatomic) unsigned long long vipBadge;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSString *username;
- (void)setProfileImageURL:(id)arg1;
- (void)setProfileImageEntity:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *chatMessage;
- (void)setParticipantIndex:(long long)arg1;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (id)containerView;
- (void)layoutChatCommentCellView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

