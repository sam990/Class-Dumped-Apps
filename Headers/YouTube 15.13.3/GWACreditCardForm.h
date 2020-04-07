//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAForm-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWACreditCardFormFlowSection, GWALegalMessageFlowSection, GWAMegalogsContext, GWANameFormFlowSection, NSArray, NSNumber, NSString;
@protocol GWAForm;

@interface GWACreditCardForm : NSObject <GWAForm, GWAMegalogsSupportingComponent>
{
    id <GWAForm> _addressForm;
    GWALegalMessageFlowSection *_legalMessageSection;
    GWACreditCardFormFlowSection *_creditCardSection;
    GWANameFormFlowSection *_nameSection;
    NSArray *_sections;
    NSString *_formId;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (id)displaySummary;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)sections;
- (id)initWithCreditCardForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
