//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, UIButton, UILabel;
@protocol NFUINotificationMultiTitleSupplementaryDelegateProtocol;

@interface NFUINotificationMultiTitleHeaderView : UICollectionReusableView
{
    _Bool _showsBackButton;
    id <NFUINotificationMultiTitleSupplementaryDelegateProtocol> _delegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_backButton;
    NSLayoutConstraint *_backButtonHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *backButtonHeightConstraint; // @synthesize backButtonHeightConstraint=_backButtonHeightConstraint;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool showsBackButton; // @synthesize showsBackButton=_showsBackButton;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <NFUINotificationMultiTitleSupplementaryDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (struct CGSize)measureForWidth:(double)arg1;
- (void)awakeFromNib;

@end

