//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol IESLiveEnvironment;

@interface HTSLivePKRaidBar : UIView
{
    _Bool _isSelfAttack;
    UIImageView *_attackView;
    UIImageView *_defendView;
    UILabel *_titleLabel;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) _Bool isSelfAttack; // @synthesize isSelfAttack=_isSelfAttack;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *defendView; // @synthesize defendView=_defendView;
@property(retain, nonatomic) UIImageView *attackView; // @synthesize attackView=_attackView;
- (void).cxx_destruct;
- (void)endWithAttackWin:(_Bool)arg1;
- (void)updateWithCurrent:(long long)arg1 total:(long long)arg2;
- (void)setupViews;
- (id)initWithSelfAttack:(_Bool)arg1;

@end

