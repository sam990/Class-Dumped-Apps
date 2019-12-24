//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JETVideoViewDelegate-Protocol.h"

@class JETButtonFooter, JETCaptionView, JETOverlayVideoView, NSString;

@interface JETGuestAccessSetupSavingView : UIView <JETVideoViewDelegate>
{
    JETCaptionView *_cardView;
    JETButtonFooter *_footerView;
    JETOverlayVideoView *_animatedView;
}

+ (id)subtitleTextStrings;
+ (id)titleTextStrings;
@property(retain, nonatomic) JETOverlayVideoView *animatedView; // @synthesize animatedView=_animatedView;
@property(retain, nonatomic) JETButtonFooter *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) JETCaptionView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showCard;
- (void)outroDidFinish;
- (void)loopDidFinish;
- (void)introDidFinish;
- (void)finishAnimation;
- (void)startAnimation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cardView:(id)arg2 footerView:(id)arg3 sharedDevicesPresent:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
