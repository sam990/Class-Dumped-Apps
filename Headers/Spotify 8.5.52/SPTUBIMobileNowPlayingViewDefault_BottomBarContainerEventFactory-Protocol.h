//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewDefault_BottomBarContainer_ConnectButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_BottomBarContainer_QueueButtonEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefault_BottomBarContainerEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewDefault_BottomBarContainer_QueueButtonEventFactory>)queueButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_BottomBarContainer_ConnectButtonEventFactory>)connectButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
