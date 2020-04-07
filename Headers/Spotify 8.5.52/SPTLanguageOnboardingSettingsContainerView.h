//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTActivityIndicatorView, SPTLanguageOnboardingOfflineView, UITableView;

@interface SPTLanguageOnboardingSettingsContainerView : UIView <GLUEStyleable>
{
    long long _containerViewState;
    UITableView *_tableView;
    SPTLanguageOnboardingOfflineView *_offlineView;
    SPTActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) SPTActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SPTLanguageOnboardingOfflineView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long containerViewState; // @synthesize containerViewState=_containerViewState;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setUpConstraintsWithStyle:(id)arg1;
- (void)updateContainerViewState;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
