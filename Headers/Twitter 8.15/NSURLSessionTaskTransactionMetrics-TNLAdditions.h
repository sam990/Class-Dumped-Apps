//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskTransactionMetrics.h>

@class NSDate;

@interface NSURLSessionTaskTransactionMetrics (TNLAdditions)
- (id)tnl_secureConnectionDurationExt;
- (id)tnl_totalDuration;
- (id)tnl_responseReceiveDuration;
- (id)tnl_serverTimeDuration;
- (id)tnl_requestSendDuration;
- (id)tnl_secureConnectionDuration;
- (id)tnl_transportConnectionDuration;
- (id)tnl_connectDuration;
- (id)tnl_domainLookupDuration;
@property(readonly, nonatomic) NSDate *tnl_transportConnectionEndDate;
@property(readonly, nonatomic) NSDate *tnl_transportConnectionStartDate;
- (double)tnl_knownDuration;
- (id)tnl_latestDate;
- (id)tnl_earliestDate;
- (id)tnl_timingDescription;
- (id)tnl_resourceFetchTypeDebugString;
- (id)_tnl_metadata:(_Bool)arg1;
- (id)tnl_medadata;
- (id)_tnl_dictionaryValue:(_Bool)arg1;
- (id)tnl_dictionaryDescription;
- (id)tnl_dictionaryValue;
@end
