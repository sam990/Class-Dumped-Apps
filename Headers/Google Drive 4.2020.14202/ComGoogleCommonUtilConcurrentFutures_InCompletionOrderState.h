//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray, JavaUtilConcurrentAtomicAtomicInteger;

@interface ComGoogleCommonUtilConcurrentFutures_InCompletionOrderState : NSObject
{
    _Bool wasCancelled_;
    _Bool shouldInterrupt_;
    JavaUtilConcurrentAtomicAtomicInteger *incompleteOutputCount_;
    IOSObjectArray *inputFutures_;
    // Error parsing type: Ai, name: delegateIndex_
}

- (void)dealloc;

@end

