//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIYPCReviewRecurrenceUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasIsDarkTheme; // @dynamic hasIsDarkTheme;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasUpdateType; // @dynamic hasUpdateType;
@property(nonatomic) _Bool isDarkTheme; // @dynamic isDarkTheme;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *offerParamsArray; // @dynamic offerParamsArray;
@property(readonly, nonatomic) unsigned long long offerParamsArray_Count; // @dynamic offerParamsArray_Count;
@property(nonatomic) int updateType; // @dynamic updateType;

@end
