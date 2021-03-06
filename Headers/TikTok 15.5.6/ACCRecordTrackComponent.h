//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCFeatureComponent.h"

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCRecordButtonComponentMessageProtocol-Protocol.h"
#import "ACCRecordCloseComponentMessageProtocol-Protocol.h"
#import "ACCRecordSwitchModeComponentMessageProtocol-Protocol.h"
#import "ACCRecordTrackComponentProtocol-Protocol.h"
#import "ACCRecordTutorialComponentMessageProtocol-Protocol.h"

@class ACCFilterViewModel, NSString;
@protocol ACCBeautyFeatureComponentProtocol, ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCFilterComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordCountdownComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordToolBarComponentProtocol, ACCRecordToolMoreComponentProtocol, ACCRecordTutorialComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordTrackComponent : ACCFeatureComponent <ACCCaptureComponentMessageProtocol, ACCRecordCloseComponentMessageProtocol, ACCRecordTrackComponentProtocol, ACCRecordSwitchModeComponentMessageProtocol, ACCRecordButtonComponentMessageProtocol, ACCRecordTutorialComponentMessageProtocol>
{
    _Bool _changeRecordMode;
    _Bool _earphoneOn;
    id <ACCComponentBusProtocol> componentBus;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCStickerComponentProtocol> _stickerComponent;
    id <ACCCaptureComponentProtocol> _captureComponent;
    id <ACCFilterComponentProtocol> _filterComponent;
    id <ACCBeautyFeatureComponentProtocol> _beautyFeatureComponent;
    id <ACCRecordButtonComponentProtocol> _recordButtonComponent;
    id <ACCRecordToolMoreComponentProtocol> _moreToolComponent;
    id <ACCRecordProgressBarComponentProtocol> _progressBarComponent;
    id <ACCRecordToolBarComponentProtocol> _toolBarComponent;
    id <ACCRecordCountdownComponentProtocol> _countdownComponent;
    id <ACCRecordTutorialComponentProtocol> _tutorialComponent;
}

@property(nonatomic) _Bool earphoneOn; // @synthesize earphoneOn=_earphoneOn;
@property(nonatomic) _Bool changeRecordMode; // @synthesize changeRecordMode=_changeRecordMode;
@property(readonly, nonatomic) __weak id <ACCRecordTutorialComponentProtocol> tutorialComponent; // @synthesize tutorialComponent=_tutorialComponent;
@property(readonly, nonatomic) __weak id <ACCRecordCountdownComponentProtocol> countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBarComponent; // @synthesize toolBarComponent=_toolBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBarComponent; // @synthesize progressBarComponent=_progressBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolMoreComponentProtocol> moreToolComponent; // @synthesize moreToolComponent=_moreToolComponent;
@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordButtonComponent; // @synthesize recordButtonComponent=_recordButtonComponent;
@property(readonly, nonatomic) __weak id <ACCBeautyFeatureComponentProtocol> beautyFeatureComponent; // @synthesize beautyFeatureComponent=_beautyFeatureComponent;
@property(readonly, nonatomic) __weak id <ACCFilterComponentProtocol> filterComponent; // @synthesize filterComponent=_filterComponent;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> captureComponent; // @synthesize captureComponent=_captureComponent;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (void)msg_trackTutorialEvent:(unsigned long long)arg1;
- (void)msg_didChangeToMode:(long long)arg1 fromMode:(long long)arg2;
- (void)msg_didFinishTakePicture;
- (void)msg_cameraFirstFrameDidRender:(id)arg1;
- (void)msg_camera:(id)arg1 pauseRecordWithError:(id)arg2;
- (void)msg_camera:(id)arg1 startRecordWithError:(id)arg2;
- (void)msg_camera:(id)arg1 stopVideoCaptureWithError:(id)arg2;
- (void)msg_camera:(id)arg1 startVideoCaptureWithError:(id)arg2;
- (void)msg_camera:(id)arg1 didRecordReadyWithError:(id)arg2;
@property(readonly, nonatomic) __weak ACCFilterViewModel *filterViewModel;
- (void)msg_didCloseRecordPage;
- (void)trackError:(id)arg1 action:(id)arg2;
- (id)p_recordModeMap;
- (id)p_getRecordType;
- (id)p_getRecordMode;
- (void)trackRecordPerformanceWithCamera:(id)arg1;
- (void)trackPreviewPerformanceWithCamera:(id)arg1 nextAction:(id)arg2;
- (void)trackRecordVideoEvent;
- (void)track_prop_music_show_isFirstEmbed:(_Bool)arg1;
- (void)containerViewControllerWillDisappear;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (id)init;
- (id)initWithComponentController:(id)arg1;
- (void)dealloc;
- (id)autoInjectComponentDictionaryOftutorialComponent;
- (id)autoInjectComponentDictionaryOfcountdownComponent;
- (id)autoInjectComponentDictionaryOftoolBarComponent;
- (id)autoInjectComponentDictionaryOfprogressBarComponent;
- (id)autoInjectComponentDictionaryOfmoreToolComponent;
- (id)autoInjectComponentDictionaryOfrecordButtonComponent;
- (id)autoInjectComponentDictionaryOfbeautyFeatureComponent;
- (id)autoInjectComponentDictionaryOffilterComponent;
- (id)autoInjectComponentDictionaryOfcaptureComponent;
- (id)autoInjectComponentDictionaryOfstickerComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

