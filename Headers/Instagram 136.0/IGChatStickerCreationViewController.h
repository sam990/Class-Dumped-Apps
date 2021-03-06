//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGChatStickerViewCreationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverHideDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryStickerEditingViewControllerProtocol-Protocol.h>

@class IGChatStickerView, IGKeyboardObserver, IGStoryColorPaletteGradientWheel, IGTapButton, IGTooltipView, IGUserSession, NSArray, NSString, UILabel, UIView;
@protocol IGChatStickerCreationViewControllerDelegate;

@interface IGChatStickerCreationViewController : UIViewController <IGChatStickerViewCreationDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGStoryStickerEditingViewControllerProtocol>
{
    IGUserSession *_userSession;
    _Bool _tappedCancelButton;
    _Bool _isStickerNewlyCreated;
    UIView *_dimmingView;
    IGTapButton *_cancelButton;
    IGTapButton *_doneButton;
    IGStoryColorPaletteGradientWheel *_colorWheel;
    UILabel *_helpText;
    UIView *_clippingContainerView;
    IGTooltipView *_tooltipView;
    _Bool _isTooltipActive;
    id <IGChatStickerCreationViewControllerDelegate> _delegate;
    IGChatStickerView *_chatStickerView;
    double _contentRegionCornerRadius;
    IGKeyboardObserver *_keyboardObserver;
    struct CGRect _contentRegion;
}

@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(readonly, nonatomic) IGChatStickerView *chatStickerView; // @synthesize chatStickerView=_chatStickerView;
@property(nonatomic) __weak id <IGChatStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)chatStickerViewDidChangeText:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_hideTooltip;
- (void)_showTooltipIfNeeded;
- (void)_colorWheelChanged:(id)arg1;
- (void)_updateDoneButtonState;
- (void)_tryFinishEditing;
- (void)_didTapDoneButton:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (void)_didTapBackground:(id)arg1;
- (void)viewDidLayoutSubviews;
- (struct CGSize)_availableEditingSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 chatStickerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

