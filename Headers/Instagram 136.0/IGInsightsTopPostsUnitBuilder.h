//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGInsightsMediaItemsModel, NSNumber;

@interface IGInsightsTopPostsUnitBuilder : NSObject
{
    NSNumber *_lastWeekCount;
    NSNumber *_weekOverWeekDelta;
    IGInsightsMediaItemsModel *_mediaItemsModel;
}

+ (id)insightsTopPostsUnitFromExistingInsightsTopPostsUnit:(id)arg1;
+ (id)insightsTopPostsUnit;
- (void).cxx_destruct;
- (id)withMediaItemsModel:(id)arg1;
- (id)withWeekOverWeekDelta:(id)arg1;
- (id)withLastWeekCount:(id)arg1;
- (id)build;

@end

