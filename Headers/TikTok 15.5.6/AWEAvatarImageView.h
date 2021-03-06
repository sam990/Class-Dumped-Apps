//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEUserModel, CAShapeLayer, UIImageView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEAvatarImageView : UIView
{
    UIImageView *_avatarImageView;
    CAShapeLayer *_maskLayer;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    AWEUserModel *_user;
}

@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (_Bool)showLiveMark:(id)arg1;
- (void)cancelImageRequest;
- (void)updateWithUser:(id)arg1 needLiveStoryMark:(_Bool)arg2;
- (void)updateWithUser:(id)arg1;
- (id)initWithUser:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

