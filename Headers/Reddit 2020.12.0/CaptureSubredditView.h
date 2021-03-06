//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "CaptureCellContentViewProtocol-Protocol.h"
#import "SubscribeButtonCompactDelegate-Protocol.h"

@class BaseButton, BaseImageView, BaseLabel, CaptureContentSubreddit, CaptureScreen, NSString;

@interface CaptureSubredditView : BaseView <SubscribeButtonCompactDelegate, CaptureCellContentViewProtocol>
{
    CaptureScreen *_screen;
    CaptureContentSubreddit *_content;
    NSString *_communityIconUrlString;
    BaseLabel *_titleLabel;
    BaseLabel *_detailsLabel;
    BaseImageView *_selectedImageView;
    BaseButton *_communityIconButton;
    BaseView *_selectedView;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(retain, nonatomic) BaseView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) BaseButton *communityIconButton; // @synthesize communityIconButton=_communityIconButton;
@property(retain, nonatomic) BaseImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) BaseLabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *communityIconUrlString; // @synthesize communityIconUrlString=_communityIconUrlString;
@property(retain, nonatomic) CaptureContentSubreddit *content; // @synthesize content=_content;
@property(nonatomic) __weak CaptureScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setCommunityIconToDefault;
- (void)setCommunityIconWithUrl:(id)arg1;
- (void)configureWithSubredditSubscribed:(_Bool)arg1;
- (void)subscribeButtonTapped:(id)arg1;
- (void)didTapCommunityIconButton:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithContent:(id)arg1 screen:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

