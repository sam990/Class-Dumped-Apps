//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubLogger-Protocol.h"

@class NSString, SPTHubImageLoadingLoggerImplementation, SPTHubImpressionLoggerImplementation, SPTHubInteractionLoggerImplementation, SPTHubLoadingLoggerImplementation;
@protocol SPTUBIHubsUtilities, SPTUBILogger;

@interface SPTHubLoggerImplementation : NSObject <SPTHubLogger>
{
    SPTHubImageLoadingLoggerImplementation *_imageLoadingLogger;
    SPTHubImpressionLoggerImplementation *_impressionLogger;
    SPTHubInteractionLoggerImplementation *_interactionLogger;
    SPTHubLoadingLoggerImplementation *_loadingLogger;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) SPTHubLoadingLoggerImplementation *loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) SPTHubInteractionLoggerImplementation *interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) SPTHubImpressionLoggerImplementation *impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(readonly, nonatomic) SPTHubImageLoadingLoggerImplementation *imageLoadingLogger; // @synthesize imageLoadingLogger=_imageLoadingLogger;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didFinishLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didBeginLoadingImageWithURI:(id)arg2;
- (void)logLoadingCancelledWithDataSource:(unsigned long long)arg1;
- (void)logLoadingFailedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingCompletedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingStartedWithReason:(unsigned long long)arg1;
- (id)logInteraction:(id)arg1;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 pageIdentifier:(id)arg3 pageURI:(id)arg4 componentModelURIResolver:(id)arg5 viewLogger:(id)arg6 userBehaviourInstrumentation:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
