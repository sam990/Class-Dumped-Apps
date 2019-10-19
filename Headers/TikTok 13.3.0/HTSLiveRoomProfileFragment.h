//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLiveRoomProfileReaction-Protocol.h"
#import "HTSLiveRoomRemoteActions-Protocol.h"
#import "IESLiveRoomProfileRouter-Protocol.h"
#import "LiveUserProfileViewDelegate-Protocol.h"

@class HTSEventContext, HTSLiveAudienceListBView, HTSLiveDouplusMessage, HTSLiveRoomProfileStore, HTSLiveRoomUserSeqMessage, IESLiveComponentContext, IESLiveUserListView, LiveRoomModel, LiveUserProfileView, NSString, RACScopedDisposable, UILabel, UIView;
@protocol HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, HTSLivePluginLayoutMachineProvider, HTSLiveRoomProfileReaction, HTSLiveViewHierarchyProvider, IESActionDispatcher, IESLiveAlertFactory, IESLiveEnvironment, IESLiveSettings, IESLiveToastFactory, IESLiveTracker;

@interface HTSLiveRoomProfileFragment : NSObject <LiveUserProfileViewDelegate, CAAnimationDelegate, HTSLiveRoomProfileReaction, HTSLiveMessageSubscriber, HTSLiveRoomRemoteActions, IESLiveRoomProfileRouter, HTSLiveComponent>
{
    _Bool _isShowingAudiencelist;
    _Bool _titleDisplayed;
    _Bool _visible;
    HTSLiveRoomProfileStore *_profileStore;
    HTSEventContext *_trackContext;
    LiveRoomModel *_room;
    IESLiveComponentContext *_componentContext;
    LiveUserProfileView *_userProfileView;
    IESLiveUserListView *_userListView;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    RACScopedDisposable *_disposable;
    HTSLiveAudienceListBView *_audienceListBView;
    UILabel *_rightInfolabel;
    HTSLiveRoomUserSeqMessage *_message;
    HTSLiveDouplusMessage *_douPlusMessage;
    id <IESLiveSettings> _settings;
    id <IESLiveSettings> _iesliveSettings;
    id <IESLiveTracker> _tracker;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESActionDispatcher> _actionDispatcher;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveToastFactory> _toastFactory;
    UIView *_titleToast;
    id <HTSLiveRoomProfileReaction> _profileReactionCreator;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <HTSLiveRoomProfileReaction> profileReactionCreator; // @synthesize profileReactionCreator=_profileReactionCreator;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool titleDisplayed; // @synthesize titleDisplayed=_titleDisplayed;
@property(nonatomic) __weak UIView *titleToast; // @synthesize titleToast=_titleToast;
@property(nonatomic) _Bool isShowingAudiencelist; // @synthesize isShowingAudiencelist=_isShowingAudiencelist;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESActionDispatcher> actionDispatcher; // @synthesize actionDispatcher=_actionDispatcher;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> iesliveSettings; // @synthesize iesliveSettings=_iesliveSettings;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) HTSLiveDouplusMessage *douPlusMessage; // @synthesize douPlusMessage=_douPlusMessage;
@property(retain, nonatomic) HTSLiveRoomUserSeqMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UILabel *rightInfolabel; // @synthesize rightInfolabel=_rightInfolabel;
@property(nonatomic) __weak HTSLiveAudienceListBView *audienceListBView; // @synthesize audienceListBView=_audienceListBView;
@property(retain, nonatomic) RACScopedDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) IESLiveUserListView *userListView; // @synthesize userListView=_userListView;
@property(nonatomic) __weak LiveUserProfileView *userProfileView; // @synthesize userProfileView=_userProfileView;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) HTSLiveRoomProfileStore *profileStore; // @synthesize profileStore=_profileStore;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateFansCout:(id)arg1;
- (void)showAudienceListWithRankType:(long long)arg1;
- (_Bool)couldUnmountComponent;
- (void)showTitleToast:(id)arg1 withTextSize:(struct CGSize)arg2;
- (void)showRoomTitle;
- (void)showRoomTitleIfNeeded;
- (void)refreshLayout:(long long)arg1;
- (void)didTapAndienceListWithView:(id)arg1;
- (void)showAudienceList;
- (void)updatePopularityStrWithMessage:(id)arg1;
- (void)makeProfileVisible:(_Bool)arg1;
- (void)updateCurrentLiveEarnings:(id)arg1;
- (void)updateFanPiao:(id)arg1;
- (_Bool)_enableShowDouplusAlert;
- (void)askForLeave;
- (void)renderRoomProfile;
- (void)renderUserListView;
- (id)createWatermarkGradientLayer;
- (void)showAudienceBListViewWithType:(long long)arg1;
- (void)showAudienceBListView;
- (void)messageReceived:(id)arg1;
- (void)didUpdateRoom:(id)arg1;
- (void)setup;
- (void)createrightInfolabel;
- (void)componentOrientationChanged:(long long)arg1;
- (void)showComponent;
- (void)hideComponent;
- (void)componentWillUnmount;
- (void)componentDidAppear;
- (void)componentDidMount;
- (id)initWithStore:(id)arg1;
- (id)providedRouter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
