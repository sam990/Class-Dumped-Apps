//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentInterruptibleTask.h"

@class ComGoogleCommonUtilConcurrentCombinedFuture;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentCombinedFuture_CombinedFutureInterruptibleTask : ComGoogleCommonUtilConcurrentInterruptibleTask
{
    ComGoogleCommonUtilConcurrentCombinedFuture *this$0_;
    id <JavaUtilConcurrentExecutor> listenerExecutor_;
    _Bool thrownByExecute_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (void)afterRanInterruptiblyWithId:(id)arg1 withJavaLangThrowable:(id)arg2;
- (void)execute;
- (_Bool)isDone;

@end

