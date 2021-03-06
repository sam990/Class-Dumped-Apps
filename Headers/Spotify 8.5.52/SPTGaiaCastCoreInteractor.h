//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTGaiaConnectCosmosResolver;
@protocol SPTGaiaCastCoreInteractorDelegate;

@interface SPTGaiaCastCoreInteractor : NSObject
{
    id <SPTGaiaCastCoreInteractorDelegate> _delegate;
    SPTGaiaConnectCosmosResolver *_resolver;
}

@property(readonly, nonatomic) SPTGaiaConnectCosmosResolver *resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTGaiaCastCoreInteractorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)urlWithDeviceId:(id)arg1 deviceId:(id)arg2;
- (void)removeDeviceWithId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)injectDeviceWithId:(id)arg1 info:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)loginDeviceWithId:(id)arg1 info:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)startObservingLoginStatus;
- (id)initWithResolver:(id)arg1;

@end

