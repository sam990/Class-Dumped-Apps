//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PhotosMCPrioritizeMediaByHashRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(nonatomic) _Bool hasSha1Original; // @dynamic hasSha1Original;
@property(retain, nonatomic) NSMutableArray *itemArray; // @dynamic itemArray;
@property(readonly, nonatomic) unsigned long long itemArray_Count; // @dynamic itemArray_Count;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *sha1Original; // @dynamic sha1Original;

@end

