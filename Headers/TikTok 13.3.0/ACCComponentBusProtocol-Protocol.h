//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, Protocol, UIView, UIViewController;
@protocol ACCComponentProtocol, UIViewControllerTransitionCoordinator;

@protocol ACCComponentBusProtocol <NSObject>
@property(nonatomic) __weak UIViewController *containerViewController;
- (void)makeComponentsPerformContainerviewControllerWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)makeComponentsPerformSelector:(SEL)arg1;
- (NSArray *)components;
- (NSArray *)subComponentsOfComponent:(id <ACCComponentProtocol>)arg1;
- (UIView *)componentContentViewOfProtocol:(Protocol *)arg1;
- (NSObject<ACCComponentProtocol> *)componentOfProtocol:(Protocol *)arg1;
- (id)initWithContainerViewController:(UIViewController *)arg1 rootComponentProtocol:(Protocol *)arg2 debugMode:(_Bool)arg3;
- (id)initWithContainerViewController:(UIViewController *)arg1 rootComponentProtocol:(Protocol *)arg2;
@end
