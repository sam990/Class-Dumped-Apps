//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVTableHeaderView.h>

@class NSString, PTVExtendedButton;

@interface PTVTitleAndActionTableHeaderView : PTVTableHeaderView
{
    PTVExtendedButton *_rightButton;
    CDUnknownBlockType _targetBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType targetBlock; // @synthesize targetBlock=_targetBlock;
@property(readonly, nonatomic) PTVExtendedButton *rightButton; // @synthesize rightButton=_rightButton;
- (void)buttonPressed;
@property(retain, nonatomic) NSString *buttonTitle;
- (id)initWithWidth:(double)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (void)viewInit;

@end

