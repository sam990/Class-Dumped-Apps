//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRYouTubeReportingQuery.h"

@class NSString;

@interface GTLRYouTubeReportingQuery_JobsReportsList : GTLRYouTubeReportingQuery
{
}

+ (id)queryWithJobId:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *createdAfter; // @dynamic createdAfter;
@property(copy, nonatomic) NSString *jobId; // @dynamic jobId;
@property(copy, nonatomic) NSString *onBehalfOfContentOwner; // @dynamic onBehalfOfContentOwner;
@property(nonatomic) long long pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *startTimeAtOrAfter; // @dynamic startTimeAtOrAfter;
@property(copy, nonatomic) NSString *startTimeBefore; // @dynamic startTimeBefore;

@end
