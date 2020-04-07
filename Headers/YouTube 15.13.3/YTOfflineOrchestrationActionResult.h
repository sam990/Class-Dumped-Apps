//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface YTOfflineOrchestrationActionResult : NSObject
{
    _Bool _retryable;
    int _status;
    NSError *_error;
    NSArray *_additionalActions;
}

+ (id)unsuccessfulActionResultWithRetryable:(_Bool)arg1 error:(id)arg2;
+ (id)successfulActionResultWithAdditionalActions:(id)arg1;
@property(readonly, nonatomic) NSArray *additionalActions; // @synthesize additionalActions=_additionalActions;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool retryable; // @synthesize retryable=_retryable;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithStatus:(int)arg1 retryable:(_Bool)arg2 error:(id)arg3 additionalActions:(id)arg4;

@end
