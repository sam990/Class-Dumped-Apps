//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTThemableWebView.h"

@class ASTSpinnerView;

@interface ASTWebView : ASTThemableWebView
{
    ASTSpinnerView *_spinner;
}

@property(retain, nonatomic) ASTSpinnerView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)loadWebView:(id)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)layoutSubviews;
- (id)init;

@end

