//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAccountControllerProductActivation;

@protocol SPTAccountControllerProductActivationDelegate <NSObject>
- (void)productActivation:(SPTAccountControllerProductActivation *)arg1 didFailWithError:(NSError *)arg2;
- (void)productActivationDidFinish:(SPTAccountControllerProductActivation *)arg1;
- (void)productActivationDidStart:(SPTAccountControllerProductActivation *)arg1;
@end
