//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBMQTTTopicNames : NSObject
{
}

+ (_Bool)isName:(id)arg1 equalToName:(id)arg2;
+ (id)convertToEnumTopicIfNeeded:(id)arg1;
+ (id)convertToStringTopicIfNeeded:(id)arg1;
+ (_Bool)isEnumTopic:(id)arg1;
+ (void)convertTopicStrings:(id)arg1 toTypes:(id)arg2 leftover:(id)arg3;
+ (void)convertTopicStringArray:(id)arg1 toTypes:(id)arg2 leftover:(id)arg3;
+ (id)topicNameFromNumber:(id)arg1;
+ (id)typeFromName:(id)arg1;

@end

