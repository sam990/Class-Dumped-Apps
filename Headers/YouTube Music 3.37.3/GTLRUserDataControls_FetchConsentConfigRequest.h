//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserDataControls_ApiRequestHeader, GTLRUserDataControls_UserEnvironment, NSArray, NSString;

@interface GTLRUserDataControls_FetchConsentConfigRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
@property(nonatomic) long long viewTypeAsEnum;
@property(nonatomic) long long forNewValueAsEnum;

// Remaining properties
@property(retain, nonatomic) GTLRUserDataControls_ApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(copy, nonatomic) NSString *ariAuditToken; // @dynamic ariAuditToken;
@property(retain, nonatomic) NSArray *clientManagedSettingStates; // @dynamic clientManagedSettingStates;
@property(copy, nonatomic) NSString *forNewValue; // @dynamic forNewValue;
@property(retain, nonatomic) NSArray *settingIds; // @dynamic settingIds;
@property(retain, nonatomic) GTLRUserDataControls_UserEnvironment *userEnvironment; // @dynamic userEnvironment;
@property(copy, nonatomic) NSString *viewType; // @dynamic viewType;

@end
