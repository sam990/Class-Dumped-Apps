//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEButton, AWEUIButton, UIImageView, UILabel, UIViewController;

@interface AWEUploadContactAlertView : UIView
{
    AWEUIButton *_buttonDeny;
    AWEUIButton *_buttonAllow;
    UIView *_animationView;
    UIView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_subDescriptionLabel;
    AWEButton *_policyLinkLabel;
    UIViewController *_viewController;
}

+ (void)showAlertWithTitle:(id)arg1 fromView:(id)arg2 description:(id)arg3 subDecription:(id)arg4 iamgeUrl:(id)arg5 actionButtonTitle:(id)arg6 cancelButtonTitle:(id)arg7 actionBlock:(CDUnknownBlockType)arg8 cancelBlock:(CDUnknownBlockType)arg9;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AWEButton *policyLinkLabel; // @synthesize policyLinkLabel=_policyLinkLabel;
@property(retain, nonatomic) UILabel *subDescriptionLabel; // @synthesize subDescriptionLabel=_subDescriptionLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) AWEUIButton *buttonAllow; // @synthesize buttonAllow=_buttonAllow;
@property(retain, nonatomic) AWEUIButton *buttonDeny; // @synthesize buttonDeny=_buttonDeny;
- (void).cxx_destruct;
- (void)cancelClicked;
- (void)__dismissAlertWithAnimation;
- (void)tapUserService;
- (void)dismissAlertView;
- (void)__showAlertWithAnimation;
- (void)loadSubviews;
- (id)init;

@end
