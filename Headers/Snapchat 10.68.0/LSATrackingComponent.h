//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAComponentListener-Protocol.h"
#import "LSAExpressionsListener-Protocol.h"
#import "LSAPlatformTrackingDelegate-Protocol.h"

@class AVDepthData, LSACategory, LSAPortraitEffectsMatteCache, LSATrackingComponentListenerAnnouncer, LSFaceMeshARGeometryCaches, NSMutableSet, NSString;
@protocol LSATrackingComponentDelegate;

@interface LSATrackingComponent : LSABaseComponent <LSAComponentListener, LSAExpressionsListener, LSAPlatformTrackingDelegate>
{
    NSString *_trackingResourcesPath;
    struct shared_ptr<LSAExpressionsDelegateWrapper> _expressionsDelegateWrapper;
    struct shared_ptr<LSAPlatformTrackingDelegateWrapper> _platformTrackingDelegateWrapper;
    LSATrackingComponentListenerAnnouncer *_trackingComponentAnnouncer;
    NSMutableSet *_activeRequirements;
    AVDepthData *_lastDepthData;
    LSAPortraitEffectsMatteCache *_portraitEffectsMatteCache;
    LSFaceMeshARGeometryCaches *_faceMeshCaches;
    id <LSATrackingComponentDelegate> _delegate;
    LSACategory *_activeCategory;
}

@property(retain) LSACategory *activeCategory; // @synthesize activeCategory=_activeCategory;
@property(nonatomic) __weak id <LSATrackingComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_trySettingUpPortraitEffectsMatteCache;
- (void)requestFinishTrackingProcessingIfNeeded;
- (void)component:(id)arg1 didSetComplexEffect:(id)arg2;
- (void)component:(id)arg1 willSetComplexEffect:(id)arg2;
- (void)componentDidProcessFrame:(id)arg1;
- (void)componentWillProcessFrame:(id)arg1;
- (void)didRecognizeFaces:(unsigned long long)arg1;
- (void)didRecognizeExpression:(id)arg1;
- (void)currentDepthMetadataWithCropping:(_Bool)arg1 resultAspectRatio:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)currentDepthMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isTrackingRequirementSupported:(unsigned int)arg1;
- (_Bool)isDeviceSupported;
- (void)didFinishTrackingProcessing;
-     // Error parsing type: B80@0:8{?=[4]}16, name: didRequestTrackingRestartWithExistingTransform:
- (_Bool)didRequestTrackingRestartAtPoint:(struct CGPoint)arg1;
- (_Bool)didRequestTrackingEndWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingReset;
- (_Bool)didRequestTrackingBeginWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingDataGeneration:(LSAObjCppPtrWrapper_5f63bb26)arg1 image:(LSAObjCppPtrWrapper_f94b3356)arg2 parameters:(LSAObjCppPtrWrapper_f7213403)arg3 useAnchors:(_Bool)arg4 requirements:(unsigned int)arg5;
- (void)clearResources;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (id)initWithPerformer:(id)arg1;
- (void)innerActivateCategory:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setFaceTrackingResourcesPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldAnimateNextInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)setInitAnimationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restartTrackingWithNormalizedPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restartTrackingWithCompletion:(CDUnknownBlockType)arg1;
- (void)detectActiveCategoryForPoint:(struct CGPoint)arg1 categories:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearActiveCategoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setFaceTrackingResourcesWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
