//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SPTFreeTierTasteOnboardingArtistCellStyle, SPTFreeTierTasteOnboardingArtistPickerViewLogger, SPTFreeTierTasteOnboardingArtistPickerViewModel, SPTFreeTierTasteOnboardingGenreCellStyle, SPTFreeTierTasteOnboardingTheme, SPTPerformanceMetricsViewLoggerImageLoaderObserver, UICollectionView, UICollectionViewFlowLayout, UIImage;
@protocol GLUEStyle, SPTFreeTierTasteOnboardingArtistPickerDataSourceDelegate, SPTFreeTierTasteOnboardingTestManager, SPTGLUEObservableImageLoader;

@interface SPTFreeTierTasteOnboardingArtistPickerDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <SPTFreeTierTasteOnboardingArtistPickerDataSourceDelegate> _delegate;
    SPTFreeTierTasteOnboardingArtistPickerViewModel *_viewModel;
    SPTFreeTierTasteOnboardingArtistPickerViewLogger *_logger;
    SPTFreeTierTasteOnboardingTheme *_theme;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    id <SPTGLUEObservableImageLoader> _imageLoader;
    SPTPerformanceMetricsViewLoggerImageLoaderObserver *_imageLoaderObserver;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    SPTFreeTierTasteOnboardingArtistCellStyle<GLUEStyle> *_artistCellStyle;
    SPTFreeTierTasteOnboardingGenreCellStyle<GLUEStyle> *_genreCellStyle;
    UIImage *_badgeCheckmarkImage;
    UIImage *_badgeHornsImage;
}

@property(retain, nonatomic) UIImage *badgeHornsImage; // @synthesize badgeHornsImage=_badgeHornsImage;
@property(retain, nonatomic) UIImage *badgeCheckmarkImage; // @synthesize badgeCheckmarkImage=_badgeCheckmarkImage;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingGenreCellStyle<GLUEStyle> *genreCellStyle; // @synthesize genreCellStyle=_genreCellStyle;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistCellStyle<GLUEStyle> *artistCellStyle; // @synthesize artistCellStyle=_artistCellStyle;
@property(nonatomic) __weak UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) SPTPerformanceMetricsViewLoggerImageLoaderObserver *imageLoaderObserver; // @synthesize imageLoaderObserver=_imageLoaderObserver;
@property(readonly, nonatomic) id <SPTGLUEObservableImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistPickerViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak SPTFreeTierTasteOnboardingArtistPickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingArtistPickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *selectedItemURIs;
- (void)scrollIndexPathsToVisible:(id)arg1 animated:(_Bool)arg2;
- (id)collectionView:(id)arg1 genreCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 artistCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)registerWithCollectionView:(id)arg1 collectionViewFlowLayout:(id)arg2;
- (id)initWithViewModel:(id)arg1 logger:(id)arg2 theme:(id)arg3 imageLoader:(id)arg4 viewLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

