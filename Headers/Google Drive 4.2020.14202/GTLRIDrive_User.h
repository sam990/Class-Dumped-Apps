//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRObject.h>

@class GTLRIDrive_User_DomainSharingSettings, GTLRIDrive_User_Picture, NSNumber, NSString;

@interface GTLRIDrive_User : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *domain; // @dynamic domain;
@property(retain, nonatomic) GTLRIDrive_User_DomainSharingSettings *domainSharingSettings; // @dynamic domainSharingSettings;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(copy, nonatomic) NSString *emailAddressFromAccount; // @dynamic emailAddressFromAccount;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *isAuthenticatedUser; // @dynamic isAuthenticatedUser;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *organizationDisplayName; // @dynamic organizationDisplayName;
@property(copy, nonatomic) NSString *permissionId; // @dynamic permissionId;
@property(retain, nonatomic) GTLRIDrive_User_Picture *picture; // @dynamic picture;

@end

