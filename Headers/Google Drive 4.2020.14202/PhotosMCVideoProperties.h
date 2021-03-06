//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCVideoProperties_PreviewVideoStream;

@interface PhotosMCVideoProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adaptiveVideoStreamArray; // @dynamic adaptiveVideoStreamArray;
@property(readonly, nonatomic) unsigned long long adaptiveVideoStreamArray_Count; // @dynamic adaptiveVideoStreamArray_Count;
@property(nonatomic) long long durationMs; // @dynamic durationMs;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasOriginalHeight; // @dynamic hasOriginalHeight;
@property(nonatomic) _Bool hasOriginalWidth; // @dynamic hasOriginalWidth;
@property(nonatomic) _Bool hasPreviewVideoStream; // @dynamic hasPreviewVideoStream;
@property(nonatomic) _Bool hasSpecialFormat; // @dynamic hasSpecialFormat;
@property(retain, nonatomic) NSMutableArray *highlightArray; // @dynamic highlightArray;
@property(readonly, nonatomic) unsigned long long highlightArray_Count; // @dynamic highlightArray_Count;
@property(nonatomic) int originalHeight; // @dynamic originalHeight;
@property(nonatomic) int originalWidth; // @dynamic originalWidth;
@property(retain, nonatomic) PhotosMCVideoProperties_PreviewVideoStream *previewVideoStream; // @dynamic previewVideoStream;
@property(retain, nonatomic) NSMutableArray *processingArray; // @dynamic processingArray;
@property(readonly, nonatomic) unsigned long long processingArray_Count; // @dynamic processingArray_Count;
@property(nonatomic) int specialFormat; // @dynamic specialFormat;
@property(retain, nonatomic) NSMutableArray *videoStreamArray; // @dynamic videoStreamArray;
@property(readonly, nonatomic) unsigned long long videoStreamArray_Count; // @dynamic videoStreamArray_Count;

@end

