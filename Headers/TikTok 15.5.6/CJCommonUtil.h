//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CJCommonUtil : NSObject
{
}

+ (id)replaceNoEncoding:(id)arg1;
+ (_Bool)isMatchLuhn:(id)arg1;
+ (id)getMMSSFromSS:(int)arg1;
+ (id)overwriteQuery:(id)arg1 toUrl:(id)arg2;
+ (id)appendParamsToUrl:(id)arg1 params:(id)arg2;
+ (id)dateStringFromTimeStamp:(double)arg1 dateFormat:(id)arg2;
+ (id)jsonStringToDictionary:(id)arg1;
+ (id)arrayToJson:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
+ (id)downTime:(long long)arg1 updateBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)timeDistanceToString:(long long)arg1 isShort:(_Bool)arg2;

@end

