//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSAttributedString, UILabel;

@interface PTVFollowUnfollowButton : UIButton
{
    _Bool _isBlocked;
    unsigned long long _followingState;
    UILabel *_customTitleLabel;
    NSAttributedString *_blockedString;
    NSAttributedString *_followString;
    NSAttributedString *_followingString;
    struct CGSize _largestPossibleStringSize;
}

@property(nonatomic) struct CGSize largestPossibleStringSize; // @synthesize largestPossibleStringSize=_largestPossibleStringSize;
@property(retain, nonatomic) NSAttributedString *followingString; // @synthesize followingString=_followingString;
@property(retain, nonatomic) NSAttributedString *followString; // @synthesize followString=_followString;
@property(retain, nonatomic) NSAttributedString *blockedString; // @synthesize blockedString=_blockedString;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) unsigned long long followingState; // @synthesize followingState=_followingState;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFollowing;
- (void)executeFollowingState;
- (struct CGSize)calculateLargestPossibleStringSizeWithFont:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
