//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSArray, NSString, SCUnifiedProfileDisplayTitleView, UIButton;
@protocol SCActionHandling, SCUnifiedProfileHeaderViewDelegate;

@interface SCUnifiedProfileHeaderView : UIView <SCActionable, SCViewModelConfigurable>
{
    UIView *_backgroundView;
    UIButton *_dismissButton;
    SCUnifiedProfileDisplayTitleView *_displayTitleView;
    NSArray *_rightIconViews;
    double _cornerViewHeight;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCUnifiedProfileHeaderViewDelegate> _delegate;
    double _displayTitleBottomY;
    double _alphaForRightIcons;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) double alphaForRightIcons; // @synthesize alphaForRightIcons=_alphaForRightIcons;
@property(nonatomic) double displayTitleBottomY; // @synthesize displayTitleBottomY=_displayTitleBottomY;
@property(nonatomic) __weak id <SCUnifiedProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_setAlphaToRightIconViews;
- (id)_buildHeaderIconViewWithViewModel:(id)arg1 shouldUseLargeTouchArea:(_Bool)arg2;
- (void)_updateRightIconViews:(id)arg1;
- (void)_handleDismissTap;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCornerViewHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
