//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1TombstoneViewDelegate-Protocol.h>

@class T1ConversationNode, T1ConversationThreadTombstoneContainerView, T1ConversationThreadedReplyConnectorsView, T1TombstoneView, UIView;

@interface T1ConversationThreadedTombstoneCell : TFNTableViewCell <T1TombstoneViewDelegate>
{
    CDUnknownBlockType _buttonTapHandler;
    T1ConversationNode *_node;
    UIView *_avatarView;
    T1TombstoneView *_tombstoneView;
    T1ConversationThreadedReplyConnectorsView *_replyConnectorsView;
    T1ConversationThreadTombstoneContainerView *_containerView;
}

+ (id)cellLayoutWithLabelRichText:(id)arg1 buttonRightText:(id)arg2 indentationLevel:(double)arg3 layoutMetrics:(id)arg4;
+ (id)calculatedLayoutMetricsForViewWithIndentationLevel:(double)arg1 layoutMetrics:(id)arg2;
+ (struct CGSize)tombstoneSizeForLabelRichText:(id)arg1 buttonRightText:(id)arg2 layoutMetrics:(id)arg3;
@property(readonly, nonatomic) T1ConversationThreadTombstoneContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) T1ConversationThreadedReplyConnectorsView *replyConnectorsView; // @synthesize replyConnectorsView=_replyConnectorsView;
@property(readonly, nonatomic) T1TombstoneView *tombstoneView; // @synthesize tombstoneView=_tombstoneView;
@property(readonly, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) T1ConversationNode *node; // @synthesize node=_node;
@property(copy, nonatomic) CDUnknownBlockType buttonTapHandler; // @synthesize buttonTapHandler=_buttonTapHandler;
- (void).cxx_destruct;
- (void)didTapOnViewButtonWithTombstoneView:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithLabelRichText:(id)arg1 buttonRichText:(id)arg2;
- (id)initWithNode:(id)arg1 interactionHandler:(id)arg2 reuseIdentifier:(id)arg3;

@end

