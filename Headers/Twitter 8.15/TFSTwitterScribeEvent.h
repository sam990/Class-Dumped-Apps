//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TFSTwitterScribeEvent : NSObject
{
    NSDictionary *_values;
}

+ (id)jsonEventWithParameters:(id)arg1 group:(id)arg2;
+ (id)thriftEventWithParameters:(id)arg1 category:(id)arg2 group:(id)arg3;
+ (id)crashWithCrashID:(id)arg1 crashTimestamp:(id)arg2 group:(id)arg3;
+ (id)errorWithErrorType:(id)arg1 functionName:(id)arg2 group:(id)arg3;
+ (id)networkOperationEventWithParameters:(id)arg1 group:(id)arg2;
+ (id)performanceEventWithDescription:(id)arg1 duration:(id)arg2 count:(id)arg3 impressionID:(id)arg4 metadata:(id)arg5 size:(id)arg6 group:(id)arg7;
+ (id)clientEventWithEventName:(id)arg1 parameters:(id)arg2 group:(id)arg3;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithValues:(id)arg1;

@end
