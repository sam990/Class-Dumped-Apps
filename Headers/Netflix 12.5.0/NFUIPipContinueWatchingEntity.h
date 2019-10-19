//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSNumber, NSString;

@interface NFUIPipContinueWatchingEntity : COEntity
{
    NSString *_title;
    NSString *_titleCard;
    NSNumber *_seasonNumber;
    NSString *_sequenceLabel;
    NSNumber *_episodeNumber;
    NSNumber *_currentId;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(copy, nonatomic) NSNumber *currentId; // @synthesize currentId=_currentId;
@property(copy, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(copy, nonatomic) NSString *sequenceLabel; // @synthesize sequenceLabel=_sequenceLabel;
@property(copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(copy, nonatomic) NSString *titleCard; // @synthesize titleCard=_titleCard;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setValuesForKeysWithDictionary:(id)arg1;

@end
