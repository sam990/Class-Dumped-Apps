//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10ProtonMail24ProtonMailViewController.h"

@class UIButton, UIImageView, UILabel, UITableView;

@interface _TtC10ProtonMail27ContactDetailViewController : _TtC10ProtonMail24ProtonMailViewController
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: kInvalidEmailShakeTimes
    // Error parsing type: , name: kInvalidEmailShakeOffset
    // Error parsing type: , name: kContactDetailsHeaderView
    // Error parsing type: , name: kContactDetailsHeaderID
    // Error parsing type: , name: kContactDetailsDisplayCell
    // Error parsing type: , name: kContactDetailsUpgradeCell
    // Error parsing type: , name: kContactsDetailsShareCell
    // Error parsing type: , name: kContactsDetailsWarningCell
    // Error parsing type: , name: kContactsDetailsEmailCell
    // Error parsing type: , name: kEditContactSegue
    // Error parsing type: , name: kToComposeSegue
    // Error parsing type: , name: kToUpgradeAlertSegue
    // Error parsing type: , name: tableView
    // Error parsing type: , name: profilePictureImageView
    // Error parsing type: , name: shortNameLabel
    // Error parsing type: , name: fullNameLabel
    // Error parsing type: , name: shareContactImageView
    // Error parsing type: , name: callContactImageView
    // Error parsing type: , name: emailContactImageView
    // Error parsing type: , name: emailContactLabel
    // Error parsing type: , name: shareContactLabel
    // Error parsing type: , name: callContactLabel
    // Error parsing type: , name: callContactButton
    // Error parsing type: , name: sendToPrimaryEmailButton
    // Error parsing type: , name: doneItem
    // Error parsing type: , name: loaded
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapEditButtonWithSender:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didTapShareContact:(id)arg1;
- (void)didTapCallContactButton:(id)arg1;
- (void)didTapSendToPrimaryEmailButton:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *sendToPrimaryEmailButton; // @synthesize sendToPrimaryEmailButton;
@property(nonatomic) __weak UIButton *callContactButton; // @synthesize callContactButton;
@property(nonatomic) __weak UILabel *callContactLabel; // @synthesize callContactLabel;
@property(nonatomic) __weak UILabel *shareContactLabel; // @synthesize shareContactLabel;
@property(nonatomic) __weak UILabel *emailContactLabel; // @synthesize emailContactLabel;
@property(nonatomic) __weak UIImageView *emailContactImageView; // @synthesize emailContactImageView;
@property(nonatomic) __weak UIImageView *callContactImageView; // @synthesize callContactImageView;
@property(nonatomic) __weak UIImageView *shareContactImageView; // @synthesize shareContactImageView;
@property(nonatomic) __weak UILabel *fullNameLabel; // @synthesize fullNameLabel;
@property(nonatomic) __weak UILabel *shortNameLabel; // @synthesize shortNameLabel;
@property(nonatomic) __weak UIImageView *profilePictureImageView; // @synthesize profilePictureImageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

