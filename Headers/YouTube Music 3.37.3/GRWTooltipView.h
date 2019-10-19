//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MDCButton, MDCShadowLayer, NSString, UIColor, UILabel;
@protocol GRWTooltipLifeCycleDelegate;

@interface GRWTooltipView : UIView
{
    id <GRWTooltipLifeCycleDelegate> _delegate;
    UIColor *_titleColor;
    UIColor *_textColor;
    UIColor *_tipBackgroundColor;
    long long _direction;
    UIColor *_actionTextColor;
    UIColor *_actionInkColor;
    NSString *_title;
    NSString *_body;
    NSString *_actionText;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_contentView;
    MDCButton *_actionButton;
    CAShapeLayer *_backgroundLayer;
    UIView *_highlightedView;
    struct UIEdgeInsets _safeMargins;
}

+ (Class)layerClass;
@property(nonatomic) __weak UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) struct UIEdgeInsets safeMargins; // @synthesize safeMargins=_safeMargins;
@property(retain, nonatomic) MDCButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *actionInkColor; // @synthesize actionInkColor=_actionInkColor;
@property(retain, nonatomic) UIColor *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIColor *tipBackgroundColor; // @synthesize tipBackgroundColor=_tipBackgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) __weak id <GRWTooltipLifeCycleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (id)pathForBackgroundWithPointAtTipX:(double)arg1 arrowPosition:(long long)arg2;
- (void)setupLayerAndViewHierarchy;
- (void)updateSafeMarginsForWindow:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareToolTipForAnchorView:(id)arg1 inWindow:(id)arg2;
@property(readonly, nonatomic) MDCShadowLayer *shadowLayer;
- (id)initWithTitle:(id)arg1 body:(id)arg2 actionText:(id)arg3 arrowDirection:(long long)arg4;

@end
