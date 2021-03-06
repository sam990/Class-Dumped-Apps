//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

#import "HMESetupChoiceCell-Protocol.h"

@class HMEAnimationView, HMEIconChoiceView, NSString, UILabel, UIStackView;
@protocol HMESetupChoice;

@interface HMESetupLargeImageCheckmarkCollectionViewCell : MDCCollectionViewCell <HMESetupChoiceCell>
{
    id <HMESetupChoice> _choice;
    HMEIconChoiceView *_iconChoiceView;
    UIStackView *_horizontalStackView;
    UILabel *_titleLabel;
    double _preferredHeight;
    HMEAnimationView *_animationView;
}

+ (double)preferredHeightForWidth:(double)arg1 choice:(id)arg2;
@property(retain, nonatomic) HMEAnimationView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(retain, nonatomic) HMEIconChoiceView *iconChoiceView; // @synthesize iconChoiceView=_iconChoiceView;
@property(retain, nonatomic) id <HMESetupChoice> choice; // @synthesize choice=_choice;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)markAsSelected:(_Bool)arg1 disabled:(_Bool)arg2 animated:(_Bool)arg3;
- (void)markAsSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createConstraints;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

