//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTITransactionProductData;

@interface YTIYPCHandleTransactionEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientLocationContext; // @dynamic clientLocationContext;
@property(nonatomic) _Bool hasClientLocationContext; // @dynamic hasClientLocationContext;
@property(nonatomic) _Bool hasSerializedTransactionFlowLoggingParams; // @dynamic hasSerializedTransactionFlowLoggingParams;
@property(nonatomic) _Bool hasTransactionParams; // @dynamic hasTransactionParams;
@property(nonatomic) _Bool hasTransactionProductData; // @dynamic hasTransactionProductData;
@property(copy, nonatomic) NSData *serializedTransactionFlowLoggingParams; // @dynamic serializedTransactionFlowLoggingParams;
@property(copy, nonatomic) NSString *transactionParams; // @dynamic transactionParams;
@property(retain, nonatomic) YTITransactionProductData *transactionProductData; // @dynamic transactionProductData;

@end
