//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKCategoryModel-Protocol.h"

@class GDKCategoryParams, GSCImageFetcher, GSCImageFetcherCache, GSCImageUrlOptions, NSString;
@protocol GDKCategoryFetching;

@interface GDKCategoryModel : NSObject <GDKCategoryModel>
{
    id <GDKCategoryFetching> _categoryFetcher;
    GDKCategoryParams *_params;
    GSCImageFetcher *_imageFetcher;
    GSCImageFetcherCache *_imageFetcherCache;
    GSCImageUrlOptions *_imageUrlOptions;
}

@property(readonly, nonatomic) GSCImageUrlOptions *imageUrlOptions; // @synthesize imageUrlOptions=_imageUrlOptions;
@property(readonly, nonatomic) GSCImageFetcherCache *imageFetcherCache; // @synthesize imageFetcherCache=_imageFetcherCache;
@property(readonly, nonatomic) GSCImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(readonly, nonatomic) GDKCategoryParams *params; // @synthesize params=_params;
@property(readonly, nonatomic) id <GDKCategoryFetching> categoryFetcher; // @synthesize categoryFetcher=_categoryFetcher;
- (void).cxx_destruct;
- (id)cellModelsForAttributes:(id)arg1;
- (id)categoryHeaderModelForSchema:(id)arg1;
- (id)fetchImageForUser:(id)arg1;
- (_Bool)shouldShowEmptyViewForState:(id)arg1;
- (_Bool)shouldShowErrorForState:(id)arg1;
- (id)sectionsForState:(id)arg1;
- (id)hasPublishedCategories;
- (id)fetchCategories;
- (id)initWithParams:(id)arg1 categoryFetcher:(id)arg2 imageFetcher:(id)arg3 imageFetcherCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

