//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GABLocation, NSString;

@interface GABStructuredLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GABLocation *geoLocation; // @dynamic geoLocation;
@property(nonatomic) _Bool hasGeoLocation; // @dynamic hasGeoLocation;
@property(nonatomic) _Bool hasRadius; // @dynamic hasRadius;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) double radius; // @dynamic radius;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

