//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SCImagePickerListView : UIView
{
    UIView *_imageViewsContainer;
    NSMutableArray *_imageArray;
    NSMutableArray *_imageViews;
    struct CGSize _previousBoundsSize;
    long long _defatulImageCount;
    long long _loadedImageCount;
    long long _selectedIndex;
    _Bool _loadingComplete;
}

- (void).cxx_destruct;
- (double)_getImageCenterOffset:(long long)arg1;
- (long long)firstAvailableImageIndex;
- (double)estimateContentHeight;
- (long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndexFromImage:(id)arg1;
- (void)setSelectedIndexFromLocation:(struct CGPoint)arg1;
- (struct CGPoint)imageViewCenterForLocation:(struct CGPoint)arg1;
- (struct CGPoint)locationForImage:(id)arg1;
- (struct CGPoint)locationForImageIndex:(long long)arg1;
- (id)imageForIndex:(long long)arg1;
- (id)imageForLocation:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)loadingComplete;
- (void)updateImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setupWaitingSpinnersIfNeeded;
- (void)_addEmptyImagesAndImageViews;
- (id)initWithImageCount:(unsigned long long)arg1;

@end
