//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendFlowMetricsEmitting-Protocol.h"

@class NSString;
@protocol SCGraphene, SCUserTrackedLogger;

@interface SCSendFlowMetricsEmitter : NSObject <SCSendFlowMetricsEmitting>
{
    id <SCUserTrackedLogger> _logger;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)_logMessageSendConnectivityWithMediaType:(id)arg1 messageType:(id)arg2 sendMessageStatus:(id)arg3 recipientList:(id)arg4;
- (void)_logMessageSendStepLatencyWithMediaType:(id)arg1 messageType:(id)arg2 recipientList:(id)arg3 stepLatenciesMsString:(id)arg4;
- (void)_logMessageSendLatencyWithMediaType:(id)arg1 messageType:(id)arg2 sendMessageStatus:(id)arg3 recipientList:(id)arg4 totalLatencyMs:(long long)arg5;
- (void)_logMessageSendErrorWithMediaType:(id)arg1 messageType:(id)arg2 failedStep:(id)arg3 recipientList:(id)arg4;
- (void)_logMessageSendResultWithMediaType:(id)arg1 messageType:(id)arg2 sendMessageStatus:(id)arg3 recipientList:(id)arg4;
- (void)logMediaOrchestration:(id)arg1;
- (void)logSendMessageStoryPost:(id)arg1;
- (void)logSendMessage:(id)arg1;
- (id)initWithLogger:(id)arg1 graphene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
