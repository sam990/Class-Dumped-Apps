//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString, YTIClientEvent;

@protocol MDXEventLogger <NSObject>
- (void)logGELClientEvent:(YTIClientEvent *)arg1;
- (void)logBatchLatencyEvents:(NSArray *)arg1;
- (void)logCSIEventType:(long long)arg1 message:(NSString *)arg2 channelType:(long long)arg3;
@end
