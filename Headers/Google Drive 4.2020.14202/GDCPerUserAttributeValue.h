//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GDCPermission, GDCSimpleAttributeValue;

@interface GDCPerUserAttributeValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) GDCPermission *user; // @dynamic user;
@property(retain, nonatomic) GDCSimpleAttributeValue *value; // @dynamic value;

@end

