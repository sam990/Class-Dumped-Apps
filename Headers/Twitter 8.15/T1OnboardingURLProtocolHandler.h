//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URLProtocolHandler-Protocol.h>

@class NSSet, NSString;

@interface T1OnboardingURLProtocolHandler : NSObject <T1URLProtocolHandler>
{
    CDUnknownBlockType _actionBlock;
    NSSet *_schemes;
}

- (void).cxx_destruct;
- (id)schemes;
- (_Bool)protocolRouter:(id)arg1 supportsScheme:(id)arg2;
- (unsigned long long)protocolRouter:(id)arg1 handleURL:(id)arg2 context:(id)arg3;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
