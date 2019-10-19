//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class GLUEButton, GLUELabel, NSArray, NSString, NSURL, UIScrollView, UIView;
@protocol GLUETheme, SPTInAppMessageQAToolNoteViewDelegate, SPTPageContainer;

@interface SPTInAppMessageQAToolNoteMessageViewController : UIViewController <SPTPageController>
{
    id <SPTInAppMessageQAToolNoteViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentView;
    GLUEButton *_acceptCreativeButton;
    GLUEButton *_rejectCreativeButton;
    GLUEButton *_cancelButton;
    GLUELabel *_languageLabel;
    GLUELabel *_countryLabel;
    id <GLUETheme> _theme;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUELabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) GLUELabel *languageLabel; // @synthesize languageLabel=_languageLabel;
@property(retain, nonatomic) GLUEButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) GLUEButton *rejectCreativeButton; // @synthesize rejectCreativeButton=_rejectCreativeButton;
@property(retain, nonatomic) GLUEButton *acceptCreativeButton; // @synthesize acceptCreativeButton=_acceptCreativeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <SPTInAppMessageQAToolNoteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)cancelButtonPressed;
- (void)rejectButtonPressed;
- (void)acceptButtonPressed;
- (void)setLanguage:(id)arg1 country:(id)arg2;
- (id)createLayoutConstraints;
- (void)setupLabels;
- (void)setupButtons;
- (void)setupContentView;
- (void)setupScrollview;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
