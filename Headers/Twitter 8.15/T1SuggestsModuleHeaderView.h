//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewHeaderFooterView.h>

@class TFNRoundedCornerView, UIButton, UIImageView, UILabel, UITableView, UIView;
@protocol T1SuggestsModuleHeaderViewDelegate;

@interface T1SuggestsModuleHeaderView : TFNTableViewHeaderFooterView
{
    UITableView *_tableView;
    TFNRoundedCornerView *_imageContainerView;
    UIButton *_caretButton;
    UILabel *_headerTextLabel;
    UILabel *_detailHeaderTextLabel;
    UIImageView *_iconImageView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    id <T1SuggestsModuleHeaderViewDelegate> _delegate;
}

+ (double)heightWithHeaderText:(id)arg1 andDetailText:(id)arg2 iconHidden:(_Bool)arg3 caretHidden:(_Bool)arg4 layoutMetrics:(id)arg5;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id <T1SuggestsModuleHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(readonly, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *detailHeaderTextLabel; // @synthesize detailHeaderTextLabel=_detailHeaderTextLabel;
@property(readonly, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(readonly, nonatomic) UIButton *caretButton; // @synthesize caretButton=_caretButton;
- (void).cxx_destruct;
- (id)calculatedLayoutMetrics;
- (void)_caretButtonWasPressed:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithReuseIdentifier:(id)arg1;

@end
