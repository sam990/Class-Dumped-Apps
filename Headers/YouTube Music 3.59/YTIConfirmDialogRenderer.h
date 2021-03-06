//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIConfirmDialogType, YTIDatas, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIConfirmDialogRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowClientPromoThrottling; // @dynamic allowClientPromoThrottling;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(retain, nonatomic) YTICommand *cancelEndpoint; // @dynamic cancelEndpoint;
@property(retain, nonatomic) YTIFormattedString *cancelLabel; // @dynamic cancelLabel;
@property(retain, nonatomic) YTIDatas *colorPalette; // @dynamic colorPalette;
@property(retain, nonatomic) NSMutableArray *confirmActionsArray; // @dynamic confirmActionsArray;
@property(readonly, nonatomic) unsigned long long confirmActionsArray_Count; // @dynamic confirmActionsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *confirmButton; // @dynamic confirmButton;
@property(retain, nonatomic) YTIConfirmDialogType *confirmDialogType; // @dynamic confirmDialogType;
@property(retain, nonatomic) YTICommand *confirmEndpoint; // @dynamic confirmEndpoint;
@property(retain, nonatomic) YTIFormattedString *confirmLabel; // @dynamic confirmLabel;
@property(retain, nonatomic) YTICommand *confirmNavigationEndpoint; // @dynamic confirmNavigationEndpoint;
@property(copy, nonatomic) NSString *dialogId; // @dynamic dialogId;
@property(retain, nonatomic) YTIFormattedString *dialogMessage; // @dynamic dialogMessage;
@property(retain, nonatomic) NSMutableArray *dialogMessagesArray; // @dynamic dialogMessagesArray;
@property(readonly, nonatomic) unsigned long long dialogMessagesArray_Count; // @dynamic dialogMessagesArray_Count;
@property(retain, nonatomic) YTIFormattedString *footerText; // @dynamic footerText;
@property(nonatomic) _Bool hasAllowClientPromoThrottling; // @dynamic hasAllowClientPromoThrottling;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasCancelEndpoint; // @dynamic hasCancelEndpoint;
@property(nonatomic) _Bool hasCancelLabel; // @dynamic hasCancelLabel;
@property(nonatomic) _Bool hasColorPalette; // @dynamic hasColorPalette;
@property(nonatomic) _Bool hasConfirmButton; // @dynamic hasConfirmButton;
@property(nonatomic) _Bool hasConfirmDialogType; // @dynamic hasConfirmDialogType;
@property(nonatomic) _Bool hasConfirmEndpoint; // @dynamic hasConfirmEndpoint;
@property(nonatomic) _Bool hasConfirmLabel; // @dynamic hasConfirmLabel;
@property(nonatomic) _Bool hasConfirmNavigationEndpoint; // @dynamic hasConfirmNavigationEndpoint;
@property(nonatomic) _Bool hasDialogId; // @dynamic hasDialogId;
@property(nonatomic) _Bool hasDialogMessage; // @dynamic hasDialogMessage;
@property(nonatomic) _Bool hasFooterText; // @dynamic hasFooterText;
@property(nonatomic) _Bool hasHeaderImage; // @dynamic hasHeaderImage;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasPrimaryIsCancel; // @dynamic hasPrimaryIsCancel;
@property(nonatomic) _Bool hasShowLoadingSpinner; // @dynamic hasShowLoadingSpinner;
@property(nonatomic) _Bool hasShowLoadingSpinnerOnAction; // @dynamic hasShowLoadingSpinnerOnAction;
@property(nonatomic) _Bool hasSkipCancelButton; // @dynamic hasSkipCancelButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *headerImage; // @dynamic headerImage;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *onClosedActionsArray; // @dynamic onClosedActionsArray;
@property(readonly, nonatomic) unsigned long long onClosedActionsArray_Count; // @dynamic onClosedActionsArray_Count;
@property(retain, nonatomic) NSMutableArray *onDismissCommandsArray; // @dynamic onDismissCommandsArray;
@property(readonly, nonatomic) unsigned long long onDismissCommandsArray_Count; // @dynamic onDismissCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *onOpenCommandsArray; // @dynamic onOpenCommandsArray;
@property(readonly, nonatomic) unsigned long long onOpenCommandsArray_Count; // @dynamic onOpenCommandsArray_Count;
@property(nonatomic) _Bool primaryIsCancel; // @dynamic primaryIsCancel;
@property(nonatomic) _Bool showLoadingSpinner; // @dynamic showLoadingSpinner;
@property(nonatomic) _Bool showLoadingSpinnerOnAction; // @dynamic showLoadingSpinnerOnAction;
@property(nonatomic) _Bool skipCancelButton; // @dynamic skipCancelButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

