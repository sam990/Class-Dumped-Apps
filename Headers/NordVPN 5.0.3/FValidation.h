//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FValidation : NSObject
{
}

+ (_Bool)validateFrom:(id)arg1 isValidPriorityValue:(id)arg2 withPath:(id)arg3 throwError:(_Bool)arg4;
+ (_Bool)validatePriorityValue:(id)arg1;
+ (void)validateFrom:(id)arg1 isValidPriorityValue:(id)arg2 withPath:(id)arg3;
+ (void)validateFrom:(id)arg1 validUpdateDictionaryKey:(id)arg2 withValue:(id)arg3;
+ (void)validateFrom:(id)arg1 validDictionaryKey:(id)arg2 withPath:(id)arg3;
+ (id)parseAndValidateKey:(id)arg1 fromFunction:(id)arg2 path:(id)arg3;
+ (_Bool)validateFrom:(id)arg1 isValidLeafValue:(id)arg2 withPath:(id)arg3;
+ (void)handleError:(id)arg1 withSuccessCallback:(CDUnknownBlockType)arg2;
+ (void)handleError:(id)arg1 withUserCallback:(CDUnknownBlockType)arg2;
+ (void)validateToken:(id)arg1;
+ (_Bool)stringNonempty:(id)arg1;
+ (void)validateFrom:(id)arg1 validURL:(id)arg2;
+ (void)validateFrom:(id)arg1 validKey:(id)arg2;
+ (_Bool)isValidKey:(id)arg1;
+ (void)validateFrom:(id)arg1 validRootPathString:(id)arg2;
+ (void)validateFrom:(id)arg1 validPathString:(id)arg2;
+ (_Bool)isValidPathString:(id)arg1;
+ (void)validateFrom:(id)arg1 knownEventType:(long long)arg2;
+ (void)validateFrom:(id)arg1 writablePath:(id)arg2;

@end
