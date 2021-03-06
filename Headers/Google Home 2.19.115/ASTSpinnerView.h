//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTThemable-Protocol.h"

@class MDCActivityIndicator, NSString, UIColor, UILabel;

@interface ASTSpinnerView : UIView <ASTThemable>
{
    UIColor *_textColor;
    UILabel *_label;
    MDCActivityIndicator *_spinner;
    UIColor *_preferredBackgroundColor;
}

@property(retain, nonatomic) UIColor *preferredBackgroundColor; // @synthesize preferredBackgroundColor=_preferredBackgroundColor;
@property(retain, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)setupLayoutConstraints;
- (void)createSubViews;
- (void)upadateBackgroundStyle;
- (void)updateLabelStyle;
- (void)applyTheme:(unsigned long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)showWithText:(id)arg1 backgroundColor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

