//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTLCClientHealthUpdate-Protocol.h>
#import <Module_Framework/YTLCStreamUpdate-Protocol.h>

@class GIMMe, NSString, YTLCClientStreamHealthController, YTLCIngestionStreamHealthController, YTLCVideoCoreSession;
@protocol YTLCStreamUpdate;

@interface YTLCStreamHealthController : NSObject <YTLCClientHealthUpdate, YTLCStreamUpdate>
{
    GIMMe *_gimme;
    id <YTLCStreamUpdate> _delegate;
    YTLCIngestionStreamHealthController *_ingestionStreamHealthController;
    YTLCClientStreamHealthController *_clientStreamHealthController;
    long long _ingestionHealthStatus;
    long long _clientHealthStatus;
}

@property(nonatomic) long long clientHealthStatus; // @synthesize clientHealthStatus=_clientHealthStatus;
@property(nonatomic) long long ingestionHealthStatus; // @synthesize ingestionHealthStatus=_ingestionHealthStatus;
@property(retain, nonatomic) YTLCClientStreamHealthController *clientStreamHealthController; // @synthesize clientStreamHealthController=_clientStreamHealthController;
@property(retain, nonatomic) YTLCIngestionStreamHealthController *ingestionStreamHealthController; // @synthesize ingestionStreamHealthController=_ingestionStreamHealthController;
@property(nonatomic) __weak id <YTLCStreamUpdate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)healthStatusDidUpdate;
- (void)alertWasReceived:(id)arg1;
- (void)streamTotalPurchasedAmountDidUpdate:(id)arg1;
- (void)streamLikesDidUpdate:(id)arg1;
- (void)streamConcurrentViewersDidUpdate:(id)arg1;
- (void)streamContentIDStatusDidUpdate:(id)arg1;
- (void)streamStatusDidUpdate:(long long)arg1;
- (void)streamHealthStatusDidUpdate:(long long)arg1;
- (void)clientHealthStatusDidUpdate:(long long)arg1;
- (void)stop;
- (void)start;
@property(copy, nonatomic) NSString *videoIDString;
@property(nonatomic) __weak YTLCVideoCoreSession *videocoreSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
