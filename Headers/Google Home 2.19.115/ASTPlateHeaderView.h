//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTThemable-Protocol.h"

@class ASTLogoView, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface ASTPlateHeaderView : UIView <ASTThemable>
{
    NSString *_title;
    UIImage *_icon;
    UIImage *_avatarImage;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    ASTLogoView *_logoView;
    UIView *_indicatorView;
    UIImageView *_avatarView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_collapedConstraint;
    NSLayoutConstraint *_contentCollapsedConstraint;
    NSLayoutConstraint *_indicatorCollapedConstraint;
    NSLayoutConstraint *_avatarWidthConstraint;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) NSLayoutConstraint *avatarWidthConstraint; // @synthesize avatarWidthConstraint=_avatarWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *indicatorCollapedConstraint; // @synthesize indicatorCollapedConstraint=_indicatorCollapedConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentCollapsedConstraint; // @synthesize contentCollapsedConstraint=_contentCollapsedConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collapedConstraint; // @synthesize collapedConstraint=_collapedConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) ASTLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)applyTheme:(unsigned long long)arg1;
- (void)updateContentConstraint;
- (void)setAssistantIcon;
- (void)clearContent;
@property(nonatomic) _Bool draggableIndicatorHidden;
- (id)buildDraggableIndicatorView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

