//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPTPartnerIntegrationAuthorizer, SPTPartnerIntegrationCategory, SPTPartnerTestManagerImplementation;

@interface SPTPartnerIntegrationSettingsSectionViewModel : NSObject
{
    _Bool _toggleSwitchOn;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_disclaimerText;
    NSString *_toggleAccessibilityLabel;
    NSArray *_items;
    SPTPartnerIntegrationCategory *_category;
    SPTPartnerIntegrationAuthorizer *_authorizer;
    SPTPartnerTestManagerImplementation *_testManager;
}

@property(readonly, nonatomic) SPTPartnerTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPartnerIntegrationAuthorizer *authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) SPTPartnerIntegrationCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic, getter=isToggleSwitchOn) _Bool toggleSwitchOn; // @synthesize toggleSwitchOn=_toggleSwitchOn;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *toggleAccessibilityLabel; // @synthesize toggleAccessibilityLabel=_toggleAccessibilityLabel;
@property(readonly, copy, nonatomic) NSString *disclaimerText; // @synthesize disclaimerText=_disclaimerText;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)toggleSwitchToState:(_Bool)arg1;
- (id)initWithCategory:(id)arg1 authorizer:(id)arg2 testManager:(id)arg3 updateHandler:(CDUnknownBlockType)arg4;

@end

