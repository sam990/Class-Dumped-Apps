//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UIView, _TtC7NordVPN20VerticalGradientView;

@interface _TtC7NordVPN29DeepLinkConnectViewController : UIViewController
{
    // Error parsing type: , name: backgroundImage
    // Error parsing type: , name: gradientView
    // Error parsing type: , name: flagView
    // Error parsing type: , name: statusLabel
    // Error parsing type: , name: flagImage
    // Error parsing type: , name: serverNameLabel
    // Error parsing type: , name: spinnerImageView
    // Error parsing type: , name: closingLabel
    // Error parsing type: , name: errorActionsView
    // Error parsing type: , name: chooseOtherServerButton
    // Error parsing type: , name: cancelConnectionButton
    // Error parsing type: , name: queuedServerPicker
    // Error parsing type: , name: action
    // Error parsing type: , name: performingAction
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)cancelButtonPressed:(id)arg1;
- (void)chooseOtherPressed:(id)arg1;
- (void)suspendApp;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *cancelConnectionButton; // @synthesize cancelConnectionButton;
@property(nonatomic) __weak UIButton *chooseOtherServerButton; // @synthesize chooseOtherServerButton;
@property(nonatomic) __weak UIView *errorActionsView; // @synthesize errorActionsView;
@property(nonatomic) __weak UILabel *closingLabel; // @synthesize closingLabel;
@property(nonatomic) __weak UIImageView *spinnerImageView; // @synthesize spinnerImageView;
@property(nonatomic) __weak UILabel *serverNameLabel; // @synthesize serverNameLabel;
@property(nonatomic) __weak UIImageView *flagImage; // @synthesize flagImage;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel;
@property(nonatomic) __weak UIView *flagView; // @synthesize flagView;
@property(nonatomic) __weak _TtC7NordVPN20VerticalGradientView *gradientView; // @synthesize gradientView;
@property(nonatomic) __weak UIImageView *backgroundImage; // @synthesize backgroundImage;

@end
