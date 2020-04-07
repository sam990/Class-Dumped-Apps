//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTSocialListeningTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTSocialListeningTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTSocialListeningTestManager>
{
    _Bool _socialListeningEnabled;
    _Bool _shareLinkEnabled;
    _Bool _socialDeviceEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _socialListeningEnabledSignal;
    id <SPTFeatureFlagSignal> _shareLinkEnabledSignal;
    id <SPTFeatureFlagSignal> _socialDeviceEnabledSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialDeviceEnabledSignal; // @synthesize socialDeviceEnabledSignal=_socialDeviceEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shareLinkEnabledSignal; // @synthesize shareLinkEnabledSignal=_shareLinkEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialListeningEnabledSignal; // @synthesize socialListeningEnabledSignal=_socialListeningEnabledSignal;
@property(nonatomic, getter=isSocialDeviceEnabled) _Bool socialDeviceEnabled; // @synthesize socialDeviceEnabled=_socialDeviceEnabled;
@property(nonatomic, getter=isShareLinkEnabled) _Bool shareLinkEnabled; // @synthesize shareLinkEnabled=_shareLinkEnabled;
@property(nonatomic, getter=isSocialListeningEnabled) _Bool socialListeningEnabled; // @synthesize socialListeningEnabled=_socialListeningEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupShareLinkEnabledSignal;
- (void)setupSocialDeviceEnabledSignal;
- (void)setupSocialListeningEnabledSignal;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
