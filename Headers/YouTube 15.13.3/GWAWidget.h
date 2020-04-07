//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAAddressFormatRetriever, GWAFlowContext, GWALabeledActivityIndicatorView, GWAMegalogsContext, GWAService, GWAWidgetOptions, NSArray, NSNumber, NSString, UIView, UIViewController;
@protocol GWAFlow, SSOAuthorization;

@interface GWAWidget : NSObject <GWAMegalogsSupportingComponent>
{
    GWAFlowContext *_context;
    id <GWAFlow> _flow;
    GWALabeledActivityIndicatorView *_activityIndicatorView;
    NSString *_activityIndicatorLabel;
    GWAAddressFormatRetriever *_addressFormatRetriever;
    UIViewController *_presentingViewController;
    UIView *_embeddingView;
    id <SSOAuthorization> _ssoAuth;
    _Bool _inProgress;
    GWAService *_addressMetadataService;
    GWAService *_service;
    GWAMegalogsContext *_megalogsContext;
    GWAMegalogsContext *_parentMegalogsContext;
    _Bool _ignoreNextSubmitResponse;
    _Bool _paymentsLoggingForO2Enabled;
    GWAWidgetOptions *_widgetOptions;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

+ (unsigned long long)componentIDForType:(long long)arg1;
+ (id)widgetForReference:(id)arg1 context:(id)arg2 delegate:(id)arg3;
@property(nonatomic, getter=isPaymentsLoggingForO2Enabled) _Bool paymentsLoggingForO2Enabled; // @synthesize paymentsLoggingForO2Enabled=_paymentsLoggingForO2Enabled;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAWidgetOptions *widgetOptions; // @synthesize widgetOptions=_widgetOptions;
- (void)setIgnoreNextSubmitResponse:(_Bool)arg1;
- (_Bool)ignoreNextSubmitResponse;
- (void).cxx_destruct;
- (void)wrapUpMegalogsContexts;
- (void)prepareMegalogsContexts;
- (void)setActivityIndicatorView:(id)arg1;
- (id)addressMetadataService;
- (_Bool)shouldUseCollectionFlow;
- (Class)submitResponseClass;
- (id)submitPath;
- (Class)refreshResponseClass;
- (id)refreshPath;
- (Class)initializeResponseClass;
- (id)initializePath;
- (id)baseServicePath;
- (id)service;
- (void)updateFlowInstruction:(id)arg1;
- (_Bool)isFlowComplete;
- (void)close;
- (id)addressFormatRetriever;
- (void)hideActivityIndicator;
- (void)showActivityIndicatorWithLabel:(id)arg1;
- (void)showActivityIndicator;
- (void)setActivityIndicatorLabel:(id)arg1;
- (id)activityIndicatorView;
- (id)newCollectionViewFlow;
- (id)newFlow;
- (id)topFlow;
- (id)flow;
- (void)setFlow:(id)arg1;
- (void)launchOverlay;
- (void)updatePartialPage:(id)arg1;
- (void)displayPageDetails:(id)arg1;
- (void)handlePageDetails:(id)arg1;
- (void)flow:(id)arg1 wantsI18NDataForCountryCode:(id)arg2 withAddressValidationToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)flow:(id)arg1 wantsI18NDataForCountryCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)flow:(id)arg1 submittedWithValue:(id)arg2 showActivityIndicator:(_Bool)arg3;
- (void)presentWidget;
- (void)closeOverlayAndSubmitMainPageWithDependencyGraphToken:(id)arg1;
- (void)flowFinishedWithSuccess:(_Bool)arg1 integratorCallbackData:(id)arg2 error:(id)arg3;
- (void)tearDownWithSuccess:(_Bool)arg1 integratorCallbackData:(id)arg2 error:(id)arg3;
- (void)setSsoAuth:(id)arg1;
- (id)ssoAuth;
@property(readonly, nonatomic) GWAFlowContext *context;
- (id)embeddingView;
- (void)setEmbeddingView:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void)initializeWidget;
- (void)tearDownWidget;
- (_Bool)isSendSubmitActionValid:(id)arg1 withFlow:(id)arg2;
- (void)presentWidgetFromViewController:(id)arg1 embeddedInView:(id)arg2;
- (void)presentWidgetFromViewController:(id)arg1;
- (id)initWithWidgetType:(long long)arg1 environment:(long long)arg2 designStyle:(unsigned long long)arg3 interfaceStyle:(unsigned long long)arg4;
- (id)initWithWidgetType:(long long)arg1 environment:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
