//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAppStoreEndpoint, YTIApplicationHelpEndpoint, YTIBrowseEndpoint, YTICommand, YTIDelayedCommand, YTIDisplayAdMacroExpanderCommand, YTIElementAction, YTIMenuEndpoint, YTIPerformCommentActionEndpoint, YTIRepeatedParallelCommand, YTISearchEndpoint, YTIShowAlertViewCommand, YTIShowBackstageFullscreenImageViewerCommand, YTIUrlEndpoint, YTIUserFeedbackEndpoint, YTIWatchEndpoint;

@interface YTIElementCommandContainer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUrlEndpoint *URLEndpoint; // @dynamic URLEndpoint;
@property(retain, nonatomic) YTIAppStoreEndpoint *appStoreEndpoint; // @dynamic appStoreEndpoint;
@property(retain, nonatomic) YTIApplicationHelpEndpoint *applicationHelpEndpoint; // @dynamic applicationHelpEndpoint;
@property(retain, nonatomic) YTIBrowseEndpoint *browseEndpoint; // @dynamic browseEndpoint;
@property(copy, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
@property(retain, nonatomic) YTIDelayedCommand *delayedCommand; // @dynamic delayedCommand;
@property(retain, nonatomic) YTIDisplayAdMacroExpanderCommand *displayAdMacroExpanderCommand; // @dynamic displayAdMacroExpanderCommand;
@property(retain, nonatomic) YTIElementAction *elementAction; // @dynamic elementAction;
@property(nonatomic) _Bool hasAppStoreEndpoint; // @dynamic hasAppStoreEndpoint;
@property(nonatomic) _Bool hasApplicationHelpEndpoint; // @dynamic hasApplicationHelpEndpoint;
@property(nonatomic) _Bool hasBrowseEndpoint; // @dynamic hasBrowseEndpoint;
@property(nonatomic) _Bool hasClickTrackingParams; // @dynamic hasClickTrackingParams;
@property(nonatomic) _Bool hasDelayedCommand; // @dynamic hasDelayedCommand;
@property(nonatomic) _Bool hasDisplayAdMacroExpanderCommand; // @dynamic hasDisplayAdMacroExpanderCommand;
@property(nonatomic) _Bool hasElementAction; // @dynamic hasElementAction;
@property(nonatomic) _Bool hasMenuEndpoint; // @dynamic hasMenuEndpoint;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPerformCommentActionEndpoint; // @dynamic hasPerformCommentActionEndpoint;
@property(nonatomic) _Bool hasRepeatedParallelCommand; // @dynamic hasRepeatedParallelCommand;
@property(nonatomic) _Bool hasSearchEndpoint; // @dynamic hasSearchEndpoint;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasShowAlertViewCommand; // @dynamic hasShowAlertViewCommand;
@property(nonatomic) _Bool hasShowBackstageFullscreenImageViewerCommand; // @dynamic hasShowBackstageFullscreenImageViewerCommand;
@property(nonatomic) _Bool hasURLEndpoint; // @dynamic hasURLEndpoint;
@property(nonatomic) _Bool hasUserFeedbackEndpoint; // @dynamic hasUserFeedbackEndpoint;
@property(nonatomic) _Bool hasWatchEndpoint; // @dynamic hasWatchEndpoint;
@property(retain, nonatomic) NSMutableArray *loggingUrlsArray; // @dynamic loggingUrlsArray;
@property(readonly, nonatomic) unsigned long long loggingUrlsArray_Count; // @dynamic loggingUrlsArray_Count;
@property(retain, nonatomic) YTIMenuEndpoint *menuEndpoint; // @dynamic menuEndpoint;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIPerformCommentActionEndpoint *performCommentActionEndpoint; // @dynamic performCommentActionEndpoint;
@property(retain, nonatomic) YTIRepeatedParallelCommand *repeatedParallelCommand; // @dynamic repeatedParallelCommand;
@property(retain, nonatomic) YTISearchEndpoint *searchEndpoint; // @dynamic searchEndpoint;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTIShowAlertViewCommand *showAlertViewCommand; // @dynamic showAlertViewCommand;
@property(retain, nonatomic) YTIShowBackstageFullscreenImageViewerCommand *showBackstageFullscreenImageViewerCommand; // @dynamic showBackstageFullscreenImageViewerCommand;
@property(retain, nonatomic) YTIUserFeedbackEndpoint *userFeedbackEndpoint; // @dynamic userFeedbackEndpoint;
@property(retain, nonatomic) YTIWatchEndpoint *watchEndpoint; // @dynamic watchEndpoint;

@end
