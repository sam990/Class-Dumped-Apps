//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDCBottomDrawerPresentationControllerDelegate-Protocol.h"
#import "MDCElevatable-Protocol.h"
#import "MDCElevationOverriding-Protocol.h"

@class MDCBottomDrawerHeaderMask, MDCBottomDrawerTransitionController, NSMutableDictionary, NSString, UIColor, UIScrollView;
@protocol MDCBottomDrawerHeader, MDCBottomDrawerViewControllerDelegate;

@interface MDCBottomDrawerViewController : UIViewController <MDCBottomDrawerPresentationControllerDelegate, MDCElevatable, MDCElevationOverriding>
{
    NSMutableDictionary *_topCornersRadius;
    _Bool _isMaskAppliedFirstTime;
    _Bool _topHandleHidden;
    _Bool _shouldIncludeSafeAreaInContentHeight;
    double _mdc_overrideBaseElevation;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    UIViewController *_contentViewController;
    UIViewController<MDCBottomDrawerHeader> *_headerViewController;
    UIScrollView *_trackingScrollView;
    unsigned long long _drawerState;
    UIColor *_scrimColor;
    UIColor *_topHandleColor;
    double _maximumInitialDrawerHeight;
    UIColor *_drawerShadowColor;
    double _elevation;
    id <MDCBottomDrawerViewControllerDelegate> _delegate;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    MDCBottomDrawerTransitionController *_transitionController;
    MDCBottomDrawerHeaderMask *_maskLayer;
}

@property(retain, nonatomic) MDCBottomDrawerHeaderMask *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MDCBottomDrawerTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) __weak id <MDCBottomDrawerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double elevation; // @synthesize elevation=_elevation;
@property(retain, nonatomic) UIColor *drawerShadowColor; // @synthesize drawerShadowColor=_drawerShadowColor;
@property(nonatomic) _Bool shouldIncludeSafeAreaInContentHeight; // @synthesize shouldIncludeSafeAreaInContentHeight=_shouldIncludeSafeAreaInContentHeight;
@property(nonatomic) double maximumInitialDrawerHeight; // @synthesize maximumInitialDrawerHeight=_maximumInitialDrawerHeight;
@property(retain, nonatomic) UIColor *topHandleColor; // @synthesize topHandleColor=_topHandleColor;
@property(nonatomic, getter=isTopHandleHidden) _Bool topHandleHidden; // @synthesize topHandleHidden=_topHandleHidden;
@property(retain, nonatomic) UIColor *scrimColor; // @synthesize scrimColor=_scrimColor;
@property(readonly, nonatomic) unsigned long long drawerState; // @synthesize drawerState=_drawerState;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
@property(retain, nonatomic) UIViewController<MDCBottomDrawerHeader> *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
- (void).cxx_destruct;
- (void)expandToFullscreenWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContentOffsetY:(double)arg1 animated:(_Bool)arg2;
- (void)contentDrawerTopInset:(double)arg1;
- (void)bottomDrawerWillChangeState:(id)arg1 drawerState:(unsigned long long)arg2;
- (void)bottomDrawerTopTransitionRatio:(id)arg1 transitionRatio:(double)arg2;
- (_Bool)accessibilityPerformEscape;
@property(readonly, nonatomic) double mdc_currentElevation;
- (_Bool)contentReachesFullScreen;
- (_Bool)shouldPresentFullScreen;
- (_Bool)isMobileLandscape;
- (_Bool)isAccessibilityMode;
- (double)topCornersRadiusForDrawerState:(unsigned long long)arg1;
- (double)minimumCornerRadius;
- (void)setTopCornersRadius:(double)arg1 forDrawerState:(unsigned long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)modalPresentationStyle;
- (id)transitioningDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)commonMDCBottomDrawerViewControllerInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
