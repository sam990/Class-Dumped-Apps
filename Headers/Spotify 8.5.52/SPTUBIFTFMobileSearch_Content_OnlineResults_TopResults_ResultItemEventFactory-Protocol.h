//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIInteractionEvent;

@protocol SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeAddItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)swipeLikeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitUiReveal;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitUiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

