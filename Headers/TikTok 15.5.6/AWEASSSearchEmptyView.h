//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWEASSSearchEmptyView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showInfoLabels:(_Bool)arg1 title:(id)arg2 content:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

