//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;
@protocol BMDataLoader, BMDataLoaderResponse;

@protocol BMDataLoaderResponseHandler <NSObject>
- (void)dataLoader:(id <BMDataLoader>)arg1 didReceiveResponse:(id <BMDataLoaderResponse>)arg2 withError:(NSError *)arg3;
- (void)dataLoader:(id <BMDataLoader>)arg1 didReceiveSuccessfulResponse:(id <BMDataLoaderResponse>)arg2;

@optional
- (void)dataLoader:(id <BMDataLoader>)arg1 didReceiveDataChunk:(NSData *)arg2 forResponse:(id <BMDataLoaderResponse>)arg3;
@end
