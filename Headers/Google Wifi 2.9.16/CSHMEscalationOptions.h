//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CSHMChatOptions, CSHMClickToCallOptions, CSHMEmailOptions, CSHMEnterpriseSupportOptions, CSHMEscalationOptionsDisplayPreference, CSHMFeelingLuckyOptions, CSHMGkmsSettings, CSHMHangoutOptions, CSHMPhoneOptions, CSHMProductContactIssueClasses, NSMutableArray, NSString;

@interface CSHMEscalationOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *apiURLFormat; // @dynamic apiURLFormat;
@property(retain, nonatomic) NSMutableArray *channelMetadataArray; // @dynamic channelMetadataArray;
@property(readonly, nonatomic) unsigned long long channelMetadataArray_Count; // @dynamic channelMetadataArray_Count;
@property(retain, nonatomic) CSHMChatOptions *chat; // @dynamic chat;
@property(retain, nonatomic) CSHMClickToCallOptions *clickToCall; // @dynamic clickToCall;
@property(retain, nonatomic) CSHMProductContactIssueClasses *contactIssueClasses; // @dynamic contactIssueClasses;
@property(retain, nonatomic) CSHMEscalationOptionsDisplayPreference *displayPreference; // @dynamic displayPreference;
@property(retain, nonatomic) CSHMEmailOptions *email; // @dynamic email;
@property(retain, nonatomic) CSHMEnterpriseSupportOptions *enterpriseSupport; // @dynamic enterpriseSupport;
@property(retain, nonatomic) CSHMFeelingLuckyOptions *feelingLucky; // @dynamic feelingLucky;
@property(retain, nonatomic) CSHMGkmsSettings *gkmsSettings; // @dynamic gkmsSettings;
@property(retain, nonatomic) CSHMHangoutOptions *hangout; // @dynamic hangout;
@property(nonatomic) _Bool hasApiURLFormat; // @dynamic hasApiURLFormat;
@property(nonatomic) _Bool hasChat; // @dynamic hasChat;
@property(nonatomic) _Bool hasClickToCall; // @dynamic hasClickToCall;
@property(nonatomic) _Bool hasContactIssueClasses; // @dynamic hasContactIssueClasses;
@property(nonatomic) _Bool hasDisplayPreference; // @dynamic hasDisplayPreference;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasEnterpriseSupport; // @dynamic hasEnterpriseSupport;
@property(nonatomic) _Bool hasFeelingLucky; // @dynamic hasFeelingLucky;
@property(nonatomic) _Bool hasGkmsSettings; // @dynamic hasGkmsSettings;
@property(nonatomic) _Bool hasHangout; // @dynamic hasHangout;
@property(nonatomic) _Bool hasPhone; // @dynamic hasPhone;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) _Bool hasRenderingURLFormat; // @dynamic hasRenderingURLFormat;
@property(retain, nonatomic) CSHMPhoneOptions *phone; // @dynamic phone;
@property(nonatomic) int productId; // @dynamic productId;
@property(copy, nonatomic) NSString *renderingURLFormat; // @dynamic renderingURLFormat;

@end
