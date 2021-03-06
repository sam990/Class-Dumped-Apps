//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVChatTableViewCell.h>

#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImageView, UILabel, UIView;

@interface PTVChatFollowBroadcasterTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    _Bool _isFollowing;
    UILabel *_followLabel;
    UIImageView *_followImage;
    UIImageView *_unfollowImage;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (void)followAlphaState;
- (void)setIsFollowing:(_Bool)arg1;
- (void)displayNameAttributedStateChanged;
- (void)setDisplayName:(id)arg1;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (id)containerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutFollowLabel;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

