//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAuthorizeViewDelegate-Protocol.h"

@class AWEAuthorizeAlertView, AWEAuthorizeStateManager, AWEVCDAccountAlertModel, NSString;

@interface AWEAuthorizeAlertViewController : UIViewController <AWEAuthorizeViewDelegate>
{
    _Bool _isLive;
    CDUnknownBlockType _didClickBlock;
    NSString *_enterFrom;
    AWEAuthorizeAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _liveCompletionBlock;
    CDUnknownBlockType _didShowBlock;
    AWEVCDAccountAlertModel *_model;
    AWEAuthorizeStateManager *_authorizeStateManager;
}

@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) AWEAuthorizeStateManager *authorizeStateManager; // @synthesize authorizeStateManager=_authorizeStateManager;
@property(retain, nonatomic) AWEVCDAccountAlertModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType didShowBlock; // @synthesize didShowBlock=_didShowBlock;
@property(copy, nonatomic) CDUnknownBlockType liveCompletionBlock; // @synthesize liveCompletionBlock=_liveCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AWEAuthorizeAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
- (void).cxx_destruct;
- (_Bool)needCloseInterConnect;
- (id)agreeAuthorize;
- (id)closeInterConnect;
- (id)bindPhoneIfNeeded;
- (void)processSuccess;
- (void)nextTimeAction;
- (void)agreeAction;
- (void)viewDidLoad;
- (id)initWithAccountModel:(id)arg1 didShowBlock:(CDUnknownBlockType)arg2 liveComplete:(CDUnknownBlockType)arg3;
- (id)initWithAccountModel:(id)arg1 didShowBlock:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

