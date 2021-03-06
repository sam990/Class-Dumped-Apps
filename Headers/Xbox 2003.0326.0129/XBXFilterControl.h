//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, UILabel, XBXAsyncImageView, XBXFilterOption;
@protocol XBXFilterControlDelegate;

@interface XBXFilterControl : UIControl
{
    XBXFilterOption *_selectedOption;
    struct CGRect _originalFrame;
    _Bool _shouldHideCaret;
    UILabel *label;
    UILabel *caretIcon;
    NSArray *options;
    XBXAsyncImageView *_optionImage;
    id <XBXFilterControlDelegate> _delegate;
    NSString *_styleName;
    NSString *_biEventNameOverride;
    unsigned long long _alignment;
    unsigned long long _contentAlignment;
}

@property(nonatomic) unsigned long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *biEventNameOverride; // @synthesize biEventNameOverride=_biEventNameOverride;
@property(retain, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
@property(nonatomic) __weak id <XBXFilterControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XBXAsyncImageView *optionImage; // @synthesize optionImage=_optionImage;
@property(retain, nonatomic) NSArray *options; // @synthesize options;
@property(nonatomic) _Bool shouldHideCaret; // @synthesize shouldHideCaret=_shouldHideCaret;
@property(retain, nonatomic) UILabel *caretIcon; // @synthesize caretIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)pressed:(id)arg1;
@property(retain, nonatomic) XBXFilterOption *selectedOption;
- (void)setSelectedOption:(id)arg1 invokeDelegate:(_Bool)arg2;
- (void)setInitialSelectedOption:(id)arg1;
- (void)setOptionImageWithUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)commonInitForFilterControl;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;

@end

