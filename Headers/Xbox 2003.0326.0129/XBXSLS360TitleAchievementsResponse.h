//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXSLSTitleAchievementsResponse.h"

@interface XBXSLS360TitleAchievementsResponse : XBXSLSTitleAchievementsResponse
{
}

- (id)getAchievementImageUrl:(unsigned long long)arg1 titleId:(unsigned long long)arg2 achieved:(_Bool)arg3 secret:(_Bool)arg4;
- (int)parseProgressState:(_Bool)arg1;
- (id)parseAchievement:(id)arg1;
- (id)didProcessData:(id)arg1 requestId:(int)arg2 data:(id)arg3 requestContext:(id)arg4;

@end

