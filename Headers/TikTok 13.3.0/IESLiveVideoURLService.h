//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESLiveVideoURLService : NSObject
{
}

+ (id)MD5HashString:(id)arg1;
+ (void)saveToutiaoVideoSecretKey:(id)arg1;
+ (id)toutiaoVideoSecretKey;
+ (void)saveToutiaoVideoUserKey:(id)arg1;
+ (id)toutiaoVideoUser;
+ (id)signFromVideoID:(id)arg1 ts:(long long)arg2;
+ (long long)currentTs;
+ (id)urlForV1WithVideoId:(id)arg1 businessToken:(id)arg2;
+ (id)urlForV1WithVideoId:(id)arg1;
+ (id)urlWithVideoId:(id)arg1;
+ (id)videoAPIURL;
+ (id)toutiaoVideoAPIURL;
+ (id)toutiaoVideoAPIVersion;
+ (id)baseURL;

@end
