//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface CDRPaymentMethod : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *challengeToken; // @dynamic challengeToken;
@property(copy, nonatomic) NSData *challengeVerificationToken; // @dynamic challengeVerificationToken;
@property(copy, nonatomic) NSData *deleteToken; // @dynamic deleteToken;
@property(copy, nonatomic) NSData *editToken; // @dynamic editToken;
@property(nonatomic) _Bool hasChallengeToken; // @dynamic hasChallengeToken;
@property(nonatomic) _Bool hasChallengeVerificationToken; // @dynamic hasChallengeVerificationToken;
@property(nonatomic) _Bool hasDeleteToken; // @dynamic hasDeleteToken;
@property(nonatomic) _Bool hasEditToken; // @dynamic hasEditToken;
@property(nonatomic) _Bool hasInstrumentDescription; // @dynamic hasInstrumentDescription;
@property(nonatomic) _Bool hasInstrumentId; // @dynamic hasInstrumentId;
@property(nonatomic) _Bool hasInstrumentToken; // @dynamic hasInstrumentToken;
@property(nonatomic) _Bool hasInstrumentTokenData; // @dynamic hasInstrumentTokenData;
@property(nonatomic) _Bool hasInstrumentType; // @dynamic hasInstrumentType;
@property(nonatomic) _Bool hasIsDefault; // @dynamic hasIsDefault;
@property(nonatomic) _Bool hasLogoFifeURL; // @dynamic hasLogoFifeURL;
@property(nonatomic) _Bool hasPaymentId; // @dynamic hasPaymentId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStatusDescription; // @dynamic hasStatusDescription;
@property(copy, nonatomic) NSString *instrumentDescription; // @dynamic instrumentDescription;
@property(nonatomic) long long instrumentId; // @dynamic instrumentId;
@property(copy, nonatomic) NSData *instrumentToken; // @dynamic instrumentToken;
@property(copy, nonatomic) NSData *instrumentTokenData; // @dynamic instrumentTokenData;
@property(nonatomic) int instrumentType; // @dynamic instrumentType;
@property(nonatomic) _Bool isDefault; // @dynamic isDefault;
@property(copy, nonatomic) NSString *logoFifeURL; // @dynamic logoFifeURL;
@property(copy, nonatomic) NSString *paymentId; // @dynamic paymentId;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *statusDescription; // @dynamic statusDescription;

@end

