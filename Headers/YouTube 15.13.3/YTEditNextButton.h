//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTQTMButton.h>

@interface YTEditNextButton : YTQTMButton
{
    _Bool _elevated;
}

+ (id)buttonWithLabelText:(id)arg1;
@property(nonatomic, getter=isElevated) _Bool elevated; // @synthesize elevated=_elevated;
- (void)layoutSubviews;
- (double)cornerRadius;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 labelText:(id)arg2;

@end
