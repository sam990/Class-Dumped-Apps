//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

@class T1ReportProblem, T1ReportProblemForm, TFNTwitterAccount;

@interface T1ReportProblemViewController : TFNFormViewController
{
    T1ReportProblemForm *_reportProblemForm;
    T1ReportProblem *_reportProblemApi;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)formFieldShouldShowRequiredHint:(id)arg1;
- (id)submitButton;
- (void)submitForm;
- (void)_handleLogsGathered;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBasicForm:(id)arg1;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end
