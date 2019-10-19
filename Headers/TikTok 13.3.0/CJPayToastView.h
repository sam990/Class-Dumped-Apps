//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface CJPayToastView : UIView
{
    UILabel *_label;
    NSString *_title;
    double _time;
}

+ (void)toastWithView:(id)arg1 title:(id)arg2 timestamp:(double)arg3;
+ (void)toastWithView:(id)arg1 title:(id)arg2;
+ (void)toast:(id)arg1;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)hideToast;
- (void)show;

@end
