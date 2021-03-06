//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBIOSPAYMENTSTrialDuration : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_days;
    NSNumber *_weeks;
    NSNumber *_months;
    NSNumber *_years;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToTrialDuration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isYears;
- (_Bool)isMonths;
- (_Bool)isWeeks;
- (_Bool)isDays;
@property(readonly, nonatomic) NSNumber *years; // @synthesize years=_years;
@property(readonly, nonatomic) NSNumber *months; // @synthesize months=_months;
@property(readonly, nonatomic) NSNumber *weeks; // @synthesize weeks=_weeks;
@property(readonly, nonatomic) NSNumber *days; // @synthesize days=_days;
- (id)initWithYears:(id)arg1;
- (id)initWithMonths:(id)arg1;
- (id)initWithWeeks:(id)arg1;
- (id)initWithDays:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

