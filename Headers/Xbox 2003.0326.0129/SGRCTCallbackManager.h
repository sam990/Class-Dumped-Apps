//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SGRCTCallbackManager : NSObject
{
    NSMutableDictionary *_callbackMap;
}

@property(retain, nonatomic) NSMutableDictionary *callbackMap; // @synthesize callbackMap=_callbackMap;
- (void).cxx_destruct;
- (void)resolveCallbacks:(id)arg1 result:(id)arg2;
- (void)addCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

