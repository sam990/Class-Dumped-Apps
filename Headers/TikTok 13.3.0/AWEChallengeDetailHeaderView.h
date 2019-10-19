//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEChallengeDetailIntroductionViewDelegate-Protocol.h"

@class AWEChallengeDetailHeaderBasicInfoContainerView, AWEChallengeDetailHorizontalVideoView, AWEChallengeDetailIntroductionView, AWEChallengeModel, AWECompanyLinkAreaView, NSString, UIImageView;
@protocol AWEChallengeDetailHeaderViewDelegate;

@interface AWEChallengeDetailHeaderView : UIView <AWEChallengeDetailIntroductionViewDelegate>
{
    id <AWEChallengeDetailHeaderViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
    AWEChallengeDetailHeaderBasicInfoContainerView *_basicInfoView;
    AWEChallengeDetailIntroductionView *_introductionView;
    AWEChallengeDetailHorizontalVideoView *_videoListView;
    AWEChallengeModel *_challenge;
    UIImageView *_bannerView;
    AWECompanyLinkAreaView *_linkView;
}

@property(retain, nonatomic) AWECompanyLinkAreaView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) AWEChallengeModel *challenge; // @synthesize challenge=_challenge;
@property(readonly, nonatomic) AWEChallengeDetailHorizontalVideoView *videoListView; // @synthesize videoListView=_videoListView;
@property(readonly, nonatomic) AWEChallengeDetailIntroductionView *introductionView; // @synthesize introductionView=_introductionView;
@property(readonly, nonatomic) AWEChallengeDetailHeaderBasicInfoContainerView *basicInfoView; // @synthesize basicInfoView=_basicInfoView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <AWEChallengeDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)introductionViewHeightDidChange:(id)arg1;
- (void)introductionView:(id)arg1 didTapLinkWithURL:(id)arg2;
- (void)bannerTapAction:(id)arg1;
- (void)goButtonAction:(id)arg1;
- (void)challengeOwnerNameTapAction:(id)arg1;
- (void)challengeAvatarTapAction:(id)arg1;
- (id)contentViews;
- (void)updateBackgroundImageViewTopOffset:(double)arg1;
- (void)updateBackgroundImageViewBottomOffset:(double)arg1;
- (void)updateContentAlpha:(double)arg1;
- (void)updateVideoListViewWithResponse:(id)arg1;
- (void)updateLinkViewWithChallenge:(id)arg1;
- (void)updateBannerViewWithChallenge:(id)arg1;
- (void)updateBackgroundImageViewWithChallenge:(id)arg1;
- (void)setUpContraintsWithChallenge:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
