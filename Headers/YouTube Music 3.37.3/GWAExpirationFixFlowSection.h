//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOTextFieldValidator-Protocol.h"
#import "GWACollapsibleFlowSection-Protocol.h"
#import "GWAFocusDelegate-Protocol.h"
#import "GWAMegalogsSupporting-Protocol.h"
#import "GWASummaryViewDelegate-Protocol.h"

@class GWAComponentGroup, GWACreditCardMetadataFieldView, GWAFlowContext, GWAInfoMessageView, GWAMegalogsContext, NSArray, NSMutableDictionary, NSNumber, NSString, OrchCreditCardUpdateForm, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate, NSCopying;

@interface GWAExpirationFixFlowSection : NSObject <GOOTextFieldValidator, GWAFocusDelegate, GWASummaryViewDelegate, GWACollapsibleFlowSection, GWAMegalogsSupporting>
{
    OrchCreditCardUpdateForm *_proto;
    GWAFlowContext *_context;
    GWAInfoMessageView *_headerMessageView;
    GWACreditCardMetadataFieldView *_row;
    NSMutableDictionary *_serverErrors;
    NSMutableDictionary *_fieldsToValidate;
    UIImage *_cvcHintImage;
    _Bool _hasBeenExpanded;
    _Bool _shouldHideCVC;
    _Bool _shouldHideExpirationDate;
    id <NSCopying> _parentID;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (void)summaryViewTap:(id)arg1;
- (void)fieldChanged:(id)arg1;
- (unsigned long long)getSectionToFocus;
- (id)initialExpirationDateValue;
- (_Bool)cvcIsValid;
- (_Bool)expirationDateIsValid;
- (void)advance;
- (void)cvcChanged;
- (void)expirationDateChanged;
- (id)row;
- (id)headerMessageView;
- (id)summaryView;
- (void)viewUnfocused:(id)arg1;
- (void)viewFocused:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (id)firstFocusableIndexPath;
- (id)nextIndexPathToFocus:(id)arg1;
- (id)firstIndexPathToFocus;
- (void)handleErrorMessage:(id)arg1;
- (void)validate;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
- (id)value;
- (void)dealloc;
- (id)initWithProto:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end
