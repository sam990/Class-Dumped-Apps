//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AWEBindingKVO : NSObject
{
    _Bool _flag;
    id _observer;
    NSString *_observerKeyPath;
    NSMutableArray *_handlerArray;
    unsigned long long _observerHashCode;
}

@property unsigned long long observerHashCode; // @synthesize observerHashCode=_observerHashCode;
@property _Bool flag; // @synthesize flag=_flag;
@property(retain) NSMutableArray *handlerArray; // @synthesize handlerArray=_handlerArray;
@property(copy) NSString *observerKeyPath; // @synthesize observerKeyPath=_observerKeyPath;
@property __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)observerBindingManager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)bind_removeObserver:(id)arg1;
- (void)removeKVOByObserver:(id)arg1;
- (long long)handlerCount;
- (void)bind_addObserver;
- (void)removeHandler:(CDUnknownBlockType)arg1;
- (void)addHandler:(CDUnknownBlockType)arg1;
- (id)initWithObserver:(id)arg1 withObserverKeyPath:(id)arg2;
- (id)init;

@end

