//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubCommandHandlerCondition-Protocol.h"

@class NSString, SPTExplicitContentAccessManagerImplementation;

@interface SPTExplicitContentPlaybackRestrictingHubCommandHandlerCondition : NSObject <SPTHubCommandHandlerCondition>
{
    SPTExplicitContentAccessManagerImplementation *_accessManager;
}

@property(readonly, nonatomic) SPTExplicitContentAccessManagerImplementation *accessManager; // @synthesize accessManager=_accessManager;
- (void).cxx_destruct;
- (id)componentModelContextURI:(id)arg1;
- (void)decideShouldPermitHandlingOfCommand:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccessManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
