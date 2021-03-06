//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMDCTypographyDisplayScheming-Protocol.h"
#import "MDCTypographyScheming-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, UIFont, UITraitCollection;

@protocol GMDCTypographyScheming <NSObject, MDCTypographyScheming, GMDCTypographyDisplayScheming>
@property(readonly, copy, nonatomic) UIFont *subhead2;
@property(readonly, copy, nonatomic) UIFont *subhead1;
@property(readonly, copy, nonatomic) UIFont *overline;
@property(readonly, copy, nonatomic) UIFont *button;
@property(readonly, copy, nonatomic) UIFont *caption;
@property(readonly, copy, nonatomic) UIFont *body2;
@property(readonly, copy, nonatomic) UIFont *body1;
@property(readonly, copy, nonatomic) UIFont *subtitle2;
@property(readonly, copy, nonatomic) UIFont *subtitle1;
@property(readonly, copy, nonatomic) UIFont *headline6;
@property(readonly, copy, nonatomic) UIFont *headline5;
@property(readonly, copy, nonatomic) UIFont *headline4;
@property(readonly, copy, nonatomic) UIFont *headline3;
@property(readonly, copy, nonatomic) UIFont *headline2;
@property(readonly, copy, nonatomic) UIFont *headline1;

@optional
- (UIFont *)preferredFontForTextStyle:(NSString *)arg1 compatibleWithTraitCollection:(UITraitCollection *)arg2;
@end

