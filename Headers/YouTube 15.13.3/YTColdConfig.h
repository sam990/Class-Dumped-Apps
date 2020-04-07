//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXColdConfig-Protocol.h>
#import <Module_Framework/YTEntitiesConfig-Protocol.h>
#import <Module_Framework/YTFlowLoggingConfig-Protocol.h>
#import <Module_Framework/YTIdentityStateLoggingConfig-Protocol.h>
#import <Module_Framework/YTOrientationInfoLoggingConfig-Protocol.h>

@class NSArray, NSString, YTIColdConfigGroup, YTIIosMediaColdConfig, YTIMigratedGlobalConfigsColdConfig, YTUserDefaults;

@interface YTColdConfig : NSObject <MDXColdConfig, YTFlowLoggingConfig, YTIdentityStateLoggingConfig, YTOrientationInfoLoggingConfig, YTEntitiesConfig>
{
    YTIColdConfigGroup *_coldConfigGroup;
    YTUserDefaults *_userDefaults;
}

+ (unsigned int)defaultCellLayoutMode;
@property(readonly, nonatomic) YTIColdConfigGroup *coldConfigGroup; // @synthesize coldConfigGroup=_coldConfigGroup;
- (void).cxx_destruct;
- (id)configData;
- (id)storedConfigHashData;
- (id)initWithUserDefaults:(id)arg1;
- (unsigned long long)numberOfItemsToKeepOnCommentReload;
- (_Bool)enableKeyboardWithoutAccessoryViewIos;
- (_Bool)enableCommentTeasersIos;
- (_Bool)enableCommentSectionIdentifierWithoutHeader;
- (_Bool)enableCloseKeyboardOnNavigateIos;
- (id)commerceColdConfig;
- (void)setYtoLightThemeEnabled:(_Bool)arg1;
- (_Bool)ytoLightThemeEnabled;
- (id)commerceLibColdConfig;
- (id)MDXColdConfig;
- (id)MDXGlobalConfig;
@property(readonly, nonatomic) long long maxDetectedScreensEligibleForNotifications;
@property(readonly, nonatomic, getter=isSeamlessDelegateAccountSignInEnabled) _Bool seamlessDelegateAccountSignInEnabled;
@property(readonly, nonatomic, getter=isCastToNativeEnabled) _Bool castToNativeEnabled;
@property(readonly, nonatomic, getter=isMigratedSeamlessSignInAuthComponentEnabled) _Bool migratedSeamlessSignInAuthComponentEnabled;
@property(readonly, nonatomic, getter=isNewTVCodeDesignEnabled) _Bool newTVCodeDesignEnabled;
@property(readonly, nonatomic, getter=isLinkTVCodeEnabled) _Bool linkTVCodeEnabled;
@property(readonly, nonatomic, getter=isRemoteButtonsInCastDialogEnabled) _Bool remoteButtonsInCastDialogEnabled;
@property(readonly, nonatomic, getter=isFloatyBarIntegrationEnabled) _Bool floatyBarIntegrationEnabled;
@property(readonly, nonatomic) double mealbarPromotedLiveFeedChannelsThrottleSeconds;
@property(readonly, nonatomic) NSArray *mealbarPromotedLiveFeedChannels;
@property(readonly, nonatomic, getter=isMealbarPromotedLiveFeedChannelsEnabled) _Bool mealbarPromotedLiveFeedChannelsEnabled;
@property(readonly, nonatomic, getter=isRetryConnectionFailureEnabled) _Bool retryConnectionFailureEnabled;
@property(readonly, nonatomic) _Bool ignorePendingDIALRequestsAfterConnecting;
@property(readonly, nonatomic, getter=isVolumeDialogEnabled) _Bool volumeDialogEnabled;
@property(readonly, nonatomic, getter=isQuickPreviewDialogEnabled) _Bool quickPreviewDialogEnabled;
@property(readonly, nonatomic, getter=isNotificationRevocationEnabled) _Bool notificationRevocationEnabled;
@property(readonly, nonatomic, getter=isErrorDialogForMDXConnectionsEnabled) _Bool errorDialogForMDXConnectionsEnabled;
@property(readonly, nonatomic) double notificationTTLSeconds;
@property(readonly, nonatomic) double backgroundScanTimeoutSeconds;
@property(readonly, nonatomic) long long assistedSignInQuietPeriodDays;
@property(readonly, nonatomic, getter=isAssistedSignInFromWatchEnabled) _Bool assistedSignInFromWatchEnabled;
@property(readonly, nonatomic, getter=isAssistedSignInEnabled) _Bool assistedSignInEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteExperimentOverrideEnabled) _Bool smartRemoteExperimentOverrideEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteMealbarEnabled) _Bool smartRemoteMealbarEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteEnabled) _Bool smartRemoteEnabled;
@property(readonly, nonatomic, getter=isPersistentCastIconEnabled) _Bool persistentCastIconEnabled;
@property(readonly, nonatomic) NSString *impactedSessionServerEvent;
@property(readonly, nonatomic) long long notificationReceptionQuietPeriodMinutes;
@property(readonly, nonatomic, getter=areClientSideNotificationsEnabled) _Bool clientSideNotificationsEnabled;
@property(readonly, nonatomic, getter=areNotificationsEnabledViaGELLog) _Bool notificationsEnabledViaGELLog;
@property(readonly, nonatomic, getter=isLocalTransportEncryptionEnabled) _Bool localTransportEncryptionEnabled;
@property(readonly, nonatomic, getter=isWakeOnLANEnabled) _Bool wakeOnLANEnabled;
- (_Bool)shouldVideoRepairWorkerPauseVideosMissingStreams;
- (_Bool)isVideoDownloadWorkerMigrationEnabled;
- (_Bool)shouldLogOfflineTransferStatusViaFlowLogging;
- (_Bool)isLogPendingStateWithSuspendedEnabled;
- (_Bool)isLogPendingStateWithATQEnabled;
- (_Bool)isMissingWorkerFailureLoggingEnabled;
- (_Bool)isExpiredStreamLoggingEnabled;
- (_Bool)isThumbnailDownloadOrderEnabled;
- (_Bool)isCacheImageDirectoryEnabled;
- (_Bool)isOfflineRefreshImprovementsEnabled;
- (_Bool)isThumbnailFileOperationsOnBackgroundThreadEnabled;
- (_Bool)isThumbnailWorkerDuringPlaybackEnabled;
- (_Bool)isThumbnailRemoteURLFallbackEnabled;
- (long long)thumbnailDownloadWorkerConcurrentTaskCount;
- (_Bool)isRelaxedDownloadApprovalsForPlaylistSyncEnabled;
- (_Bool)isSuspendedStateLoggingEnabled;
- (_Bool)isKidsAutoOfflineInterleavingEnabled;
- (_Bool)isOfflineWorkerLazyRegistrationEnabled;
- (float)getIncludeDebugMetadataPercentage;
- (_Bool)enableCacheOpenedAppstorePanel;
- (id)getActiveViewDisplayConfig;
- (_Bool)enablePauseVideoForUrlEndpoints;
- (_Bool)enableAutoscrollToCompanionAd;
- (_Bool)enableSpamSignalsSkip;
- (_Bool)allowRenderingViewHiding;
- (_Bool)resumeOfflinePlaybackEnabled;
- (long long)prewarmHTTPConnectionCount;
- (id)prewarmHTTPConnectionURLString;
@property(readonly, nonatomic) YTIIosMediaColdConfig *mediaColdConfig;
- (_Bool)isDebugCrashyConfigEnabled;
- (unsigned int)restoreVideoAfterCrashToastDuration;
- (unsigned int)restoreVideoAfterCrashTimeoutDisplayDialogS;
- (unsigned int)restoreVideoAfterCrashMs;
- (id)uploadsColdConfig;
- (_Bool)useExplicitUploadFlowForUploadType:(int)arg1;
- (_Bool)isReelsTransferPriorUserConfirmationEnabled;
- (_Bool)isMobileUploadsBotguardEnabled;
- (_Bool)isAudioSwapForNormalUploadsDisabled;
- (_Bool)explicitFlowFileCopyingEnabled;
- (_Bool)useExplicitUploadFlowForArchiveReplacementUploads;
- (_Bool)resetGuestVisitorDataEnabled;
- (_Bool)disableAddAccountOnSwitcher;
- (_Bool)enableOnegoogleAccountSwitcher;
- (_Bool)enableOnegoogleAccountManager;
- (_Bool)enableWebKitForSSO;
- (_Bool)isMentionWithCommandsEnabled;
- (_Bool)isUpdateTooltipToSpecEnabled;
- (_Bool)isIosNewIconsEnabled;
- (_Bool)enableSynchronousPromise;
- (unsigned long long)maxReportedResourceCount;
- (_Bool)updateCollectionViewBeforeBoundsChange;
- (_Bool)isEkoCanaryReleaseChannelEnabled;
- (_Bool)isGlobalThemeSwapEnabled;
- (_Bool)isElementsInteractionLoggerEnabled;
- (_Bool)isThemeSwapEnabled;
- (_Bool)isMotionInteractionHandlersEnabled;
- (id)textureBaseConfiguration;
- (_Bool)shouldEnableElementsFrameworkInitialization;
- (_Bool)isCarrotStyleBackButtonEnabled;
- (_Bool)isIconColorMigrationEnabled;
- (_Bool)isBlueColorMigrationEnabled;
- (_Bool)isUpdateFontsEnabled;
- (_Bool)reloadedVisibleIndexPathVisibilityGatingEnabled;
- (unsigned long long)maxConcurrentImageDownloads;
- (_Bool)isTextureImageDownloaderEnabled;
- (_Bool)isElementsYTRLandingPageEnabledForBrowseId:(id)arg1;
- (id)elementsConfigurationForIdentifier:(id)arg1;
- (id)elementsConfigurationDictionary;
- (unsigned int)cellLayoutMode;
- (_Bool)isAsyncStatusViewEnabled;
- (float)logScrollEventsSampleRate;
- (id)textureRangeConfig;
- (_Bool)textureSyncDataLoading;
- (unsigned int)diskImageCacheBytes;
- (_Bool)isTextureEnabledOnSearch;
- (_Bool)isTextureEnabled;
- (_Bool)isStatusViewDisabledForTexture;
- (id)watchNextTransformableRenderers;
- (_Bool)isTextureBlacklistedForWatchNext;
- (_Bool)isTextureEnabledForWatchNext;
- (_Bool)isTextureEnabledForCommunityTabWithBrowseId:(id)arg1 params:(id)arg2;
- (_Bool)enabledClientStreamzHashing;
- (_Bool)disableGelTransmitter;
- (unsigned int)eventCountThreshold;
- (unsigned int)intervalThresholdInS;
- (_Bool)enableClientStreamz;
- (_Bool)isFlowLoggingEnabled;
- (float)fractionOfRunsToSample;
- (_Bool)isOrientationInfoLoggingEnabled;
- (_Bool)isIdentityStateLoggingEnabled;
- (void)applyNetConfig;
- (_Bool)enableInMemoryEntityStoreV2;
- (unsigned int)persistentEntityStoreCachingEntryLimit;
- (_Bool)enableCachingInPersistentEntityStore;
- (_Bool)enableEntityStoreUpdateSupport;
- (_Bool)enableEntityStoreQuerySupport;
- (unsigned int)maximumErrorLoggingCount;
- (_Bool)enableGELErrorLogging;
- (_Bool)enableMemoryWarningEviction;
- (double)minimumKeepUntilInterval;
- (_Bool)enableEntityStoreEviction;
- (_Bool)omitClickTrackingParamsFromCacheKeys;
- (_Bool)enableThreadsafeLact;
- (_Bool)enableClientBindingPrivateQueue;
- (_Bool)enableInnertubeConsistencyTokenJar;
- (_Bool)enableBlobStorageOfflineSettings;
- (_Bool)enableBlobStorageOfflineGuide;
- (_Bool)enableBlobStoragePushNotificationRequest;
- (float)thumbnailLatencyLoggingSampleFraction;
- (double)iosInnertubeRequestDefaultTimeout;
- (_Bool)hasDefaultInnerTubeTimeoutInterval;
- (double)iosInnertubeRequestDefaultMaxRetryInterval;
- (_Bool)hasIosInnertubeRequestDefaultMaxRetryInterval;
- (unsigned int)iosInnertubeRequestDefaultRetryCount;
- (_Bool)hasIosInnertubeRequestDefaultRetryCount;
- (_Bool)imageServiceLogCacheHits;
- (float)imageServiceMemoryCacheLimitFractionOfMemory;
- (unsigned int)imageServiceMemoryCacheLimitInMb;
- (unsigned int)imageServiceDiskCacheLimitInMb;
- (_Bool)imageServiceEnableDiskCache;
- (_Bool)imageServiceRespectHttpCacheHeaders;
@property(readonly, nonatomic) YTIMigratedGlobalConfigsColdConfig *migratedGlobalConfigs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
