//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationUITestManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory;

@interface SPTAssistedCurationUITestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTAssistedCurationUITestManager>
{
    _Bool _assistedCurationSearchAutocompleteEnabled;
    _Bool _shouldUseSnackBar;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _autocompleteSignal;
    id <SPTFeatureFlagSignal> _freeTierSignal;
}

@property(nonatomic) _Bool shouldUseSnackBar; // @synthesize shouldUseSnackBar=_shouldUseSnackBar;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(nonatomic, getter=isAssistedCurationSearchAutocompleteEnabled) _Bool assistedCurationSearchAutocompleteEnabled; // @synthesize assistedCurationSearchAutocompleteEnabled=_assistedCurationSearchAutocompleteEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> autocompleteSignal; // @synthesize autocompleteSignal=_autocompleteSignal;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (void)setupAutocompleteSignal;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2 freeTierSignal:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
