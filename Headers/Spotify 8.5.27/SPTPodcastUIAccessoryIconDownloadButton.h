//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastUIAccessoryIconButton.h"

#import "SPTPodcastUIDownloadButton-Protocol.h"

@class NSString, UIView;
@protocol GLUEStatefulAnimationLoading><GLUEStatefulAnimationControlling><GLUEAnimationControlling, GLUETheme;

@interface SPTPodcastUIAccessoryIconDownloadButton : SPTPodcastUIAccessoryIconButton <SPTPodcastUIDownloadButton>
{
    _Bool _granularDownloadProgressEnabled;
    long long _currentStatus;
    struct UIView *_animationView;
    id <GLUETheme> _theme;
    double _currentProgress;
}

+ (id)accessibilityLabelForStatus:(long long)arg1;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) _Bool granularDownloadProgressEnabled; // @synthesize granularDownloadProgressEnabled=_granularDownloadProgressEnabled;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView<GLUEStatefulAnimationLoading><GLUEStatefulAnimationControlling><GLUEAnimationControlling> *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)configureAnimationStatesGranular;
- (void)configureAnimationTransitionsGranular;
- (void)configureAnimationStates;
- (void)configureAnimationTransitions;
- (void)glue_applyStyle:(id)arg1;
- (void)updateAnimationProgress:(double)arg1;
- (void)updateCurrentProgressForSyncStatus:(long long)arg1;
- (void)updateOfflineSyncStatus:(long long)arg1 withTheme:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 granularDownloadProgressEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
