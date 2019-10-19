//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIAnimatedButton.h"

@class LOTColorValueCallback, NSString, UIColor;

@interface NFUIListButton : NFUIAnimatedButton
{
    _Bool _isRemindMe;
    _Bool _isTitleSuppressed;
    _Bool _isUsingLottie;
    unsigned long long _currentStatus;
    UIColor *_fillColor;
    NSString *_animationName;
    LOTColorValueCallback *_fillColorCallback;
}

@property(retain, nonatomic) LOTColorValueCallback *fillColorCallback; // @synthesize fillColorCallback=_fillColorCallback;
@property(retain, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
@property _Bool isUsingLottie; // @synthesize isUsingLottie=_isUsingLottie;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool isTitleSuppressed; // @synthesize isTitleSuppressed=_isTitleSuppressed;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) _Bool isRemindMe; // @synthesize isRemindMe=_isRemindMe;
- (void).cxx_destruct;
- (void)configureForMyList;
- (void)configureForRemindMe;
- (void)updateAnimationWithColor:(id)arg1;
- (void)configureAccessibility;
- (void)updateWithListStatus:(unsigned long long)arg1 isAnimated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateWithListStatus:(unsigned long long)arg1 isAnimated:(_Bool)arg2;
- (void)commonInit;
- (void)willMoveToSuperview:(id)arg1;
- (void)configureWithAnimationNamed:(id)arg1;
- (void)awakeFromNib;

@end
