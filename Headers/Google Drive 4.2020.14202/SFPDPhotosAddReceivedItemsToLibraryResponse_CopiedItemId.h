//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCItemId;

@interface SFPDPhotosAddReceivedItemsToLibraryResponse_CopiedItemId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasSourceItemId; // @dynamic hasSourceItemId;
@property(nonatomic) _Bool hasSourceItemMediaKey; // @dynamic hasSourceItemMediaKey;
@property(retain, nonatomic) PhotosMCItemId *itemId; // @dynamic itemId;
@property(retain, nonatomic) PhotosMCItemId *sourceItemId; // @dynamic sourceItemId;
@property(copy, nonatomic) NSString *sourceItemMediaKey; // @dynamic sourceItemMediaKey;

@end

