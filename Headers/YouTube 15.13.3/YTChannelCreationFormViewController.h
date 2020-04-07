//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UIAlertViewDelegate-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSString, YTChannelCreationService, YTCommandResponderEvent, YTConfirmDialogController, YTICommand;
@protocol YTInnerTubeUIGlobals, YTResponder;

@interface YTChannelCreationFormViewController : UIViewController <UIAlertViewDelegate, YTTopController>
{
    id <YTInnerTubeUIGlobals> _globals;
    YTChannelCreationService *_service;
    YTICommand *_navigationEndpoint;
    UIViewController *_responseViewController;
    YTConfirmDialogController *_confirmDialogController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)handleError:(id)arg1;
- (void)setResponseViewController:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loadView;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)shouldAutorotate;
- (id)initWithGlobals:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end
