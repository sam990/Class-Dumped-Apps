//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, RnPatchLayout;

@interface SearchDynamicPatchStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *abInfo; // @dynamic abInfo;
@property(nonatomic) _Bool hasAbInfo; // @dynamic hasAbInfo;
@property(nonatomic) _Bool hasLayout; // @dynamic hasLayout;
@property(nonatomic) _Bool hasRawData; // @dynamic hasRawData;
@property(retain, nonatomic) RnPatchLayout *layout; // @dynamic layout;
@property(copy, nonatomic) NSString *rawData; // @dynamic rawData;

@end

