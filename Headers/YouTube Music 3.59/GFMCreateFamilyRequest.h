//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiRequestHeader, GFMAuditData, GFMFamilyCreationParams;

@interface GFMCreateFamilyRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) GFMAuditData *auditData; // @dynamic auditData;
@property(retain, nonatomic) GFMFamilyCreationParams *familyCreationParams; // @dynamic familyCreationParams;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasAuditData; // @dynamic hasAuditData;
@property(nonatomic) _Bool hasFamilyCreationParams; // @dynamic hasFamilyCreationParams;

@end

