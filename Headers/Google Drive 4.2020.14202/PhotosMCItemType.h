//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCAudio, PhotosMCPhoto, PhotosMCVideo;

@interface PhotosMCItemType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *associatedMediaArray; // @dynamic associatedMediaArray;
@property(readonly, nonatomic) unsigned long long associatedMediaArray_Count; // @dynamic associatedMediaArray_Count;
@property(retain, nonatomic) PhotosMCAudio *audio; // @dynamic audio;
@property(nonatomic) _Bool hasAudio; // @dynamic hasAudio;
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) PhotosMCPhoto *photo; // @dynamic photo;
@property(retain, nonatomic) PhotosMCVideo *video; // @dynamic video;

@end

