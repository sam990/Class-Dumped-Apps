//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, MGLMapView, NSArray, NSString, SCMapCamera, SCOnDemandGeofilterCreativeData, SCOnDemandGeofilterDataController, SCOnDemandGeofilterEventsLogger, SCOnDemandGeofilterEventsManager, SCOnDemandGeofilterMapboxItem, SCOnDemandLensTemplateModel, SCUserSession, SOJUSticker, SOJUUnlockablesOndemandCreateHomeFilterRequest, SOJUUnlockablesOndemandLineItem, SOJUUnlockablesOndemandTemplateCategory, UIView, UIViewController;
@protocol SCBitmojiImageFetcher, SCMapInstance, SCOnDemandGeofilterLayoutProvider, SCOnDemandGeofilterNetworkingProtocol, SCOnDemandLensAllTimeHitsTemplateDataStoreProtocol, SCOnDemandLensViewControllerProtocol, SCStickerProtocol;

@protocol SCOnDemandGeofilterSessionProtocol <NSObject>
@property(nonatomic) double homeFilterTimeInSecsBetweeenAddressUpdates;
@property(retain, nonatomic) SCOnDemandGeofilterMapboxItem *sessionLastSearchedMapboxItem;
@property(nonatomic) struct CLLocationCoordinate2D mapCenterCoordinate;
@property(retain, nonatomic) SOJUUnlockablesOndemandCreateHomeFilterRequest *createHomeFilterRequest;
@property(retain, nonatomic) SCOnDemandGeofilterCreativeData *creativeData;
@property(retain, nonatomic) SCOnDemandLensTemplateModel *lensReviewTemplateModel;
@property(retain, nonatomic) NSString *tosVersion;
@property(retain, nonatomic) SCMapCamera *sessionMapCamera;
@property(nonatomic, getter=isFirstTimeAccessMap) _Bool firstTimeAccessMap;
@property(nonatomic, getter=isNewUser) _Bool newUser;
- (id <SCOnDemandLensAllTimeHitsTemplateDataStoreProtocol>)onDemandLensAllTimeHitsTemplateDataStore;
- (NSString *)userEmail;
- (UIViewController<SCOnDemandLensViewControllerProtocol> *)onDemandLensViewControllerWithTemplateCategory:(SOJUUnlockablesOndemandTemplateCategory *)arg1 carouselParentView:(UIView *)arg2;
- (id <SCOnDemandGeofilterLayoutProvider>)layoutProvider;
- (_Bool)businessGeofiltersEnabled;
- (_Bool)personalGeofiltersEnabled;
- (_Bool)onboardingScreenForHomeFilterWasShown;
- (_Bool)mapViewHasBeenShownForUser;
- (_Bool)mapViewTooltipWasShown;
- (_Bool)templateTooltipWasShown;
- (void)cleanSessionGeofilterRelatedInfo;
- (void)cleanSessionEventData;
- (SCOnDemandGeofilterEventsLogger *)logger;
- (void)dismissStickerPicker;
- (void)imageForSticker:(id <SCStickerProtocol>)arg1 completion:(void (^)(UIImage *))arg2;
- (id <SCStickerProtocol>)SCStickerFromSOJUSticker:(SOJUSticker *)arg1;
- (void)presentStickerPickerFromView:(UIView *)arg1 belowSubview:(UIView *)arg2 completion:(void (^)(_Bool, id, struct CGPoint, UIImage *))arg3;
- (NSString *)userBitmojiId;
- (void)setEntryViewControllers:(NSArray *)arg1;
- (NSArray *)entryViewControllers;
- (UIViewController *)initialViewControllerWithCreateYourOwnFromMainCarousel:(_Bool)arg1;
- (UIViewController *)initialViewController;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (MGLMapView<SCMapInstance> *)mapViewWithFrame:(struct CGRect)arg1;
- (SCOnDemandGeofilterEventsManager *)eventsManager;
- (id <SCBitmojiImageFetcher>)bitmojiImageFetcher;
- (id <SCOnDemandGeofilterNetworkingProtocol>)networkManager;
- (CLLocation *)userLocation;
- (NSString *)userAgentHeader;
- (void)setFilterType:(unsigned long long)arg1;
- (unsigned long long)filterType;
@property(retain, nonatomic) SOJUUnlockablesOndemandLineItem *lineItem;
- (void)updateLineItemLocale;
- (void)updateLineItemWithUsageType:(long long)arg1;
- (void)updateLineItemWithGeofilterName:(NSString *)arg1;
- (SCOnDemandGeofilterDataController *)dataController;
- (SCUserSession *)userSession;
- (void)avatarCurrentPersonWithCompletion:(void (^)(UIImage *))arg1;
@end
