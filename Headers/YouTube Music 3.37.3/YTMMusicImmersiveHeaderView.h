//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMFlexibleHeaderBackgroundView.h"

#import "YTSubscribeSwitchContainer-Protocol.h"

@class CAGradientLayer, MDCButton, MDCInkTouchController, NSMutableArray, NSString, QTMButton, UILabel, UITapGestureRecognizer, UIView, YTFormattedStringLabel, YTIButtonRenderer, YTIFormattedString, YTIHeaderFabRenderer, YTIMenuRenderer, YTIMusicThumbnailRenderer, YTISubscribeButtonRenderer, YTIToggleButtonRenderer, YTMMusicThumbnailView, YTMResizeableFabView, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch, YTViewGroup;
@protocol YTMMusicImmersiveHeaderViewDelegate, YTResponder;

@interface YTMMusicImmersiveHeaderView : YTMFlexibleHeaderBackgroundView <YTSubscribeSwitchContainer>
{
    id <YTResponder> _parentResponder;
    YTMMusicThumbnailView *_thumbnailView;
    UILabel *_subscriberCountLabel;
    UILabel *_titleLabel;
    UILabel *_navBarTitleLabel;
    YTMResizeableFabView *_floatingActionButtonView;
    QTMButton *_actionButton;
    MDCButton *_lessButton;
    UIView *_contentView;
    NSMutableArray *_specialtyButtons;
    YTFormattedStringLabel *_descriptionLabel;
    YTViewGroup *_specialtyButtonsGroup;
    UIView *_imageGradientView;
    CAGradientLayer *_imageGradient;
    UITapGestureRecognizer *_descriptionTapRecognizer;
    MDCInkTouchController *_descriptionInkTouchController;
    UIView *_thumbnailOverlay;
    YTSubscribeSwitch *_subscribeSwitch;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    YTNotificationOptionsButton *_notificationOptionsButton;
    YTNotificationPreferenceToggleButton *_notificationToggleButton;
    id <YTMMusicImmersiveHeaderViewDelegate> _delegate;
    YTIFormattedString *_title;
    YTIHeaderFabRenderer *_headerFabRenderer;
    YTIMenuRenderer *_menuRenderer;
    YTIToggleButtonRenderer *_toggleButtonRenderer;
    YTIFormattedString *_itemDescription;
    YTISubscribeButtonRenderer *_subscribeButtonRenderer;
    UIView *_thumbnailContainerView;
    YTIMusicThumbnailRenderer *_thumbnailRenderer;
    YTIButtonRenderer *_startRadioButtonRenderer;
    YTIButtonRenderer *_shuffleButtonRenderer;
}

@property(retain, nonatomic) YTIButtonRenderer *shuffleButtonRenderer; // @synthesize shuffleButtonRenderer=_shuffleButtonRenderer;
@property(retain, nonatomic) YTIButtonRenderer *startRadioButtonRenderer; // @synthesize startRadioButtonRenderer=_startRadioButtonRenderer;
@property(retain, nonatomic) YTIMusicThumbnailRenderer *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property(readonly, nonatomic) UIView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(retain, nonatomic) YTISubscribeButtonRenderer *subscribeButtonRenderer; // @synthesize subscribeButtonRenderer=_subscribeButtonRenderer;
@property(retain, nonatomic) YTIFormattedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) YTIToggleButtonRenderer *toggleButtonRenderer; // @synthesize toggleButtonRenderer=_toggleButtonRenderer;
@property(retain, nonatomic) YTIMenuRenderer *menuRenderer; // @synthesize menuRenderer=_menuRenderer;
@property(retain, nonatomic) YTIHeaderFabRenderer *headerFabRenderer; // @synthesize headerFabRenderer=_headerFabRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <YTMMusicImmersiveHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton; // @synthesize notificationToggleButton=_notificationToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton; // @synthesize notificationOptionsButton=_notificationOptionsButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void).cxx_destruct;
- (void)didTapToggleButton:(id)arg1 forEvent:(id)arg2;
- (void)didTapFab;
- (void)adjustDescriptionButtonLines;
- (double)thumbnailContainerHeight;
- (double)descriptionLabelHeightWithOptionalPadding;
- (double)titleLabelHeight;
- (void)didTapActionButton;
- (_Bool)shouldDisableDescriptionLabel;
- (void)didTapShuffleButton;
- (void)didTapStartRadioButton;
- (void)layoutSpecialtyButtonsWithAnchor:(id)arg1;
- (double)bottomContentHeight;
- (_Bool)shouldHideNavigationBarTitle;
- (double)maximumHeight;
@property(readonly, nonatomic) YTMMusicThumbnailView *thumbnailView;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
