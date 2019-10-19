//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTSectionListDrawerObserver.h"

@class NSHashTable, NSString, YTIDrawerListRenderer;

@interface YTDrawerListSectionController : YTInnerTubeSectionController <YTSectionListDrawerObserver>
{
    YTIDrawerListRenderer *_model;
    NSHashTable *_headers;
    _Bool _headerRemoved;
}

@property(nonatomic) _Bool headerRemoved; // @synthesize headerRemoved=_headerRemoved;
- (void).cxx_destruct;
- (id)drawerProvider;
- (long long)viewState;
- (void)reloadMenuItem:(id)arg1;
- (void)didTapDropDown:(id)arg1;
- (void)didTapToggleExpand:(id)arg1;
- (void)drawerSubscriptionsDidChange;
- (void)drawerViewStateDidChange:(long long)arg1;
- (_Bool)handleReloadContinuationEvent:(id)arg1;
- (void)clearAndHandleEntries:(id)arg1 totalResults:(unsigned long long)arg2;
- (void)updateHeader:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (long long)numberOfItems;
- (void)loadWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
