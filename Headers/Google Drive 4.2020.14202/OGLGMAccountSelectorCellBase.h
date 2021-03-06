//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MDCRippleTouchControllerDelegate-Protocol.h"
#import "OGLGM2AccountSelectorCell-Protocol.h"

@class MDCRippleTouchController, NSString, OGLGM2AccountSelectorCellHorizontalPaddingCalculator, UIView;
@protocol OGLTheming;

@interface OGLGMAccountSelectorCellBase : UITableViewCell <MDCRippleTouchControllerDelegate, OGLGM2AccountSelectorCell>
{
    _Bool _opaqueBackgroundColor;
    _Bool _withinInlineAccountMenu;
    double _horizontalInset;
    long long _accountMenuAppearance;
    CDUnknownBlockType _actionCallback;
    UIView *_internalContentView;
    MDCRippleTouchController *_rippleTouchController;
    OGLGM2AccountSelectorCellHorizontalPaddingCalculator *_horizontalPaddingCalculator;
    id <OGLTheming> _oglTheme;
}

+ (double)heightWithItem:(id)arg1 constrainToCellWidth:(double)arg2;
@property(nonatomic) _Bool withinInlineAccountMenu; // @synthesize withinInlineAccountMenu=_withinInlineAccountMenu;
@property(retain, nonatomic) id <OGLTheming> oglTheme; // @synthesize oglTheme=_oglTheme;
@property(retain, nonatomic) OGLGM2AccountSelectorCellHorizontalPaddingCalculator *horizontalPaddingCalculator; // @synthesize horizontalPaddingCalculator=_horizontalPaddingCalculator;
@property(readonly, nonatomic) MDCRippleTouchController *rippleTouchController; // @synthesize rippleTouchController=_rippleTouchController;
@property(readonly, nonatomic) UIView *internalContentView; // @synthesize internalContentView=_internalContentView;
@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
@property(nonatomic) long long accountMenuAppearance; // @synthesize accountMenuAppearance=_accountMenuAppearance;
@property(nonatomic) _Bool opaqueBackgroundColor; // @synthesize opaqueBackgroundColor=_opaqueBackgroundColor;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)rippleTouchController:(id)arg1 insertRippleView:(id)arg2 intoView:(id)arg3;
- (void)applyTheme;
- (void)layoutSubviews;
- (void)viewDidRotate;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

