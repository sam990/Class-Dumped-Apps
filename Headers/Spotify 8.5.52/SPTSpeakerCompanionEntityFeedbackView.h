//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSpeakerCompanionEntityFeedbackViewModelPresentationDelegate-Protocol.h"

@class GLUEButton, GLUEImageView, NSString, SPTSpeakerCompanionEntityFeedbackViewModel, UILabel;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTSpeakerCompanionEntityFeedbackView : UIView <SPTSpeakerCompanionEntityFeedbackViewModelPresentationDelegate>
{
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
    SPTSpeakerCompanionEntityFeedbackViewModel *_viewModel;
    UILabel *_entityLabel;
    GLUEImageView *_artworkImageView;
    UILabel *_questionLabel;
    UIView *_containerView;
    GLUEButton *_yesButton;
    GLUEButton *_noButton;
}

@property(retain, nonatomic) GLUEButton *noButton; // @synthesize noButton=_noButton;
@property(retain, nonatomic) GLUEButton *yesButton; // @synthesize yesButton=_yesButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) GLUEImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) UILabel *entityLabel; // @synthesize entityLabel=_entityLabel;
@property(retain, nonatomic) SPTSpeakerCompanionEntityFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)entityFeedbackViewModel:(id)arg1 didWantToUpdateViewsWithFeedback:(id)arg2;
- (void)noButtonClicked:(id)arg1;
- (void)yesButtonClicked:(id)arg1;
- (void)updateViewWithFeedback:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1 glueImageLoader:(id)arg2 glueTheme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
