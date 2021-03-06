//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GDKFeedbackPresenting, GDKViewControllerPresenting, GDKViewControllerToken, GIPClock;

@interface GDKCommonApprovalUI : NSObject
{
    id <GIPClock> _clock;
    id <GDKViewControllerPresenting> _viewPresenter;
    id <GDKFeedbackPresenting> _feedbackPresenter;
    id <GDKViewControllerToken> _datePickerToken;
}

+ (id)actionWithTitle:(id)arg1 option:(int)arg2 callback:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) id <GDKViewControllerToken> datePickerToken; // @synthesize datePickerToken=_datePickerToken;
@property(readonly, nonatomic) id <GDKFeedbackPresenting> feedbackPresenter; // @synthesize feedbackPresenter=_feedbackPresenter;
@property(readonly, nonatomic) id <GDKViewControllerPresenting> viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(readonly, nonatomic) id <GIPClock> clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (void)presentFeedback;
- (void)presentOverflowActionSheetWithOptions:(int)arg1 fromViewController:(id)arg2 sourceView:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dismissDueDatePicker;
- (void)presentDueDatePickerWithDate:(id)arg1 delegate:(id)arg2;
- (id)initWithClock:(id)arg1 viewPresenter:(id)arg2 feedbackPresenter:(id)arg3;

@end

