//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileConnectOnboardingPopup_ContainerView_CloseEventFactory, SPTUBIMobileConnectOnboardingPopup_ContainerView_LaterButtonEventFactory, SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory;

@protocol SPTUBIMobileConnectOnboardingPopup_ContainerViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_CloseEventFactory>)closeFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_LaterButtonEventFactory>)laterButtonFactory;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory>)listenNowButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
