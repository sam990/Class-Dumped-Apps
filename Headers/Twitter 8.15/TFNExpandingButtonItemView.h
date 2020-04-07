//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNExpandingButtonItem, UIColor, UIImageView;

@interface TFNExpandingButtonItemView : UIView
{
    _Bool _highlighted;
    TFNExpandingButtonItem *_item;
    UIImageView *_iconView;
    UIColor *_color;
    UIColor *_iconColor;
    UIColor *_outlineColor;
    double _outlineWidth;
    double _iconHeight;
    struct UIEdgeInsets _tapAreaInsets;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct UIEdgeInsets tapAreaInsets; // @synthesize tapAreaInsets=_tapAreaInsets;
@property(nonatomic) double iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TFNExpandingButtonItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_tfn_updateIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
