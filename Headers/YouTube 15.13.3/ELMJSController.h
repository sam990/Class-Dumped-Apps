//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMJSController : NSObject
{
    struct Handle<std::__1::shared_ptr<youtube::elements::interfaces::JSController>, std::__1::shared_ptr<youtube::elements::interfaces::JSController>> _cppRefHandle;
}

+ (id)create:(id)arg1 performanceMonitorAdapter:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadModuleConfig:(id)arg1 moduleDependencies:(id)arg2 version:(long long)arg3;
- (void)loadModuleConfigSet:(id)arg1;
- (void)evaluateCommand:(id)arg1 senderStateProto:(id)arg2 handler:(id)arg3;
- (id)initWithCpp:(const shared_ptr_a06a6304 *)arg1;

@end
