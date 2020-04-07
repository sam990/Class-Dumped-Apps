//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIFTFMobileSearch_ContentEventFactory, SPTUBIFTFMobileSearch_SearchBarEventFactory, SPTUBIFTFMobileSearch_VoiceButtonEventFactory;

@protocol SPTUBIFTFMobileSearchEventFactory <NSObject>
- (id <SPTUBIFTFMobileSearch_VoiceButtonEventFactory>)voiceButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIFTFMobileSearch_ContentEventFactory>)contentFactory;
- (id <SPTUBIFTFMobileSearch_SearchBarEventFactory>)searchBarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
