//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, XBXSLSTitleVIPRequest, XBXSLSTitleVIPResponse;

@protocol XBXSLSTitleVIPRequestCallback <NSObject>
- (void)onTitleVIPRequestFailed:(NSError *)arg1 forRequest:(XBXSLSTitleVIPRequest *)arg2 withRequestContext:(id)arg3;
- (void)onTitleVIPRequestSucceeded:(XBXSLSTitleVIPResponse *)arg1 forRequest:(XBXSLSTitleVIPRequest *)arg2 withRequestContext:(id)arg3;
@end

