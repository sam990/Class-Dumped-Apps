//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWESearchTrendFloatingView : UIView
{
    UILabel *_updateTimeLabel;
    UIButton *_ruleButton;
    CDUnknownBlockType _ruleButtonClickedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ruleButtonClickedBlock; // @synthesize ruleButtonClickedBlock=_ruleButtonClickedBlock;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
- (void).cxx_destruct;
- (void)ruleButtonTapped;
- (void)configUpdateTimeLabel:(id)arg1;
- (void)configUI;
- (id)init;

@end
