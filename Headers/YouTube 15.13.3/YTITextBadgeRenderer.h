//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTITextBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;

@end
