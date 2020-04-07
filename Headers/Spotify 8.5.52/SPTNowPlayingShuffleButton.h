//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingShuffleButton-Protocol.h"

@class NSString, UIColor;

@interface SPTNowPlayingShuffleButton : SPTNowPlayingButton <SPTNowPlayingShuffleButton>
{
    UIColor *_iconColor;
    struct CGSize _iconSize;
}

+ (id)button;
- (id)iconColor;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool shuffling;
- (void)setIconColor:(id)arg1;
- (void)applyIcon;

// Remaining properties
@property(nonatomic) unsigned long long buttonState; // @dynamic buttonState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
