//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData;

@interface AASIosDeviceChallengeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *deviceChallenge; // @dynamic deviceChallenge;
@property(copy, nonatomic) NSData *deviceChallengeSetup; // @dynamic deviceChallengeSetup;
@property(nonatomic) _Bool hasDeviceChallenge; // @dynamic hasDeviceChallenge;
@property(nonatomic) _Bool hasDeviceChallengeSetup; // @dynamic hasDeviceChallengeSetup;

@end

