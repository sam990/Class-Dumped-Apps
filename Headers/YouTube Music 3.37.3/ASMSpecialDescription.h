//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMImage, GTPColor, NSString;

@interface ASMSpecialDescription : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPColor *color; // @dynamic color;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) ASMImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end
