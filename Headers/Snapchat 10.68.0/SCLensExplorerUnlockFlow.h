//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensUnlockerProtocol-Protocol.h"

@class NSString, SCLensExplorerRouter;
@protocol SCLensExplorerPerformanceLogging, SCLensExplorerUnlockActionProviderProtocol, SCLensExplorerUnlockFlowDelegate, SCLensUnlockerProtocol;

@interface SCLensExplorerUnlockFlow : NSObject <SCLensExplorerLensUnlockerProtocol>
{
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <SCLensExplorerPerformanceLogging> _performanceLogger;
    id <SCLensExplorerUnlockActionProviderProtocol> _unlockActionProvider;
    SCLensExplorerRouter *_lensExplorerRouter;
    id <SCLensExplorerUnlockFlowDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensExplorerUnlockFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchLensWithDeeplinkAction:(id)arg1;
- (void)unlockLensWithDeeplinkAction:(id)arg1;
- (void)_handleLensExplorerUnlockerLens:(id)arg1 withAction:(id)arg2;
- (id)initWithLensUnlocker:(id)arg1 lensUnlockActionProvider:(id)arg2 lensExplorerRouter:(id)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
