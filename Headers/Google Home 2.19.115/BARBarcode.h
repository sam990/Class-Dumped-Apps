//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class BARBoardingPass, BARCalendarEvent, BARContactInfo, BARDriverLicense, BAREmail, BARGeoPoint, BARSms, BARUrlBookmark, BARWiFi, GPBInt32Array, NSData, NSMutableArray, NSString;

@interface BARBarcode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BARUrlBookmark *URL; // @dynamic URL;
@property(retain, nonatomic) BARBoardingPass *boardingPass; // @dynamic boardingPass;
@property(retain, nonatomic) BARCalendarEvent *calendarEvent; // @dynamic calendarEvent;
@property(retain, nonatomic) BARContactInfo *contactInfo; // @dynamic contactInfo;
@property(retain, nonatomic) NSMutableArray *cornerPointArray; // @dynamic cornerPointArray;
@property(readonly, nonatomic) unsigned long long cornerPointArray_Count; // @dynamic cornerPointArray_Count;
@property(copy, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(copy, nonatomic) NSString *displayValue; // @dynamic displayValue;
@property(retain, nonatomic) BARDriverLicense *driverLicense; // @dynamic driverLicense;
@property(retain, nonatomic) BAREmail *email; // @dynamic email;
@property(nonatomic) int format; // @dynamic format;
@property(retain, nonatomic) BARGeoPoint *geoPoint; // @dynamic geoPoint;
@property(nonatomic) _Bool hasBoardingPass; // @dynamic hasBoardingPass;
@property(nonatomic) _Bool hasCalendarEvent; // @dynamic hasCalendarEvent;
@property(nonatomic) _Bool hasContactInfo; // @dynamic hasContactInfo;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasDisplayValue; // @dynamic hasDisplayValue;
@property(nonatomic) _Bool hasDriverLicense; // @dynamic hasDriverLicense;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasFormat; // @dynamic hasFormat;
@property(nonatomic) _Bool hasGeoPoint; // @dynamic hasGeoPoint;
@property(nonatomic) _Bool hasRawValue; // @dynamic hasRawValue;
@property(nonatomic) _Bool hasSms; // @dynamic hasSms;
@property(nonatomic) _Bool hasSupplementValue; // @dynamic hasSupplementValue;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasValueFormat; // @dynamic hasValueFormat;
@property(nonatomic) _Bool hasWifi; // @dynamic hasWifi;
@property(retain, nonatomic) GPBInt32Array *orientedCornerIndexArray; // @dynamic orientedCornerIndexArray;
@property(readonly, nonatomic) unsigned long long orientedCornerIndexArray_Count; // @dynamic orientedCornerIndexArray_Count;
@property(copy, nonatomic) NSData *rawValue; // @dynamic rawValue;
@property(retain, nonatomic) BARSms *sms; // @dynamic sms;
@property(retain, nonatomic) NSMutableArray *supplementCornerPointArray; // @dynamic supplementCornerPointArray;
@property(readonly, nonatomic) unsigned long long supplementCornerPointArray_Count; // @dynamic supplementCornerPointArray_Count;
@property(copy, nonatomic) NSString *supplementValue; // @dynamic supplementValue;
@property(nonatomic) int valueFormat; // @dynamic valueFormat;
@property(retain, nonatomic) BARWiFi *wifi; // @dynamic wifi;

@end

