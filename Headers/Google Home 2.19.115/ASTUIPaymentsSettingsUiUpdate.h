//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIAuthSettingsUpdate, ASTUIDeliveryAddressUpdate, ASTUINewPaymentInstrumentUpdate, ASTUITermsOfServiceToken, NSMutableArray, NSString;

@interface ASTUIPaymentsSettingsUiUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *assistantDeviceSettingsUpdateArray; // @dynamic assistantDeviceSettingsUpdateArray;
@property(readonly, nonatomic) unsigned long long assistantDeviceSettingsUpdateArray_Count; // @dynamic assistantDeviceSettingsUpdateArray_Count;
@property(retain, nonatomic) ASTUIAuthSettingsUpdate *authSettingsUpdate; // @dynamic authSettingsUpdate;
@property(nonatomic) long long billingCustomerNumber; // @dynamic billingCustomerNumber;
@property(retain, nonatomic) ASTUIDeliveryAddressUpdate *deliveryAddressUpdate; // @dynamic deliveryAddressUpdate;
@property(nonatomic) _Bool hasAuthSettingsUpdate; // @dynamic hasAuthSettingsUpdate;
@property(nonatomic) _Bool hasBillingCustomerNumber; // @dynamic hasBillingCustomerNumber;
@property(nonatomic) _Bool hasDeliveryAddressUpdate; // @dynamic hasDeliveryAddressUpdate;
@property(nonatomic) _Bool hasNewInstrumentUpdate; // @dynamic hasNewInstrumentUpdate;
@property(nonatomic) _Bool hasPaymentsStatus; // @dynamic hasPaymentsStatus;
@property(nonatomic) _Bool hasPreferredDeliveryAddressId; // @dynamic hasPreferredDeliveryAddressId;
@property(nonatomic) _Bool hasPreferredInstrumentId; // @dynamic hasPreferredInstrumentId;
@property(nonatomic) _Bool hasTermsOfServiceToken; // @dynamic hasTermsOfServiceToken;
@property(retain, nonatomic) ASTUINewPaymentInstrumentUpdate *newInstrumentUpdate; // @dynamic newInstrumentUpdate;
@property(nonatomic) int paymentsStatus; // @dynamic paymentsStatus;
@property(copy, nonatomic) NSString *preferredDeliveryAddressId; // @dynamic preferredDeliveryAddressId;
@property(nonatomic) long long preferredInstrumentId; // @dynamic preferredInstrumentId;
@property(retain, nonatomic) ASTUITermsOfServiceToken *termsOfServiceToken; // @dynamic termsOfServiceToken;

@end

