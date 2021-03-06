//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary, NSMutableSet, RCTBridge;

@interface RCTNativeAnimatedNodesManager : NSObject
{
    RCTBridge *_bridge;
    NSMutableDictionary *_animationNodes;
    NSMutableDictionary *_eventDrivers;
    NSMutableSet *_activeAnimations;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)updateAnimations;
- (void)stepAnimations:(id)arg1;
- (void)stopAnimationLoop;
- (void)stopAnimationLoopIfNeeded;
- (void)startAnimationLoopIfNeeded;
- (void)stopListeningToAnimatedNodeValue:(id)arg1;
- (void)startListeningToAnimatedNodeValue:(id)arg1 valueObserver:(id)arg2;
- (void)handleAnimatedEvent:(id)arg1;
- (void)removeAnimatedEventFromView:(id)arg1 eventName:(id)arg2 animatedNodeTag:(id)arg3;
- (void)addAnimatedEventToView:(id)arg1 eventName:(id)arg2 eventMapping:(id)arg3;
- (void)stopAnimationsForNode:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (void)startAnimatingNode:(id)arg1 nodeTag:(id)arg2 config:(id)arg3 endCallback:(CDUnknownBlockType)arg4;
- (void)extractAnimatedNodeOffset:(id)arg1;
- (void)flattenAnimatedNodeOffset:(id)arg1;
- (void)setAnimatedNodeOffset:(id)arg1 offset:(id)arg2;
- (void)setAnimatedNodeValue:(id)arg1 value:(id)arg2;
- (void)dropAnimatedNode:(id)arg1;
- (void)restoreDefaultValues:(id)arg1;
- (void)disconnectAnimatedNodeFromView:(id)arg1 viewTag:(id)arg2;
- (void)connectAnimatedNodeToView:(id)arg1 viewTag:(id)arg2 viewName:(id)arg3;
- (void)disconnectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)connectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)createAnimatedNode:(id)arg1 config:(id)arg2;
- (_Bool)isNodeManagedByFabric:(id)arg1;
- (id)initWithBridge:(id)arg1;

@end

