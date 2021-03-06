//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>
#import <TelegramUI/UIPopoverControllerDelegate-Protocol.h>
#import <TelegramUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <TelegramUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, SDisposableSet, SMetaDisposable, TGMenuPanGestureRecognizer, TGMenuSheetDimView, TGMenuSheetPallete, TGMenuSheetView, UIBarButtonItem, UIImageView, UIPanGestureRecognizer, UIPopoverController, UIView;
@protocol LegacyComponentsContext;

@interface TGMenuSheetController : UIViewController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPopoverControllerDelegate, UIViewControllerPreviewingDelegate>
{
    _Bool _dark;
    UIView *_containerView;
    TGMenuSheetDimView *_dimView;
    UIImageView *_shadowView;
    TGMenuSheetView *_sheetView;
    _Bool _presented;
    SMetaDisposable *_sizeClassDisposable;
    long long _sizeClass;
    _Bool _hasSwipeGesture;
    TGMenuPanGestureRecognizer *_gestureRecognizer;
    double _gestureStartPosition;
    double _gestureActualStartPosition;
    _Bool _shouldPassPanOffset;
    _Bool _wasPanning;
    _Bool _hasDistractableItems;
    UIView *_sourceView;
    UIViewController *_parentController;
    double _keyboardOffset;
    id _keyboardWillChangeFrameProxy;
    _Bool _checked3dTouch;
    NSDictionary *_3dTouchHandlers;
    UIPopoverController *_popoverController;
    id <LegacyComponentsContext> _context;
    _Bool _borderless;
    _Bool _requiuresDimView;
    _Bool _requiresShadow;
    _Bool _dismissesByOutsideTap;
    _Bool _followsKeyboard;
    _Bool _ignoreNextDismissal;
    _Bool _narrowInLandscape;
    _Bool _inhibitPopoverPresentation;
    _Bool _stickWithSpecifiedParentController;
    _Bool _forceFullScreen;
    _Bool _packIsArchived;
    _Bool _packIsMask;
    SDisposableSet *_disposables;
    NSArray *_itemViews;
    CDUnknownBlockType _willPresent;
    CDUnknownBlockType _willDismiss;
    CDUnknownBlockType _didDismiss;
    CDUnknownBlockType _customRemoveFromParentViewController;
    unsigned long long _permittedArrowDirections;
    CDUnknownBlockType _sourceRect;
    UIBarButtonItem *_barButtonItem;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _maxHeight;
    TGMenuSheetPallete *_pallete;
}

@property(retain, nonatomic) TGMenuSheetPallete *pallete; // @synthesize pallete=_pallete;
@property(nonatomic) _Bool packIsMask; // @synthesize packIsMask=_packIsMask;
@property(nonatomic) _Bool packIsArchived; // @synthesize packIsArchived=_packIsArchived;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(copy, nonatomic) CDUnknownBlockType sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(copy, nonatomic) CDUnknownBlockType customRemoveFromParentViewController; // @synthesize customRemoveFromParentViewController=_customRemoveFromParentViewController;
@property(copy, nonatomic) CDUnknownBlockType didDismiss; // @synthesize didDismiss=_didDismiss;
@property(copy, nonatomic) CDUnknownBlockType willDismiss; // @synthesize willDismiss=_willDismiss;
@property(copy, nonatomic) CDUnknownBlockType willPresent; // @synthesize willPresent=_willPresent;
@property(readonly, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) _Bool forceFullScreen; // @synthesize forceFullScreen=_forceFullScreen;
@property(nonatomic) _Bool stickWithSpecifiedParentController; // @synthesize stickWithSpecifiedParentController=_stickWithSpecifiedParentController;
@property(nonatomic) _Bool inhibitPopoverPresentation; // @synthesize inhibitPopoverPresentation=_inhibitPopoverPresentation;
@property(nonatomic) _Bool narrowInLandscape; // @synthesize narrowInLandscape=_narrowInLandscape;
@property(nonatomic) _Bool ignoreNextDismissal; // @synthesize ignoreNextDismissal=_ignoreNextDismissal;
@property(nonatomic) _Bool followsKeyboard; // @synthesize followsKeyboard=_followsKeyboard;
@property(nonatomic) _Bool dismissesByOutsideTap; // @synthesize dismissesByOutsideTap=_dismissesByOutsideTap;
@property(nonatomic) _Bool requiresShadow; // @synthesize requiresShadow=_requiresShadow;
@property(nonatomic) _Bool requiuresDimView; // @synthesize requiuresDimView=_requiuresDimView;
@property(nonatomic) _Bool borderless; // @synthesize borderless=_borderless;
@property(readonly, nonatomic) SDisposableSet *disposables; // @synthesize disposables=_disposables;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setup3DTouch;
- (void)removeFromParentViewController;
- (void)updateKeyboardOffset:(double)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
@property(readonly, nonatomic) UIViewController *parentController;
- (void)setDimViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double menuHeight;
@property(readonly, nonatomic) double statusBarHeight;
- (struct CGRect)_shadowFrame;
- (void)repositionMenuWithReferenceSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInset;
- (struct UIEdgeInsets)safeAreaInsetForOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateTraitsWithSizeClass:(long long)arg1;
- (double)clampVelocity:(double)arg1;
- (double)swipeOffsetForOffset:(double)arg1;
- (void)applySheetOffset:(double)arg1;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateGestureRecognizer;
@property(nonatomic) _Bool hasSwipeGesture;
- (void)animateSheetViewToPosition:(double)arg1 velocity:(double)arg2 type:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissAnimated:(_Bool)arg1 manual:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAnimated:(_Bool)arg1 manual:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentInViewController:(id)arg1 sourceView:(id)arg2 animated:(_Bool)arg3;
- (void)_presentPopoverInController:(id)arg1;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (_Bool)isInPopover;
@property(readonly, nonatomic) long long sizeClass;
@property(readonly, nonatomic) UIView *sourceView;
- (void)dimViewPressed;
- (void)removeItemViewsAtIndexes:(id)arg1;
- (void)setItemViews:(id)arg1 animated:(_Bool)arg2;
- (void)setItemViews:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 itemViews:(id)arg2;
- (id)initWithContext:(id)arg1 dark:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

