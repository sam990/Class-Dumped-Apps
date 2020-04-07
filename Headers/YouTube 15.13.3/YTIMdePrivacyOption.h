//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString, YTIMdePrivacyScheduleSupportedRenderers, YTIRenderer;

@interface YTIMdePrivacyOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *confirmationAffirmativeText; // @dynamic confirmationAffirmativeText;
@property(retain, nonatomic) YTIFormattedString *confirmationMessage; // @dynamic confirmationMessage;
@property(retain, nonatomic) YTIFormattedString *confirmationNegativeText; // @dynamic confirmationNegativeText;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasConfirmationAffirmativeText; // @dynamic hasConfirmationAffirmativeText;
@property(nonatomic) _Bool hasConfirmationMessage; // @dynamic hasConfirmationMessage;
@property(nonatomic) _Bool hasConfirmationNegativeText; // @dynamic hasConfirmationNegativeText;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasHelpButton; // @dynamic hasHelpButton;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasStatusSchedule; // @dynamic hasStatusSchedule;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIRenderer *helpButton; // @dynamic helpButton;
@property(nonatomic) int privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIMdePrivacyScheduleSupportedRenderers *statusSchedule; // @dynamic statusSchedule;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end
