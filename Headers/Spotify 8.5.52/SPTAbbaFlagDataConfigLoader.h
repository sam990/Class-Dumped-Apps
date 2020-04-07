//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSArray, NSString, SPTDataLoader;
@protocol SPTAbbaFlagDataConfigDelegate;

@interface SPTAbbaFlagDataConfigLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTAbbaFlagDataConfigDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    NSArray *_response;
}

@property(retain, nonatomic) NSArray *response; // @synthesize response=_response;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTAbbaFlagDataConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)buildAbbaFlagDataConfigRequest;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)abbaFlagDataConfigModels:(id)arg1;
- (id)parseData:(id)arg1 error:(id *)arg2;
- (void)loadFeatureFlagsConfig:(id)arg1;
- (void)fetchAbbaDataConfig;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
