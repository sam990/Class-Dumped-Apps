//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGGenericMegaphoneViewV2Delegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMegaphonePresenterProtocol-Protocol.h>

@class IGGenericMegaphoneViewV2, IGUserSession, NSString, UIView;
@protocol IGGenericMegaphoneLogger, IGMegaphonePresenterDelegate;

@interface IGPromoteMergedMediaMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    id <IGMegaphonePresenterDelegate> _delegate;
    id <IGGenericMegaphoneLogger> _logger;
    IGGenericMegaphoneViewV2 *_megaphoneView;
    IGUserSession *_userSession;
}

+ (_Bool)canPresentMegaphone:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGGenericMegaphoneViewV2 *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(readonly, nonatomic) id <IGGenericMegaphoneLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 delegate:(id)arg2 logger:(id)arg3 userSession:(id)arg4 module:(id)arg5;
- (id)initWithMegaphone:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

