//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEMusicBillboardWeeklyInfo : AWEBaseApiModel
{
    NSString *_billboardID;
    long long _billboardEditionNumber;
    NSString *_startTime;
    NSString *_endTime;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long billboardEditionNumber; // @synthesize billboardEditionNumber=_billboardEditionNumber;
@property(copy, nonatomic) NSString *billboardID; // @synthesize billboardID=_billboardID;
- (void).cxx_destruct;

@end

