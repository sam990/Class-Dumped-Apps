//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPOINearBySecondaryBannerViewDelegate-Protocol.h"
#import "AWEWaterFallSectionControllerProtocol-Protocol.h"

@class AWEPOIEntriesView, AWEPOINearBySecondaryBannerView, AWEWaterFallSectionCollectionContext, NSMutableArray, NSString;

@interface AWENearbyHeaderSectionController : NSObject <AWEPOINearBySecondaryBannerViewDelegate, AWEWaterFallSectionControllerProtocol>
{
    AWEWaterFallSectionCollectionContext *collectionContext;
    AWEPOINearBySecondaryBannerView *_bannerView;
    AWEPOIEntriesView *_poiEntriesView;
    NSMutableArray *_cellItems;
}

@property(retain, nonatomic) NSMutableArray *cellItems; // @synthesize cellItems=_cellItems;
@property(retain, nonatomic) AWEPOIEntriesView *poiEntriesView; // @synthesize poiEntriesView=_poiEntriesView;
@property(retain, nonatomic) AWEPOINearBySecondaryBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) AWEWaterFallSectionCollectionContext *collectionContext; // @synthesize collectionContext;
- (void).cxx_destruct;
- (void)p_bindStateAndAction;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (id)constData;
- (id)store;
- (void)_updateCellItemWithData:(id)arg1 type:(unsigned long long)arg2;
- (void)_buildCellItems;
- (void)didSelectItem:(id)arg1;
- (void)didEndDisplayingItem:(id)arg1;
- (void)willDisplayItem:(id)arg1;
- (long long)columnCount;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItem:(id)arg1;
- (id)cellForItem:(id)arg1;
- (id)items;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
