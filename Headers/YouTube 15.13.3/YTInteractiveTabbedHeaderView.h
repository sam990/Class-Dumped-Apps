//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTSubscribeSwitchContainer-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"
#import "YTVariableHeightHeaderForwardingTouches-Protocol.h"

@class NSArray, NSString, UIImage, UIImageView, YTBadgesView, YTFormattedStringLabel, YTIInteractiveTabbedHeaderRenderer, YTImageView, YTNotificationMultiToggleButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;
@protocol GA11YMixinImpl;

@interface YTInteractiveTabbedHeaderView : UIView <GA11YMixinEmbedder, YTVariableHeightHeaderForwardingTouches, YTPageStyling, YTSubscribeSwitchContainer, YTThumbnailMapping>
{
    UIImage *_maskImage;
    UIImageView *_maskImageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_attributionLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_metadataLabel;
    YTBadgesView *_badgesView;
    YTFormattedStringLabel *_subscriberCountLabel;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTIInteractiveTabbedHeaderRenderer *_renderer;
    YTImageView *_keyArtImageView;
    YTImageView *_bannerImageView;
}

+ (id)bannerMaskImage;
@property(readonly, nonatomic) YTImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(readonly, nonatomic) YTImageView *keyArtImageView; // @synthesize keyArtImageView=_keyArtImageView;
@property(retain, nonatomic) YTIInteractiveTabbedHeaderRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void).cxx_destruct;
- (id)compactWidthBannerMaskImage;
- (void)updateTitleTypeKind;
- (_Bool)isCondensedLayout;
- (double)bannerMaxHeightForWidth:(double)arg1;
@property(readonly, nonatomic) NSArray *touchForwardingViews;
- (id)thumbnailMappings;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

