//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAwemeDuplicateFilterManagerProtocol-Protocol.h"

@class NSDate, NSMutableSet, NSString;

@interface AWEAwemeDuplicateFilterManager : NSObject <AWEAwemeDuplicateFilterManagerProtocol>
{
    NSMutableSet *_yesterDaySet;
    NSMutableSet *_todaySet;
    NSDate *_todayDate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *todayDate; // @synthesize todayDate=_todayDate;
@property(retain, nonatomic) NSMutableSet *todaySet; // @synthesize todaySet=_todaySet;
@property(retain, nonatomic) NSMutableSet *yesterDaySet; // @synthesize yesterDaySet=_yesterDaySet;
- (void).cxx_destruct;
- (void)setSet:(id)arg1 forKey:(id)arg2;
- (id)setForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)dateForKey:(id)arg1;
- (_Bool)isDuplicate:(id)arg1;
- (void)addAwemeID:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

