//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString;

@interface YTIFeedbackElicitationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponseData; // @dynamic hasResponseData;
@property(nonatomic) _Bool hasResponseText; // @dynamic hasResponseText;
@property(retain, nonatomic) YTICommand *responseData; // @dynamic responseData;
@property(retain, nonatomic) YTIFormattedString *responseText; // @dynamic responseText;

@end
