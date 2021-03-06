//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray, NSDictionary, NSString, TFSTwitterOnboardingFlowSpec;

@interface TFSTwitterAPIOnboardingGetTaskCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    long long _apiVersion;
    NSString *_knownDeviceToken;
    NSString *_simCountryCode;
    NSString *_terminationReason;
    TFSTwitterOnboardingFlowSpec *_flowSpec;
    NSString *_flowToken;
    NSArray *_subtaskStateDictionaries;
    NSDictionary *_subtaskVersions;
    NSDictionary *_headerFields;
}

- (void).cxx_destruct;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 flowToken:(id)arg3 subtaskStateDictionaries:(id)arg4 terminationReason:(id)arg5 headerFields:(id)arg6 source:(unsigned long long)arg7 responseModelBuilder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)initWithService:(id)arg1 accountID:(id)arg2 flowSpec:(id)arg3 apiVersion:(long long)arg4 knownDeviceToken:(id)arg5 simCountryCode:(id)arg6 subtaskVersions:(id)arg7 headerFields:(id)arg8 source:(unsigned long long)arg9 responseModelBuilder:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;

@end

