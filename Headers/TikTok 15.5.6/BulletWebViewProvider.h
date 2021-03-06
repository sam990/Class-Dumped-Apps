//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BulletViewProviderProtocol-Protocol.h"

@class BulletKitInstance, NSString, UIViewController;

@interface BulletWebViewProvider : NSObject <BulletViewProviderProtocol>
{
    _Bool _isUseBulletBridge;
    BulletKitInstance *bulletKitInstance;
    UIViewController *_sourceViewController;
    UIViewController *_sourceView;
}

@property(nonatomic) _Bool isUseBulletBridge; // @synthesize isUseBulletBridge=_isUseBulletBridge;
@property(nonatomic) __weak UIViewController *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak BulletKitInstance *bulletKitInstance; // @synthesize bulletKitInstance;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

