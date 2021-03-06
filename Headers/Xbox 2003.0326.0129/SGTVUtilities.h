//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGTVUtilities : NSObject
{
}

+ (id)epgModel;
+ (id)liveTVSettings;
+ (_Bool)shouldHideContentAsAdultContent:(id)arg1 rating:(id)arg2 headendId:(id)arg3 isAdultChannel:(_Bool)arg4;
+ (_Bool)isRatingNonAdultContentForSystem:(id)arg1 rating:(id)arg2 andHeadendId:(id)arg3;
+ (_Bool)areShowSpecificAdultContentRatingRequired;
+ (id)retrieveHeadendSourceForHeadendId:(id)arg1;
+ (_Bool)isConsoleSetupWithZurich;
+ (id)retrieveCurrentStreamingChannelId;
+ (_Bool)isStreamingEnabledForProvider:(id)arg1;
+ (_Bool)isStreamingEnabled:(_Bool)arg1;
+ (void)logStreamLaunchBI:(id)arg1 context:(id)arg2 providerId:(id)arg3 channelId:(id)arg4 showId:(id)arg5;
+ (void)showAlertWithMessage:(id)arg1;
+ (void)navigateToStreaming:(id)arg1 dismissPreviousModal:(_Bool)arg2;
+ (id)getBackgroundColorForUserAndPurpose:(id)arg1;
+ (id)getTextColorForPurpose:(id)arg1;
+ (void)clearAllOffsetAndStoreValueUserDefaults;
+ (_Bool)tuneToChannelFromAiring:(id)arg1;
+ (id)getCurrentShowIdForChannel:(long long)arg1 andHeadend:(id)arg2;
+ (unsigned short)locationOfTvApp;
+ (id)attributedErrorStringFromConcatenatedStrings:(id)arg1 second:(id)arg2;
+ (id)getOnlyAiringsLiveNowFromAiringsList:(id)arg1;
+ (id)getFutureAirDate:(id)arg1;
+ (id)durationStringFromDuration:(unsigned long long)arg1;
+ (id)nextPlayingStringFromSingleAiring:(id)arg1 forSeason:(unsigned int)arg2 andEpisode:(unsigned int)arg3;
+ (id)sortAiringsByStartTime:(id)arg1;
+ (id)nextPlayingStringFromAiringsList:(id)arg1 forSeason:(unsigned int)arg2 andEpisode:(unsigned int)arg3;
+ (id)nextPlayingStringFromAiringsList:(id)arg1;
+ (id)getShowTimeStringWithStartTime:(id)arg1 parentRatingString:(id)arg2 durationInSeconds:(int)arg3 isHD:(_Bool)arg4;
+ (id)getTimelineDateStringFromDate:(id)arg1;
+ (id)getUtcDateStringFromDate:(id)arg1;
+ (id)sharedDateFormatterWeekdayAndMonthAndDayStyle;
+ (id)sharedDateFormatterShortDateStyle;
+ (id)sharedDateFormatterShortTimeStyle;
+ (_Bool)isGreaterThanXMinutesAgo:(id)arg1 withXValue:(long long)arg2;
+ (long long)countHalfHoursFrom:(id)arg1 to:(id)arg2;
+ (double)roundDownToLastHalfHour:(double)arg1;
+ (_Bool)isDate:(id)arg1 withinAWeekOf:(id)arg2;
+ (_Bool)isDate:(id)arg1 sameDayAs:(id)arg2;
+ (_Bool)isShowPlayingSoonOrOnNow:(id)arg1 endDate:(id)arg2;

@end

