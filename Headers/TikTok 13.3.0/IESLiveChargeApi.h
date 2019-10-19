//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@protocol IESLiveEnvironment, IESLiveMonitor;

@interface IESLiveChargeApi : HTSLiveApi
{
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveMonitor> _monitor;
}

@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
- (void).cxx_destruct;
- (void)m_fetchOrderIdWithError:(id)arg1 duration:(id)arg2 withParameters:(id)arg3;
- (void)checkFinalResultWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cj_fetchOrderInfoWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendTransactionWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOrderInfoWithProductID:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkTransactionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendTransactionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOrderIDWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveFirstChargeWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLiveChargeDataWithEntrance:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
