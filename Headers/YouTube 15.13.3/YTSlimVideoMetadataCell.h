//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTExpandableCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSlimVideoDetailsActionsProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class FLXLayout, MDCInkTouchController, NSArray, NSMutableArray, NSString, UIControl, UITapGestureRecognizer, UIView, YTBadgesView, YTFormattedStringLabel, YTISlimVideoMetadataRenderer, YTSlimVideoDetailsActionView, YTSlimVideoDetailsActionsView, YTSlimVideoOwnerView, YTStandaloneBadgeView, YTViewGroup;
@protocol GA11YMixinImpl, YTFormattedStringLabelDelegate, YTResponder, YTRichMetadataDelegate, YTSlimVideoDetailsActionViewDelegate;

@interface YTSlimVideoMetadataCell : YTExpandableCell <GA11YMixinEmbedder, MDCInkTouchControllerDelegate, UIGestureRecognizerDelegate, YTPageStyling, YTThumbnailMapping, YTCollectionViewCellProtocol, YTResponder, YTSlimVideoDetailsActionsProtocol>
{
    YTISlimVideoMetadataRenderer *_entry;
    double _totalMetadataHeight;
    MDCInkTouchController *_inkTouchController;
    UIView *_videoOwnerViewTopSeparator;
    UIView *_videoOwnerViewBottomSeparator;
    YTSlimVideoDetailsActionsView *_videoDetailsActionsView;
    UITapGestureRecognizer *_channelAvatarTapRecognizer;
    long long _pageStyle;
    NSArray *_expandedOnlyViews;
    FLXLayout *_layout;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    id <YTRichMetadataDelegate> _richMetadataDelegate;
    YTSlimVideoOwnerView *_videoOwnerView;
    UIControl *_disclosureTarget;
    YTStandaloneBadgeView *_topStandaloneBadge;
    YTFormattedStringLabel *_titleLabel;
    YTStandaloneBadgeView *_underTitleStandaloneBadge;
    YTFormattedStringLabel *_subtitleCollapsedLabel;
    YTFormattedStringLabel *_subtitleExpandedLabel;
    YTBadgesView *_badgesView;
    YTViewGroup *_badgesViewGroup;
    UIView *_descriptionContainer;
    UIView *_descriptionLabelGroup;
    YTFormattedStringLabel *_descriptionLabel;
    NSMutableArray *_metadataRowLabels;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 expanded:(_Bool)arg2 offlineVideo:(id)arg3 offlineability:(id)arg4 size:(struct CGSize)arg5;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) NSMutableArray *metadataRowLabels; // @synthesize metadataRowLabels=_metadataRowLabels;
@property(retain, nonatomic) YTFormattedStringLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *descriptionLabelGroup; // @synthesize descriptionLabelGroup=_descriptionLabelGroup;
@property(retain, nonatomic) UIView *descriptionContainer; // @synthesize descriptionContainer=_descriptionContainer;
@property(retain, nonatomic) YTViewGroup *badgesViewGroup; // @synthesize badgesViewGroup=_badgesViewGroup;
@property(retain, nonatomic) YTBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleExpandedLabel; // @synthesize subtitleExpandedLabel=_subtitleExpandedLabel;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleCollapsedLabel; // @synthesize subtitleCollapsedLabel=_subtitleCollapsedLabel;
@property(retain, nonatomic) YTStandaloneBadgeView *underTitleStandaloneBadge; // @synthesize underTitleStandaloneBadge=_underTitleStandaloneBadge;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTStandaloneBadgeView *topStandaloneBadge; // @synthesize topStandaloneBadge=_topStandaloneBadge;
@property(retain, nonatomic) UIControl *disclosureTarget; // @synthesize disclosureTarget=_disclosureTarget;
@property(readonly, nonatomic) YTSlimVideoOwnerView *videoOwnerView; // @synthesize videoOwnerView=_videoOwnerView;
@property(nonatomic) __weak id <YTRichMetadataDelegate> richMetadataDelegate; // @synthesize richMetadataDelegate=_richMetadataDelegate;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (_Bool)badgesVisible;
- (void)resetFlexLayout;
- (void)removeChannelAvatarTarget;
- (void)removeExpandCollapseTarget;
- (struct CGSize)sizeSubviewsWithSize:(struct CGSize)arg1;
- (double)descriptionContainerHeight;
- (void)createDescriptionLabel;
- (void)clearDescriptionLabel;
- (void)createMetadataLabels;
- (void)clearMetadataLabels;
- (void)updateSubtitleLabels;
- (void)positionExpandableViews;
- (void)layoutBadges;
- (void)removeExpandedOnlyViews;
- (void)addExpandedOnlyViews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidProgressWithVideoID:(id)arg1 percentageDownloaded:(double)arg2;
- (void)linkStateDidChange;
- (void)updateAccountLinkButton:(id)arg1;
- (void)setOfflineVideo:(id)arg1 offlineability:(id)arg2 pendingRemoveVideoID:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setToggled:(_Bool)arg1 forSupportedRenderer:(id)arg2;
- (_Bool)isToggledForSupportedRenderer:(id)arg1;
@property(nonatomic) int likeStatus;
@property(readonly, nonatomic) YTSlimVideoDetailsActionView *offlineActionView;
@property(readonly, nonatomic) NSArray *buttonHintTargets;
@property(readonly, nonatomic) NSArray *buttonHintRenderers;
@property(nonatomic) __weak id <YTSlimVideoDetailsActionViewDelegate> videoActionsDelegate;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)inkTouchController:(id)arg1 insertInkView:(id)arg2 intoView:(id)arg3;
- (void)pageStyleDidChange:(long long)arg1;
- (void)updateMetadata:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setChannelAvatarTarget:(id)arg1 action:(SEL)arg2;
- (void)setExpandCollapseTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)sidePadding;
- (double)menuButtonRightPadding;
- (double)disclosureArrowPaddingX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
