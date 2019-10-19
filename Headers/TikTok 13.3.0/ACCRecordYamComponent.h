//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordYamComponentProtocol-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, AWEYAMSceneRecordProtocol;

@interface ACCRecordYamComponent : NSObject <ACCRecordYamComponentProtocol, ACCStickerComponentMessageProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    id <AWEYAMSceneRecordProtocol> _scene;
    NSDictionary *_yamUploadExtendedInfo;
}

@property(retain, nonatomic) NSDictionary *yamUploadExtendedInfo; // @synthesize yamUploadExtendedInfo=_yamUploadExtendedInfo;
@property(retain, nonatomic) id <AWEYAMSceneRecordProtocol> scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)p_constructYamInfoDuteToMemoryIssue;
- (void)msg_didSetCurrentSticker:(id)arg1 oldSticker:(id)arg2;
- (void)containerViewControllerWillDisappear;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerWillAppear;
- (void)containerViewControllerDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end
