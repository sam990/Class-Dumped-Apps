//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESBridgeMethod : NSObject
{
    unsigned long long _authType;
    NSString *_methodName;
    CDUnknownBlockType _handler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(readonly, nonatomic) unsigned long long authType; // @synthesize authType=_authType;
- (void).cxx_destruct;
- (id)initWithMethodName:(id)arg1 authType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
