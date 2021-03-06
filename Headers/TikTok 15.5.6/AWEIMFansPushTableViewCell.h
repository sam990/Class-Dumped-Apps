//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEInsetsLabel, AWEPushFansUserModel, UIImageView, UILabel;

@interface AWEIMFansPushTableViewCell : UITableViewCell
{
    AWEPushFansUserModel *_model;
    CDUnknownBlockType _handleTapOnAvatar;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    AWEInsetsLabel *_verificationLabel;
    UILabel *_detailLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) AWEInsetsLabel *verificationLabel; // @synthesize verificationLabel=_verificationLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType handleTapOnAvatar; // @synthesize handleTapOnAvatar=_handleTapOnAvatar;
@property(retain, nonatomic) AWEPushFansUserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_refreshUI;
- (void)configWithModel:(id)arg1;
- (void)tapOnAvatar:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

