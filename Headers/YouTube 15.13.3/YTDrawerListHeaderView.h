//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "YTPageStyling-Protocol.h"

@class CALayer, NSString, UIImageView, YTFormattedStringLabel, YTIIcon, YTQTMButton;

@interface YTDrawerListHeaderView : UICollectionReusableView <YTPageStyling>
{
    YTFormattedStringLabel *_titleLabel;
    CALayer *_bottomBorderLayer;
    UIImageView *_toggleImageView;
    UIImageView *_dropDownView;
    _Bool _stickyHeader;
    _Bool _hasDropDown;
    YTIIcon *_collapsedHeaderIcon;
    YTQTMButton *_toggleExpandButton;
    YTQTMButton *_dropDownButton;
}

+ (struct CGSize)preferredSizeWithSize:(struct CGSize)arg1;
@property(nonatomic) _Bool hasDropDown; // @synthesize hasDropDown=_hasDropDown;
@property(nonatomic, getter=isStickyHeader) _Bool stickyHeader; // @synthesize stickyHeader=_stickyHeader;
@property(readonly, nonatomic) YTQTMButton *dropDownButton; // @synthesize dropDownButton=_dropDownButton;
@property(readonly, nonatomic) YTQTMButton *toggleExpandButton; // @synthesize toggleExpandButton=_toggleExpandButton;
@property(retain, nonatomic) YTIIcon *collapsedHeaderIcon; // @synthesize collapsedHeaderIcon=_collapsedHeaderIcon;
- (void).cxx_destruct;
- (void)verticallyCenterView:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
