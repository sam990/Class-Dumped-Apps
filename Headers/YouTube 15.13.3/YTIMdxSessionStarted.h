//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIDialData, YTIMdxReceiverDevice;

@interface YTIMdxSessionStarted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDialData *dialData; // @dynamic dialData;
@property(nonatomic) _Bool hasDialData; // @dynamic hasDialData;
@property(nonatomic) _Bool hasIsReconnectionInProgress; // @dynamic hasIsReconnectionInProgress;
@property(nonatomic) _Bool hasPreviousConnectionState; // @dynamic hasPreviousConnectionState;
@property(nonatomic) _Bool hasReceiverDevice; // @dynamic hasReceiverDevice;
@property(nonatomic) _Bool hasRetry; // @dynamic hasRetry;
@property(nonatomic) _Bool hasSessionSource; // @dynamic hasSessionSource;
@property(nonatomic) _Bool hasSessionType; // @dynamic hasSessionType;
@property(nonatomic) _Bool hasSmoothPairingUsed; // @dynamic hasSmoothPairingUsed;
@property(nonatomic) _Bool isReconnectionInProgress; // @dynamic isReconnectionInProgress;
@property(nonatomic) int previousConnectionState; // @dynamic previousConnectionState;
@property(retain, nonatomic) YTIMdxReceiverDevice *receiverDevice; // @dynamic receiverDevice;
@property(nonatomic) _Bool retry; // @dynamic retry;
@property(nonatomic) int sessionSource; // @dynamic sessionSource;
@property(nonatomic) int sessionType; // @dynamic sessionType;
@property(nonatomic) _Bool smoothPairingUsed; // @dynamic smoothPairingUsed;

@end
