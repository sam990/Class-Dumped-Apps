//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PHPCPhotoData;

@interface PHPCPageFrame_SinglePhoto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPhotoData; // @dynamic hasPhotoData;
@property(nonatomic) _Bool hasPhotoStyle; // @dynamic hasPhotoStyle;
@property(retain, nonatomic) PHPCPhotoData *photoData; // @dynamic photoData;
@property(nonatomic) int photoStyle; // @dynamic photoStyle;

@end

