//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIToolbar, UIToolbarAppearance;

@interface PSPDFToolbarBackgroundView : UIView
{
    UIToolbar *_toolbar;
}

@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTranslucent:(_Bool)arg1;
- (_Bool)isTranslucent;
- (void)setBarStyle:(long long)arg1;
- (long long)barStyle;
@property(retain, nonatomic) UIColor *barTintColor;
@property(retain, nonatomic) UIToolbarAppearance *compactAppearance;
@property(retain, nonatomic) UIToolbarAppearance *standardAppearance;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

