//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand, YTILoggingDirectives;

@interface YTIStringRun : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool bold; // @dynamic bold;
@property(nonatomic) unsigned int darkModeTextColor; // @dynamic darkModeTextColor;
@property(nonatomic) _Bool deemphasize; // @dynamic deemphasize;
@property(nonatomic) int fontFace; // @dynamic fontFace;
@property(nonatomic) _Bool hasBold; // @dynamic hasBold;
@property(nonatomic) _Bool hasDarkModeTextColor; // @dynamic hasDarkModeTextColor;
@property(nonatomic) _Bool hasDeemphasize; // @dynamic hasDeemphasize;
@property(nonatomic) _Bool hasFontFace; // @dynamic hasFontFace;
@property(nonatomic) _Bool hasItalics; // @dynamic hasItalics;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasStrikethrough; // @dynamic hasStrikethrough;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasUnderline; // @dynamic hasUnderline;
@property(nonatomic) _Bool italics; // @dynamic italics;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) _Bool strikethrough; // @dynamic strikethrough;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int textColor; // @dynamic textColor;
@property(nonatomic) _Bool underline; // @dynamic underline;

@end

