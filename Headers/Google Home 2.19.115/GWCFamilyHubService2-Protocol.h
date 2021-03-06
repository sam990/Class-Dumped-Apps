//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, GWCCreateBlockingScheduleRequest, GWCCreateContentFilteringPoliciesRequest, GWCDeleteBlockingScheduleRequest, GWCDeleteContentFilteringPolicyRequest, GWCUpdateBlockingScheduleRequest, GWCUpdateContentFilteringPoliciesRequest, GWCUpdateStationBlockingRequest;
@protocol GRPCProtoResponseHandler;

@protocol GWCFamilyHubService2 <NSObject>
- (GRPCUnaryProtoCall *)deleteContentFilteringPolicyWithMessage:(GWCDeleteContentFilteringPolicyRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateContentFilteringPoliciesWithMessage:(GWCUpdateContentFilteringPoliciesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createContentFilteringPoliciesWithMessage:(GWCCreateContentFilteringPoliciesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteBlockingScheduleWithMessage:(GWCDeleteBlockingScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateBlockingScheduleWithMessage:(GWCUpdateBlockingScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createBlockingScheduleWithMessage:(GWCCreateBlockingScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateStationBlockingWithMessage:(GWCUpdateStationBlockingRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

