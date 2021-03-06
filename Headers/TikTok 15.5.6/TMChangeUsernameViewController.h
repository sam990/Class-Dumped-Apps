//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEChangeUsernameViewControllerProtocol-Protocol.h"
#import "AWEInputSuggestionViewDataSource-Protocol.h"
#import "AWEInputSuggestionViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEInputSuggestionView, AWEUILoadingView, MASConstraint, NSArray, NSDictionary, NSString, NSTimer, TMCreateUsernameView, TMErrorHintView, UIButton, UILabel, UIView;

@interface TMChangeUsernameViewController : UIViewController <UITextFieldDelegate, AWEInputSuggestionViewDataSource, AWEInputSuggestionViewDelegate, AWEChangeUsernameViewControllerProtocol>
{
    NSDictionary *logExtraDict;
    CDUnknownBlockType completionBlock;
    TMCreateUsernameView *_usernameInputView;
    TMErrorHintView *_errorHintView;
    UIView *_containerViewBelowErrorHint;
    UILabel *_personalLinkLabel;
    UILabel *_usernameRuleLabel;
    AWEInputSuggestionView *_inputSuggestionView;
    AWEUILoadingView *_loadingView;
    UIButton *_saveButton;
    MASConstraint *_containerTopSpace;
    MASConstraint *_containerTopSpaceWithErrorHint;
    NSTimer *_checkUsernameTimer;
    NSArray *_recommendedUsernames;
}

+ (void)__awe__codeRunnerRun_61;
@property(retain, nonatomic) NSArray *recommendedUsernames; // @synthesize recommendedUsernames=_recommendedUsernames;
@property(retain, nonatomic) NSTimer *checkUsernameTimer; // @synthesize checkUsernameTimer=_checkUsernameTimer;
@property(retain, nonatomic) MASConstraint *containerTopSpaceWithErrorHint; // @synthesize containerTopSpaceWithErrorHint=_containerTopSpaceWithErrorHint;
@property(retain, nonatomic) MASConstraint *containerTopSpace; // @synthesize containerTopSpace=_containerTopSpace;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEInputSuggestionView *inputSuggestionView; // @synthesize inputSuggestionView=_inputSuggestionView;
@property(retain, nonatomic) UILabel *usernameRuleLabel; // @synthesize usernameRuleLabel=_usernameRuleLabel;
@property(retain, nonatomic) UILabel *personalLinkLabel; // @synthesize personalLinkLabel=_personalLinkLabel;
@property(retain, nonatomic) UIView *containerViewBelowErrorHint; // @synthesize containerViewBelowErrorHint=_containerViewBelowErrorHint;
@property(retain, nonatomic) TMErrorHintView *errorHintView; // @synthesize errorHintView=_errorHintView;
@property(retain, nonatomic) TMCreateUsernameView *usernameInputView; // @synthesize usernameInputView=_usernameInputView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict;
- (void).cxx_destruct;
- (id)currentUser;
- (void)hideInputSuggestionView;
- (void)showInputSuggestionViewWithRecommendedUsernames:(id)arg1;
- (void)hideError;
- (void)showErrorMessage:(id)arg1;
- (void)handleError:(id)arg1;
- (_Bool)enableEditUsername;
- (id)tipString;
- (id)personalLinkAttributedStringWithUsername:(id)arg1;
- (void)updateUsername:(id)arg1;
- (void)fetchRecommendedUsername;
- (void)exit;
- (void)commitChange;
- (void)didSelectSuggestionString:(id)arg1;
- (id)suggestionStrings;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)checkUsernameTimerFired:(id)arg1;
- (void)saveAction;
- (void)cancelAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

