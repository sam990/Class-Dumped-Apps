//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GTPColor, NSString;

@interface CDRButton : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleColor; // @dynamic hasTitleColor;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) GTPColor *titleColor; // @dynamic titleColor;

@end

