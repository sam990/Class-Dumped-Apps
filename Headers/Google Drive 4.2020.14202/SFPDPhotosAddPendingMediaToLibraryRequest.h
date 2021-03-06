//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray, PhotosMCAssistantAddPendingMediaParams;

@interface SFPDPhotosAddPendingMediaToLibraryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCAssistantAddPendingMediaParams *assistantParams; // @dynamic assistantParams;
@property(nonatomic) _Bool hasAssistantParams; // @dynamic hasAssistantParams;
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(retain, nonatomic) NSMutableArray *mediaKeyArray; // @dynamic mediaKeyArray;
@property(readonly, nonatomic) unsigned long long mediaKeyArray_Count; // @dynamic mediaKeyArray_Count;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) GPBEnumArray *supportedEnrichmentArray; // @dynamic supportedEnrichmentArray;
@property(readonly, nonatomic) unsigned long long supportedEnrichmentArray_Count; // @dynamic supportedEnrichmentArray_Count;

@end

