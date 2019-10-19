//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, NSNumber, UIImage;
@protocol FVRStarRatingControlDelegate;

@interface FVRStarRatingControl : UIControl
{
    NSMutableArray *_starsViews;
    long long _currentPressedIndex;
    struct CGPoint _currentPointTouched;
    _Bool _didRate;
    _Bool _didTouchBegan;
    _Bool _isInteractionDisabled;
    float _spaceBetweenStars;
    int _numberOfStars;
    NSNumber *_rating;
    UIImage *_fullImage;
    UIImage *_halfImage;
    UIImage *_emptyImage;
    id <FVRStarRatingControlDelegate> _delegate;
}

@property(nonatomic) __weak id <FVRStarRatingControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInteractionDisabled; // @synthesize isInteractionDisabled=_isInteractionDisabled;
@property(nonatomic) int numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(nonatomic) float spaceBetweenStars; // @synthesize spaceBetweenStars=_spaceBetweenStars;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(retain, nonatomic) UIImage *halfImage; // @synthesize halfImage=_halfImage;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)controlTapped:(id)arg1 withEvent:(id)arg2;
- (void)delayTouchWithEvent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)highlightFromTap:(struct CGPoint)arg1;
- (void)highlightFromDrag:(struct CGPoint)arg1;
- (int)indexFromLocation:(struct CGPoint)arg1;
- (void)resetStarView:(id)arg1;
- (void)pulseStarView:(id)arg1;
- (void)pulseStarViews:(id)arg1;
- (void)highlightStarView:(id)arg1;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
