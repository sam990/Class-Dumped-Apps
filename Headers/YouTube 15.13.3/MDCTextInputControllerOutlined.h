//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCTextInputControllerBase.h>

@class NSLayoutConstraint;

@interface MDCTextInputControllerOutlined : MDCTextInputControllerBase
{
    NSLayoutConstraint *_placeholderCenterY;
    NSLayoutConstraint *_placeholderLeading;
}

+ (void)setRoundedCornersDefault:(unsigned long long)arg1;
+ (unsigned long long)roundedCornersDefault;
@property(retain, nonatomic) NSLayoutConstraint *placeholderLeading; // @synthesize placeholderLeading=_placeholderLeading;
@property(retain, nonatomic) NSLayoutConstraint *placeholderCenterY; // @synthesize placeholderCenterY=_placeholderCenterY;
- (void).cxx_destruct;
- (double)borderHeight;
- (void)updatePlaceholder;
- (id)roundedPathFromRect:(struct CGRect)arg1 withTextSpace:(double)arg2 leadingOffset:(double)arg3;
- (struct CGRect)borderRect;
- (void)updateBorder;
- (void)updateUnderline;
- (void)updateLayout;
- (struct UIEdgeInsets)textInsets:(struct UIEdgeInsets)arg1 withSizeThatFitsWidthHint:(double)arg2;
- (double)trailingViewTrailingPaddingConstant;
- (struct CGRect)trailingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (double)leadingViewTrailingPaddingConstant;
- (struct CGRect)leadingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (struct UIOffset)floatingPlaceholderOffset;
- (void)setFloatingEnabled:(_Bool)arg1;
- (_Bool)isFloatingEnabled;
- (id)initWithTextInput:(id)arg1;

@end

