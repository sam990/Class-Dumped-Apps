//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLivePopUpView.h"

@class UIButton, UILabel;
@protocol HTSLiveInteractionEntranceProvider, HTSLiveInteractiveAnchorActions, HTSLiveViewHierarchyProvider, IESLiveTracker;

@interface IESLiveMultiAuidoStartPanel : HTSLivePopUpView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_startButton;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <IESLiveTracker> _tracker;
    id <HTSLiveInteractiveAnchorActions> _dispatcher;
}

@property(retain, nonatomic) id <HTSLiveInteractiveAnchorActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)startMultiAudio;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

