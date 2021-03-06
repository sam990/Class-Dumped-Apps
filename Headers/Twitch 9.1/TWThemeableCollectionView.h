//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <TwitchCoreUI/TWThemeableByThemeManager-Protocol.h>

@class NSString;
@protocol TWTheme, TWThemeManager;

@interface TWThemeableCollectionView : UICollectionView <TWThemeableByThemeManager>
{
    _Bool _invalidateLayoutOnCollectionViewWidthChange;
    id <TWThemeManager> _themeManager;
    id <TWTheme> _lastConfiguredTheme;
    double _lastWidth;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(retain, nonatomic) id <TWTheme> lastConfiguredTheme; // @synthesize lastConfiguredTheme=_lastConfiguredTheme;
@property(nonatomic) _Bool invalidateLayoutOnCollectionViewWidthChange; // @synthesize invalidateLayoutOnCollectionViewWidthChange=_invalidateLayoutOnCollectionViewWidthChange;
@property(readonly, nonatomic) id <TWThemeManager> themeManager; // @synthesize themeManager=_themeManager;
- (void)listenToThemeChanges;
- (void)applyTheme:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (void)updateTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateLayoutIfNeeded;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 themeManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

