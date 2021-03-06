//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEBaseCell.h"

@class HMETimerViewModel, UIButton, UIImageView, UILabel;
@protocol HMETimerCollectionViewCellDelegate;

@interface HMETimerCollectionViewCell : HMEBaseCell
{
    id <HMETimerCollectionViewCellDelegate> _delegate;
    HMETimerViewModel *_viewModel;
    UIButton *_removeButton;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) HMETimerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <HMETimerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeTimer:(id)arg1;
- (void)prepareForReuse;
- (void)applyConfiguration;
- (id)initWithFrame:(struct CGRect)arg1;

@end

