//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCCORECompositeStoryId;

@interface StoryBoosts : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) SCCORECompositeStoryId *compositeStoryId; // @dynamic compositeStoryId;
@property(nonatomic) _Bool hasCompositeStoryId; // @dynamic hasCompositeStoryId;
@property(nonatomic) long long lastUpdatedTimestampMsecs; // @dynamic lastUpdatedTimestampMsecs;
@property(retain, nonatomic) NSMutableArray *storyBoostsArray; // @dynamic storyBoostsArray;
@property(readonly, nonatomic) unsigned long long storyBoostsArray_Count; // @dynamic storyBoostsArray_Count;

@end
