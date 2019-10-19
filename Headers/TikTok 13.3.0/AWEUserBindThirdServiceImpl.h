//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEUserBindThirdService-Protocol.h"

@class NSString;

@interface AWEUserBindThirdServiceImpl : HTSService <AWEUserBindThirdService>
{
}

+ (CDUnknownBlockType)actualBlockWithCompletion:(CDUnknownBlockType)arg1 platform:(unsigned long long)arg2 context:(unsigned long long)arg3 autoHandleStrategy:(_Bool)arg4 isForBind:(_Bool)arg5;
+ (id)platformStringForType:(unsigned long long)arg1 isV2:(_Bool)arg2;
+ (id)connectPlatformForType:(unsigned long long)arg1;
+ (void)requestUnbindWithPlatform:(unsigned long long)arg1 autoHandleStrategy:(_Bool)arg2 context:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestBindWithPlatform:(unsigned long long)arg1 autoHandleStrategy:(_Bool)arg2 context:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)thirdPlatformNickNameWithType:(unsigned long long)arg1;
+ (_Bool)isThirdPlatformBindedWithType:(unsigned long long)arg1;
+ (void)load;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
