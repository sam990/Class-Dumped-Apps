//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSArray, NSString, QTMButton, UIImageView, YTFormSwitchField, YTFormattedStringLabel, YTLabel;
@protocol YTPageStyleProvider;

@interface YTPlaylistCollaborationSettingsView : UIView <YTPageStyling, YTPageStyleProvider>
{
    YTFormSwitchField *_contributionSwitch;
    NSArray *_contributorAvatarViews;
    UIView *_horizontalSeparatorView;
    YTFormattedStringLabel *_emptyContributorListTextLabel;
    YTFormattedStringLabel *_getLinkLabel;
    QTMButton *_getLinkButton;
    UIImageView *_linkIconImageView;
    YTLabel *_inviteLinkLabel;
    YTFormattedStringLabel *_shareInviteLinkDescriptionLabel;
    YTFormattedStringLabel *_revokeInviteLinkDescriptionLabel;
    QTMButton *_shareButton;
    QTMButton *_revokeButton;
    _Bool _contributionSwitchOn;
    _Bool _enabled;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    long long _sharingSectionState;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool contributionSwitchOn; // @synthesize contributionSwitchOn=_contributionSwitchOn;
@property(nonatomic) long long sharingSectionState; // @synthesize sharingSectionState=_sharingSectionState;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
- (void).cxx_destruct;
- (void)setManagementSectionEnabled:(_Bool)arg1;
- (void)setButton:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)layoutContributorAvatarViews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)layoutSubviews;
- (void)setRevokeInviteLinkDescription:(id)arg1;
- (void)setShareInviteLinkDescription:(id)arg1;
- (void)setInviteLink:(id)arg1;
- (void)setRevokeButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setShareButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setGetLinkButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 label:(id)arg4;
- (void)setEmptyContributorListText:(id)arg1;
- (void)setContributorAvatarViews:(id)arg1;
- (void)setContributionToggleWithTitle:(id)arg1 switchOn:(_Bool)arg2 toggleTarget:(id)arg3 action:(SEL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
