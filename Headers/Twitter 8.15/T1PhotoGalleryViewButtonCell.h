//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PhotoGalleryViewCell.h>

@class UIImageView, UILabel;

@interface T1PhotoGalleryViewButtonCell : T1PhotoGalleryViewCell
{
    _Bool _showsTitle;
    unsigned long long _type;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)_updateAccessibilityLabel;
- (void)_updateImageView;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
