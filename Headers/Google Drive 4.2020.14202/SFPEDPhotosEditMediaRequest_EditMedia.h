//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSData, PEFEditList;

@interface SFPEDPhotosEditMediaRequest_EditMedia : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PEFEditList *editList; // @dynamic editList;
@property(nonatomic) _Bool hasEditList; // @dynamic hasEditList;
@property(nonatomic) _Bool hasImageUploadToken; // @dynamic hasImageUploadToken;
@property(nonatomic) _Bool hasOperation; // @dynamic hasOperation;
@property(nonatomic) _Bool hasVideoUploadToken; // @dynamic hasVideoUploadToken;
@property(copy, nonatomic) NSData *imageUploadToken; // @dynamic imageUploadToken;
@property(nonatomic) int operation; // @dynamic operation;
@property(copy, nonatomic) NSData *videoUploadToken; // @dynamic videoUploadToken;

@end

