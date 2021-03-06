//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTICommand;

@interface YTIMerchandiseShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *expandCommand; // @dynamic expandCommand;
@property(copy, nonatomic) NSString *expandText; // @dynamic expandText;
@property(nonatomic) _Bool hasExpandCommand; // @dynamic hasExpandCommand;
@property(nonatomic) _Bool hasExpandText; // @dynamic hasExpandText;
@property(nonatomic) _Bool hasHideText; // @dynamic hasHideText;
@property(nonatomic) _Bool hasInformationText; // @dynamic hasInformationText;
@property(nonatomic) _Bool hasInformationTextAction; // @dynamic hasInformationTextAction;
@property(nonatomic) _Bool hasIsAffiliate; // @dynamic hasIsAffiliate;
@property(nonatomic) _Bool hasMerchItemCount; // @dynamic hasMerchItemCount;
@property(nonatomic) _Bool hasShowText; // @dynamic hasShowText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *hideText; // @dynamic hideText;
@property(copy, nonatomic) NSString *informationText; // @dynamic informationText;
@property(retain, nonatomic) YTICommand *informationTextAction; // @dynamic informationTextAction;
@property(nonatomic) _Bool isAffiliate; // @dynamic isAffiliate;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) int merchItemCount; // @dynamic merchItemCount;
@property(copy, nonatomic) NSString *showText; // @dynamic showText;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

