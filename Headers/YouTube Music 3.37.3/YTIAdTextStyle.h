//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAdColor;

@interface YTIAdTextStyle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int fontSize; // @dynamic fontSize;
@property(nonatomic) int fontStyle; // @dynamic fontStyle;
@property(nonatomic) _Bool hasFontSize; // @dynamic hasFontSize;
@property(nonatomic) _Bool hasFontStyle; // @dynamic hasFontStyle;
@property(nonatomic) _Bool hasItalics; // @dynamic hasItalics;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool italics; // @dynamic italics;
@property(retain, nonatomic) YTIAdColor *textColor; // @dynamic textColor;

@end
