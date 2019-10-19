//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NFUIGradientView, NFUITitleTreatmentView, UIImageView;
@protocol NFUIBillboardFullBleedItemCellRenderDelegate;

@interface NFUIBillboardPreviewFullBleedItemCell : UICollectionViewCell
{
    id <NFUIBillboardFullBleedItemCellRenderDelegate> _delegate;
    UIImageView *_backgroundImage;
    NFUITitleTreatmentView *_titleTreatment;
    NFUIGradientView *_bottomGradientView;
    UIImageView *_licensedBoxshot;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *licensedBoxshot; // @synthesize licensedBoxshot=_licensedBoxshot;
@property(nonatomic) __weak NFUIGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(nonatomic) __weak NFUITitleTreatmentView *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(nonatomic) __weak UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) __weak id <NFUIBillboardFullBleedItemCellRenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupFallbackBackgroundImage:(id)arg1;
- (void)loadDisplayArt:(id)arg1;
- (void)setupGradient;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
