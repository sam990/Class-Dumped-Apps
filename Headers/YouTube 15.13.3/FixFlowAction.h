//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, OrchWidgetReference;

@interface FixFlowAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSData *actionToken; // @dynamic actionToken;
@property(copy, nonatomic) NSData *encryptedWidgetParameters; // @dynamic encryptedWidgetParameters;
@property(nonatomic) _Bool hasWidgetReference; // @dynamic hasWidgetReference;
@property(nonatomic) _Bool hasWidgetType; // @dynamic hasWidgetType;
@property(readonly, nonatomic) int uiParametersOneOfCase; // @dynamic uiParametersOneOfCase;
@property(retain, nonatomic) OrchWidgetReference *widgetReference; // @dynamic widgetReference;
@property(copy, nonatomic) NSData *widgetResponse; // @dynamic widgetResponse;
@property(nonatomic) int widgetType; // @dynamic widgetType;

@end
