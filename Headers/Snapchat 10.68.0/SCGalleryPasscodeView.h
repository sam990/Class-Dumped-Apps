//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableString, NSString, SCGalleryPasscodeViewConfiguration, SCSentinel, UIControl, UIDynamicAnimator, UILongPressGestureRecognizer;
@protocol SCGalleryPasscodeKeyView, SCGalleryPasscodeViewDelegate;

@interface SCGalleryPasscodeView : UIView <UIGestureRecognizerDelegate>
{
    SCGalleryPasscodeViewConfiguration *_configuration;
    NSMutableString *_currentPasscode;
    _Bool _resetting;
    SCSentinel *_sentinel;
    UIView *_indicatorContainerView;
    NSArray *_indicatorViews;
    UIView *_keyContainerView;
    NSArray *_keyViews;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIControl<SCGalleryPasscodeKeyView> *_pressedKeyView;
    UIDynamicAnimator *_animator;
    id <SCGalleryPasscodeViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPasscodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setIndicatorViewAtIndex:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)_didPressBackKeyView:(id)arg1;
- (void)_didPressNumericKeyView:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_reset;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)resetForFailedPasscode;
- (void)reset;
@property(readonly, copy, nonatomic) NSString *passcode;
- (struct CGSize)intrinsicContentSize;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
