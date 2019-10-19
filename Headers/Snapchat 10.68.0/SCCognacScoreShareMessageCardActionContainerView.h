//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacScoreShareMessageCardActionContainerViewModel, SCLazy, SCLoadingIndicatorView, SCNetworkImageView, UILabel;
@protocol SCCognacScoreShareMessageCardActionContainerViewDelegate, SCImageDownloading;

@interface SCCognacScoreShareMessageCardActionContainerView : UIView
{
    SCNetworkImageView *_avatarImageView;
    SCLazy *_buttonLazy;
    SCNetworkImageView *_scoreIconImageView;
    UILabel *_scoreLabel;
    UILabel *_titleLabel;
    SCLoadingIndicatorView *_loadingView;
    SCCognacScoreShareMessageCardActionContainerViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacScoreShareMessageCardActionContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacScoreShareMessageCardActionContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(copy, nonatomic) SCCognacScoreShareMessageCardActionContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_animateLoading;
- (void)_handleFetchedSnapchatter:(id)arg1 viewModel:(id)arg2;
- (void)_didTapButton;
- (void)resetLoadingState;
- (void)layoutSubviews;
- (void)_initScoreIconView;
- (void)_initLoadingView;
- (void)_initButtonView;
- (void)_initScoreLabel;
- (void)_initTitleLabel;
- (void)_initAvatarView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
