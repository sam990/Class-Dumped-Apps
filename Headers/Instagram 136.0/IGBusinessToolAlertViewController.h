//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGBusinessToolAlertViewDelegate-Protocol.h>

@class IGBusinessToolAlertView, IGUserSession, NSArray, NSString, NSURL;
@protocol IGBusinessToolAlertViewControllerDelegate;

@interface IGBusinessToolAlertViewController : IGViewController <IGBusinessToolAlertViewDelegate>
{
    IGBusinessToolAlertView *_businessToolAlertView;
    NSURL *_profileImageURL;
    NSString *_title;
    NSString *_message;
    NSString *_linkSubtitle;
    NSString *_actionText;
    NSString *_dismissActiontext;
    IGUserSession *_userSession;
    NSArray *_buttonConfigs;
    id <IGBusinessToolAlertViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessToolAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startLoadingOnActionButton;
- (void)didTapDismissActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapLinkInSubtitle:(id)arg1 withBusinessToolAlertView:(id)arg2;
- (void)didTapCTAButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapCloseButtonWithBusinessToolAlertView:(id)arg1;
- (void)setMessage:(id)arg1 isStyledString:(_Bool)arg2;
- (void)setProfileImageWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_initWithProfileImageURL:(id)arg1 title:(id)arg2 message:(id)arg3 linkSubtitle:(id)arg4 actionText:(id)arg5 dismissActionText:(id)arg6 userSession:(id)arg7 buttonConfigs:(id)arg8;
- (id)initWithSession:(id)arg1 profileImageURL:(id)arg2 title:(id)arg3 message:(id)arg4 linkSubtitle:(id)arg5 buttonConfigs:(id)arg6;
- (id)initWithProfileImageURL:(id)arg1 title:(id)arg2 message:(id)arg3 linkSubtitle:(id)arg4 actionText:(id)arg5 dismissActionText:(id)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

