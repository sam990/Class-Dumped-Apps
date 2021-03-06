//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JETVideoViewDelegate-Protocol.h"

@class JETProgressBar, JETSetupConfigView, JETVideoView, MDCKeyboardWatcher, NSString, UILabel;
@protocol JETSetupReadyViewDelegate;

@interface JETSetupReadyView : UIView <JETVideoViewDelegate>
{
    _Bool _searchingVideo;
    unsigned long long _viewState;
    JETVideoView *_video;
    JETSetupConfigView *_configView;
    MDCKeyboardWatcher *_keyboardWatcher;
    id <JETSetupReadyViewDelegate> _delegate;
    UILabel *_captionLabel;
    UILabel *_subCaptionLabel;
    JETProgressBar *_progressBar;
}

@property(nonatomic) _Bool searchingVideo; // @synthesize searchingVideo=_searchingVideo;
@property(retain, nonatomic) JETProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UILabel *subCaptionLabel; // @synthesize subCaptionLabel=_subCaptionLabel;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(nonatomic) __weak id <JETSetupReadyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDCKeyboardWatcher *keyboardWatcher; // @synthesize keyboardWatcher=_keyboardWatcher;
@property(retain, nonatomic) JETSetupConfigView *configView; // @synthesize configView=_configView;
@property(retain, nonatomic) JETVideoView *video; // @synthesize video=_video;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)outroDidFinish;
- (void)loopDidFinish;
- (void)introDidFinish;
- (void)updateVideoForFound;
- (void)updateVideoForSearching;
- (void)positionConfigView;
- (void)keyboardChangedNotification:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
@property(nonatomic) double progress;
- (void)setCaption:(id)arg1 subCaption:(id)arg2 accessibilityID:(id)arg3;
- (void)setCaption:(id)arg1 subCaption:(id)arg2;
- (void)startAnimation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

