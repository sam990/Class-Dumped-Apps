//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface _TtC6fiverr13CTABannerView : UIView
{
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: backgroundImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: loadingStateImageView
    // Error parsing type: , name: aspectRatioConstraint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: cmsBannerModel
    // Error parsing type: , name: analyticsPage
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)ctaButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
@property(nonatomic) __weak NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint;
@property(nonatomic) __weak UIImageView *loadingStateImageView; // @synthesize loadingStateImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView;

@end
