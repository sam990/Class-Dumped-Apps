//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIVast : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adsArray; // @dynamic adsArray;
@property(readonly, nonatomic) unsigned long long adsArray_Count; // @dynamic adsArray_Count;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
