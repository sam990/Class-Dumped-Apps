//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface AWEMFriendNoticeNotificationTableViewCell : AWEMTNotificationBaseTableViewCell
{
    double _detailButtonWidth;
    UIImageView *_avatarView;
    UILabel *_textView;
    UIButton *_detailButton;
    NSLayoutConstraint *_detailButtonWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *detailButtonWidthConstraint; // @synthesize detailButtonWidthConstraint=_detailButtonWidthConstraint;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double detailButtonWidth; // @synthesize detailButtonWidth=_detailButtonWidth;
- (void).cxx_destruct;
- (id)mobileFriendNoticeAttributedStringWithName:(id)arg1 timestamp:(id)arg2;
- (void)transferToFriendProfileViewControllerWithEnterMethod:(id)arg1;
- (void)detailButtonPressed;
- (void)didTapUserView:(id)arg1;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
