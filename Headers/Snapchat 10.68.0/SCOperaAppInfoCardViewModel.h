//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SCOperaAppInfoCardViewModel : NSObject <NSCopying>
{
    NSString *_titleText;
    NSString *_logoText;
    double _backgroundCardHorizontalMargin;
    double _backgroundCardTopMargin;
    double _backgroundCardBottomMargin;
    double _backgroundCardHeight;
    double _backgroundCardVerticalPadding;
    double _backgroundCardHorizontalPadding;
    double _backgroundCardCornerRadius;
    NSString *_appIconImageKey;
    double _appIconCornerRadius;
    double _appIconSideLength;
    double _appIconRightPadding;
    UIColor *_getButtonColor;
    UIFont *_getButtonFont;
    NSString *_getButtonText;
    double _appTitleLabelTopPadding;
    UIFont *_appTitleLabelFont;
    NSString *_appTitleText;
    double _appAuthorLabelTopPadding;
    UIFont *_appAuthorLabelFont;
    NSString *_appAuthorText;
}

@property(readonly, copy, nonatomic) NSString *appAuthorText; // @synthesize appAuthorText=_appAuthorText;
@property(readonly, copy, nonatomic) UIFont *appAuthorLabelFont; // @synthesize appAuthorLabelFont=_appAuthorLabelFont;
@property(readonly, nonatomic) double appAuthorLabelTopPadding; // @synthesize appAuthorLabelTopPadding=_appAuthorLabelTopPadding;
@property(readonly, copy, nonatomic) NSString *appTitleText; // @synthesize appTitleText=_appTitleText;
@property(readonly, copy, nonatomic) UIFont *appTitleLabelFont; // @synthesize appTitleLabelFont=_appTitleLabelFont;
@property(readonly, nonatomic) double appTitleLabelTopPadding; // @synthesize appTitleLabelTopPadding=_appTitleLabelTopPadding;
@property(readonly, copy, nonatomic) NSString *getButtonText; // @synthesize getButtonText=_getButtonText;
@property(readonly, copy, nonatomic) UIFont *getButtonFont; // @synthesize getButtonFont=_getButtonFont;
@property(readonly, copy, nonatomic) UIColor *getButtonColor; // @synthesize getButtonColor=_getButtonColor;
@property(readonly, nonatomic) double appIconRightPadding; // @synthesize appIconRightPadding=_appIconRightPadding;
@property(readonly, nonatomic) double appIconSideLength; // @synthesize appIconSideLength=_appIconSideLength;
@property(readonly, nonatomic) double appIconCornerRadius; // @synthesize appIconCornerRadius=_appIconCornerRadius;
@property(readonly, copy, nonatomic) NSString *appIconImageKey; // @synthesize appIconImageKey=_appIconImageKey;
@property(readonly, nonatomic) double backgroundCardCornerRadius; // @synthesize backgroundCardCornerRadius=_backgroundCardCornerRadius;
@property(readonly, nonatomic) double backgroundCardHorizontalPadding; // @synthesize backgroundCardHorizontalPadding=_backgroundCardHorizontalPadding;
@property(readonly, nonatomic) double backgroundCardVerticalPadding; // @synthesize backgroundCardVerticalPadding=_backgroundCardVerticalPadding;
@property(readonly, nonatomic) double backgroundCardHeight; // @synthesize backgroundCardHeight=_backgroundCardHeight;
@property(readonly, nonatomic) double backgroundCardBottomMargin; // @synthesize backgroundCardBottomMargin=_backgroundCardBottomMargin;
@property(readonly, nonatomic) double backgroundCardTopMargin; // @synthesize backgroundCardTopMargin=_backgroundCardTopMargin;
@property(readonly, nonatomic) double backgroundCardHorizontalMargin; // @synthesize backgroundCardHorizontalMargin=_backgroundCardHorizontalMargin;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleText:(id)arg1 logoText:(id)arg2 backgroundCardHorizontalMargin:(double)arg3 backgroundCardTopMargin:(double)arg4 backgroundCardBottomMargin:(double)arg5 backgroundCardHeight:(double)arg6 backgroundCardVerticalPadding:(double)arg7 backgroundCardHorizontalPadding:(double)arg8 backgroundCardCornerRadius:(double)arg9 appIconImageKey:(id)arg10 appIconCornerRadius:(double)arg11 appIconSideLength:(double)arg12 appIconRightPadding:(double)arg13 getButtonColor:(id)arg14 getButtonFont:(id)arg15 getButtonText:(id)arg16 appTitleLabelTopPadding:(double)arg17 appTitleLabelFont:(id)arg18 appTitleText:(id)arg19 appAuthorLabelTopPadding:(double)arg20 appAuthorLabelFont:(id)arg21 appAuthorText:(id)arg22;

@end
