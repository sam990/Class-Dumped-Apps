//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTISearchNavigationSupportedConfigs;

@interface YTISearchEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(copy, nonatomic) NSString *cowatchServerParams; // @dynamic cowatchServerParams;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasCowatchServerParams; // @dynamic hasCowatchServerParams;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasNavigationConfig; // @dynamic hasNavigationConfig;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasQueryIntent; // @dynamic hasQueryIntent;
@property(retain, nonatomic) YTISearchNavigationSupportedConfigs *navigationConfig; // @dynamic navigationConfig;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(copy, nonatomic) NSData *queryIntent; // @dynamic queryIntent;

@end
