//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWATextFieldEventSubscription : NSObject
{
    id _subscriber;
    SEL _selector;
}

@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)invocationWithTextFieldArgument:(id)arg1;
- (id)initWithSubscriber:(id)arg1 selector:(SEL)arg2;

@end

