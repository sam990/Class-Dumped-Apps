//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand;

@interface YTIYPCFixInstrumentEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *encryptedFixInstrumentParameters; // @dynamic encryptedFixInstrumentParameters;
@property(retain, nonatomic) YTICommand *errorAction; // @dynamic errorAction;
@property(readonly, nonatomic) int errorCommandOneOfCase; // @dynamic errorCommandOneOfCase;
@property(retain, nonatomic) YTICommand *errorEndpoint; // @dynamic errorEndpoint;
@property(nonatomic) _Bool hasEncryptedFixInstrumentParameters; // @dynamic hasEncryptedFixInstrumentParameters;
@property(nonatomic) _Bool hasSerializedFixFopLoggingParams; // @dynamic hasSerializedFixFopLoggingParams;
@property(copy, nonatomic) NSData *serializedFixFopLoggingParams; // @dynamic serializedFixFopLoggingParams;
@property(retain, nonatomic) YTICommand *successAction; // @dynamic successAction;
@property(readonly, nonatomic) int successCommandOneOfCase; // @dynamic successCommandOneOfCase;
@property(retain, nonatomic) YTICommand *successEndpoint; // @dynamic successEndpoint;

@end

