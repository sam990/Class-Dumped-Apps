//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAuthController, SPTCoreSchedulerThread;

@interface SPTConnectivity : NSObject
{
    struct Core *_core;
    SPTCoreSchedulerThread *_coreScheduler;
    SPTAuthController *_authController;
}

@property(readonly, nonatomic) SPTAuthController *authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) SPTCoreSchedulerThread *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
- (void).cxx_destruct;
- (id)provideAuthController;
- (id)initWithCore:(struct Core *)arg1 scheduler:(id)arg2;

@end
