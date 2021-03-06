//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class UIStackView;

@interface GDKStackCV : GOOBaseContentView
{
    _Bool _isFooter;
    UIStackView *_stackView;
}

+ (double)safeAreaBottomInset;
+ (id)stackView;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) _Bool isFooter; // @synthesize isFooter=_isFooter;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)makeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

