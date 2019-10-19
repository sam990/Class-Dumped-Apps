//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASInterfaceStateDelegate-Protocol.h"
#import "ELMController-Protocol.h"
#import "ELMEntitiesProcessorDelegate-Protocol.h"
#import "ELMStoreSubscriber-Protocol.h"
#import "NSLocking-Protocol.h"

@class ASDisplayNode, ASNodeContext, ELMElement, NSArray, NSMutableDictionary, NSString;
@protocol ELMContext, ELMController, ELMPerformanceAgent;

@interface ELMComponent : NSObject <ELMStoreSubscriber, ELMEntitiesProcessorDelegate, ELMController, ASInterfaceStateDelegate, NSLocking>
{
    // Error parsing type: {MutexOrPointer=""(?="pointer_"^{RecursiveMutex}"mutex_"{RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})})"configured_"b1"own_mutex_"b1}, name: __instanceLock__
    ASNodeContext *_nodeContext;
    id <ELMContext> _context;
    _Bool _retainsComponent;
    ELMComponent *_weakComponent;
    ELMComponent *_strongComponent;
    id <ELMController> _strongInstance;
    id <ELMController> _weakInstance;
    // Error parsing type: {StoreConfig="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadataWithArena="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"entity_mappings_"{RepeatedPtrField<youtube::elements::EntityMapping>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}}}, name: _storeConfig
    NSArray *_entitiesProcessors;
    // Error parsing type: {optional<youtube::elements::Model>="engaged_"B""(?="data_"{Model="_vptr$MessageLite"^^?"_extensions_"{ExtensionSet="arena_"^{Arena}"flat_capacity_"S"flat_size_"S"map_"(AllocatedData="flat"^{KeyValue}"large"^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}"_internal_metadata_"{InternalMetadataWithArena="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"eml_type_model_"^{EmlTypeModel}}"dummy_"{dummy_type="data"[56{empty_struct=}]})}, name: _lastModel
    _Bool _subscribed;
    NSMutableDictionary *_onNodeWillCalculateLayoutBlocks;
    id <ELMPerformanceAgent> _performanceAgent;
    int _materializationCount;
    _Bool _shouldInvertStrongReference;
    _Bool _isRoot;
    ELMElement *_element;
}

@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
@property(nonatomic) _Bool shouldInvertStrongReference; // @synthesize shouldInvertStrongReference=_shouldInvertStrongReference;
@property(readonly, nonatomic) ELMElement *element; // @synthesize element=_element;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)locked_setupReferencesWithInstance:(id)arg1;
- (void)unsubscribe;
- (void)subscribe;
-     // Error parsing type: B24@0:8r^{Model=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{EmlTypeModel}}16, name: locked_needsUpdateWithNewModel:
-     // Error parsing type: v24@0:8^{Model=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{EmlTypeModel}}16, name: locked_synthesizeStoreConfigModel:
- (void)locked_replaceInstanceWithElement:(id)arg1;
- (void)locked_updateInstance;
-     // Error parsing type: {Model=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{EmlTypeModel}}24@0:8@16, name: locked_createModelFromElement:
-     // Error parsing type: {Model=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{EmlTypeModel}}16@0:8, name: locked_createModel
- (void)locked_updateWithElement:(id)arg1 force:(_Bool)arg2;
@property(readonly, nonatomic) int materializationCount;
- (void)unlock;
- (void)lock;
- (void)hierarchyDisplayDidFinish;
- (void)interfaceStateDidChange:(unsigned char)arg1 fromState:(unsigned char)arg2;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)nodeWillCalculateLayout:(CDStruct_42a63532)arg1;
- (void)nodeDidLoad;
- (void)nodeDidLayout;
- (void)elementShouldHotReload;
- (void)didProcessEntities;
- (void)locked_requestUpdateIfNeeded;
- (void)storeDidUpdateAtKey:(id)arg1 withPreviousBytes:(id)arg2 newBytes:(id)arg3;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (void)willChangeHighlight:(_Bool)arg1;
-     // Error parsing type: v24@0:8r^{Command=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16, name: handleCommand:
- (void)setOnNodeDidPerformAccessibilityCustomAction:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeWillChangeHighlight:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidExitVisibleState:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidEnterVisibleState:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeWillCalculateLayout:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidLayout:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidLoad:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)extendedPropertyForKey:(id)arg1;
- (void)setExtendedProperty:(id)arg1 forKey:(id)arg2;
- (void)setAppearanceAnimation:(id)arg1;
- (void)remove:(id)arg1;
- (void)move:(id)arg1 toIndex:(int)arg2;
- (void)replace:(id)arg1 with:(id)arg2;
- (void)insert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)append:(id)arg1;
- (void)updateWithElement:(id)arg1;
-     // Error parsing type: B32@0:8@16^{optional<youtube::elements::Model>=B(?={Model=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{EmlTypeModel}}{dummy_type=[56{empty_struct=}]})}24, name: locked_shouldUpdateWithElement:createdModel:
- (_Bool)shouldUpdateWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSString *key;
- (void)setOwningComponent:(id)arg1 retained:(_Bool)arg2;
@property(readonly, nonatomic) __weak ELMComponent *owningComponent;
@property(readonly, nonatomic) ASDisplayNode *node;
- (void)locked_requestUpdate;
- (id)locked_materialize;
- (id)context;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
