//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLiveBroadcastConfig, IGStoryCameraGalleryButton, IGTapButton, IGUnreadBubbleView;
@protocol IGLiveBroadcastInteractionButtonsContainerViewDelegate;

@interface IGLiveBroadcastInteractionButtonsContainerView : UIView
{
    IGTapButton *_switchCameraButton;
    IGTapButton *_viewerInviteButton;
    IGTapButton *_questionSelectionButton;
    IGStoryCameraGalleryButton *_galleryButton;
    IGUnreadBubbleView *_unreadLiveWithBubbleView;
    IGUnreadBubbleView *_unreadQuestionBubbleView;
    id <IGLiveBroadcastInteractionButtonsContainerViewDelegate> _delegate;
    IGTapButton *_liveWithInviteButton;
    IGTapButton *_liveResourceButton;
    IGTapButton *_arEffectButton;
    IGLiveBroadcastConfig *_liveBroadcastConfig;
}

@property(readonly, nonatomic) IGLiveBroadcastConfig *liveBroadcastConfig; // @synthesize liveBroadcastConfig=_liveBroadcastConfig;
@property(readonly, nonatomic) IGTapButton *arEffectButton; // @synthesize arEffectButton=_arEffectButton;
@property(readonly, nonatomic) IGTapButton *liveResourceButton; // @synthesize liveResourceButton=_liveResourceButton;
@property(readonly, nonatomic) IGTapButton *liveWithInviteButton; // @synthesize liveWithInviteButton=_liveWithInviteButton;
@property(nonatomic) __weak id <IGLiveBroadcastInteractionButtonsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTapButton *galleryButton; // @synthesize galleryButton=_galleryButton;
- (void).cxx_destruct;
- (void)_galleryButtonTapped:(id)arg1;
- (void)_questionSelectionButtonTapped;
- (void)_viewerInviteButtonTapped;
- (void)_arEffectButtonTapped;
- (void)_liveResourceButtonTapped;
- (void)_liveWithInviteButtonTapped;
- (void)_switchCamerasButtonTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateAccessibilityForCameraPosition:(long long)arg1;
- (void)updateQuestionButtonBadgeCount:(long long)arg1;
- (void)updateLiveWithInviteBadgeCount:(long long)arg1;
- (void)showGalleryButtonSelected:(_Bool)arg1;
- (void)showQuestionSelectionButtonSelected:(_Bool)arg1;
- (void)showLiveResourceButtonAnimated:(_Bool)arg1;
- (void)configureLiveResourceButtonWithImageAsset:(unsigned long long)arg1;
- (void)showLiveWithInviteButton:(_Bool)arg1;
- (void)_setupGalleryButton;
- (void)_setUpLiveQuestionButton;
- (void)_setUpViewerInviteButton;
- (void)_setUpAREffectsButton;
- (void)_setUpLiveResourceButton;
- (void)_setUpLiveWithInviteButton;
- (void)_setUpSwitchCameraButton;
- (id)initWithFrame:(struct CGRect)arg1 liveBroadcastConfig:(id)arg2;

@end

