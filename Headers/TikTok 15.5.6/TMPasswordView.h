//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASConstraint, TMErrorHintView, TMLoginButton, TMPasswordInputView, TMPasswordViewModel, UILabel;
@protocol TMPasswordViewDelegate;

@interface TMPasswordView : UIView
{
    id <TMPasswordViewDelegate> _delegate;
    TMPasswordInputView *_passwordInputView;
    TMPasswordViewModel *_model;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    TMErrorHintView *_errorHintView;
    TMLoginButton *_createPasswordButton;
    MASConstraint *_loginPasswordButtonTopConstraint;
}

@property(retain, nonatomic) MASConstraint *loginPasswordButtonTopConstraint; // @synthesize loginPasswordButtonTopConstraint=_loginPasswordButtonTopConstraint;
@property(retain, nonatomic) TMLoginButton *createPasswordButton; // @synthesize createPasswordButton=_createPasswordButton;
@property(retain, nonatomic) TMErrorHintView *errorHintView; // @synthesize errorHintView=_errorHintView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TMPasswordViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TMPasswordInputView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(nonatomic) __weak id <TMPasswordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createPasswordAction;
- (void)stopLoading;
- (void)startLoading;
- (void)showErrorHint:(id)arg1;
- (void)hideErrorHint;
- (void)setupUI;
- (id)initWithModel:(id)arg1;

@end

