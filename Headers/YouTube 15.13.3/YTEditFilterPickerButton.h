//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage, UIImageView, UIView, YTFormattedStringLabel, YTIFormattedString;

@interface YTEditFilterPickerButton : UIButton
{
    UIView *_titleBackgroundView;
    UIImageView *_backgroundImageView;
    YTIFormattedString *_name;
    YTFormattedStringLabel *_nameLabel;
    _Bool _active;
    UIImage *_thumbnailImage;
    NSString *_effectID;
}

+ (id)titleBackgroundColorHighlighted:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithName:(id)arg1 effectID:(id)arg2;

@end

