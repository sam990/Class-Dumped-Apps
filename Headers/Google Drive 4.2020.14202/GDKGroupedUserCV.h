//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOTextContentView.h>

#import "GDKGroupedUserCVOUpdateDelegate-Protocol.h"

@class UIImageView;

@interface GDKGroupedUserCV : GOOTextContentView <GDKGroupedUserCVOUpdateDelegate>
{
    UIImageView *_arrowImageView;
}

+ (long long)numberOfDetailTextLines;
+ (id)detailTextFont;
+ (long long)detailTextLineBreakMode;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)imageFromObject:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)groupedUserCVOWasUpdated:(id)arg1;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

