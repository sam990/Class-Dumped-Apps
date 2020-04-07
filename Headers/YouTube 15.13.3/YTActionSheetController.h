//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOPopoverViewControllerDelegate-Protocol.h>
#import <Module_Framework/UIScrollViewDelegate-Protocol.h>
#import <Module_Framework/YTActionSheetDialogViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTBottomSheetControllerDelegate-Protocol.h>

@class CALayer, MDCShadowLayer, NSArray, NSMutableArray, NSString, QTMButton, UIColor, UIScrollView, UIView, UIViewController, YTActionSheetDialogViewController, YTDraggableView, YTTopAlignedView;
@protocol YTActionSheetControllerDelegate;

@interface YTActionSheetController : NSObject <GOOPopoverViewControllerDelegate, UIScrollViewDelegate, YTActionSheetDialogViewControllerDelegate, YTBottomSheetControllerDelegate>
{
    UIViewController *_containerViewController;
    YTActionSheetDialogViewController *_actionsController;
    NSMutableArray *_actions;
    long long _forceActionSheetStyle;
    _Bool _isStickyFooter;
    _Bool _customFooterButton;
    double _bottomSheetMaxHeightRatio;
    YTTopAlignedView *_stickyFooterButtonContainer;
    MDCShadowLayer *_stickyFooterShadowLayer;
    UIView *_stickyFooterButton;
    UIView *_headerView;
    QTMButton *_stickyFooterButtonTapArea;
    NSString *_cancelButtonTitle;
    long long _cancelButtonIconType;
    CALayer *_stickyFooterButtonBorder;
    YTDraggableView *_draggableView;
    UIScrollView *_dialogContainerScrollView;
    struct CGPoint _lastValidContentOffset;
    _Bool _colorizeActionButtons;
    id <YTActionSheetControllerDelegate> _delegate;
    unsigned long long _permittedArrowDirections;
    unsigned long long _anchorCorner;
    UIView *_sourceView;
    UIColor *_separatorColor;
    long long _actionTitleTypeKind;
    CDUnknownBlockType _selectionAnimationBlock;
    struct CGSize _offset;
}

+ (id)bottomSheetActionSheet;
+ (id)popoverActionSheetWithMessage:(id)arg1 subMessage:(id)arg2;
+ (id)popoverActionSheet;
+ (id)actionSheetControllerWithMessage:(id)arg1 subMessage:(id)arg2;
+ (id)actionSheetControllerWithMessage:(id)arg1;
+ (id)actionSheetController;
+ (id)actionSheetControllerForItemsArray:(id)arg1 view:(id)arg2 responder:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType selectionAnimationBlock; // @synthesize selectionAnimationBlock=_selectionAnimationBlock;
@property(nonatomic) long long actionTitleTypeKind; // @synthesize actionTitleTypeKind=_actionTitleTypeKind;
@property(nonatomic) _Bool colorizeActionButtons; // @synthesize colorizeActionButtons=_colorizeActionButtons;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long anchorCorner; // @synthesize anchorCorner=_anchorCorner;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(nonatomic) __weak id <YTActionSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)pageStyle;
- (_Bool)shouldAddCancelAction;
- (void)setStickyFooterButtonElevated:(_Bool)arg1;
- (void)didTapStickyFooterButton;
- (void)setupScrollViewDelegateIfNeeded;
- (void)addStickyFooterBorder:(id)arg1;
- (void)addStickyFooterTapArea:(id)arg1;
- (void)setupStickyFooterIfNeeded;
- (void)setupDraggableView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)popoverViewControllerDidCancel:(id)arg1;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (void)closeBottomSheet;
- (_Bool)isStickyFooter;
- (void)adjustFooterDimensions:(id)arg1 footerHeight:(double)arg2;
- (void)actionSheetDialogViewControllerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissContainerViewControllerWithAction:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissWithAction:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)calculateScrollViewHeight;
- (void)setBottomSheetMaxHeightRatio:(double)arg1;
- (void)adjustBottomSheetMaxHeight;
- (void)addStickyFooterToBottomSheetController;
- (void)setupPresenter:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFromView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createYTActionSheetActionFromView:(id)arg1 size:(struct CGSize)arg2 handler:(CDUnknownBlockType)arg3;
- (id)addActionWithView:(id)arg1 size:(struct CGSize)arg2 handler:(CDUnknownBlockType)arg3;
- (id)addActionWithView:(id)arg1 size:(struct CGSize)arg2;
- (id)addActionWithView:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)addActionWithView:(id)arg1;
- (void)addExtraContentView:(id)arg1;
- (void)addCancelActionFromView:(id)arg1;
- (void)addHeaderView:(id)arg1;
- (void)addStickyFooterSpacerButton:(double)arg1;
- (void)addCancelActionIfNeededWithTitle:(id)arg1 iconType:(long long)arg2;
- (void)addCancelActionIfNeededWithTitle:(id)arg1;
- (void)addCancelActionIfNeededWithButton:(id)arg1;
- (void)addCancelActionIfNeeded;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (id)popoverViewController;
@property(readonly, nonatomic) YTActionSheetDialogViewController *dialogViewController;
- (id)containerViewController;
@property(retain, nonatomic) UIColor *popoverBackgroundColor;
- (void)setPreferredHeight:(double)arg1;
- (id)initWithMessage:(id)arg1 subMessage:(id)arg2 forceStyle:(long long)arg3;
- (id)initWithMessage:(id)arg1 subMessage:(id)arg2;
- (id)initPopoverActionSheet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
