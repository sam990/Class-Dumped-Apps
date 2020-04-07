//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMTemplateLoader-Protocol.h>

@class ELMDefaultResourceLoader, NSMutableArray, NSMutableDictionary, NSString;
@protocol ELMResourceDelegate;

@interface ELMDefaultTemplateLoader : NSObject <ELMTemplateLoader>
{
    ELMDefaultResourceLoader *_resourceLoader;
    NSMutableDictionary *_subscribers;
    NSMutableArray *_allURIs;
    id <ELMResourceDelegate> _resourceDelegate;
    // Error parsing type: {optional<youtube::elements::ResourceRouter>="engaged_"B""(?="data_"{ResourceRouter="batch_lock_"{Mutex="mu_"{atomic<long>="__a_"Aq}}"bookkeeping_lock_"{Mutex="mu_"{atomic<long>="__a_"Aq}}"validation_handlers_"{flat_hash_map<youtube::elements::ResourceType, std::__1::function<void (const std::__1::basic_string<char> &, std::__1::basic_string<char> &&, youtube::elements::ValidationState)>, absl::hash_internal::Hash<youtube::elements::ResourceType>, std::__1::equal_to<youtube::elements::ResourceType>, std::__1::allocator<std::__1::pair<const youtube::elements::ResourceType, std::__1::function<void (const std::__1::basic_string<char> &, std::__1::basic_string<char> &&, youtube::elements::ValidationState)> > > >="ctrl_"*"slots_"^(map_slot_type<youtube::elements::ResourceType, std::__1::function<void (const std::__1::basic_string<char> &, std::__1::basic_string<char> &&, youtube::elements::ValidationState)> >)"size_"Q"capacity_"Q"infoz_"{HashtablezInfoHandle="info_"^{HashtablezInfo}}"settings_"{CompressedTuple<unsigned long, absl::hash_internal::Hash<youtube::elements::ResourceType>, std::__1::equal_to<youtube::elements::ResourceType>, std::__1::allocator<std::__1::pair<const youtube::elements::ResourceType, std::__1::function<void (const std::__1::basic_string<char> &, std::__1::basic_string<char> &&, youtube::elements::ValidationState)> > > >="value"Q}}"delegate_"^{ResourceRouterDelegate}"serving_context_"^{ServingContext}"pending_batches_"{deque<youtube::elements::ResourceBatch, std::__1::allocator<youtube::elements::ResourceBatch> >="__map_"{__split_buffer<youtube::elements::ResourceBatch *, std::__1::allocator<youtube::elements::ResourceBatch *> >="__first_"^^{ResourceBatch}"__begin_"^^{ResourceBatch}"__end_"^^{ResourceBatch}"__end_cap_"{__compressed_pair<youtube::elements::ResourceBatch **, std::__1::allocator<youtube::elements::ResourceBatch *> >="__value_"^^{ResourceBatch}}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::__1::allocator<youtube::elements::ResourceBatch> >="__value_"Q}}"successfully_loaded_resources_"{flat_hash_set<std::__1::basic_string<char>, absl::container_internal::StringHash, absl::container_internal::StringHashEq::Eq, std::__1::allocator<std::__1::basic_string<char> > >="ctrl_"*"slots_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}"size_"Q"capacity_"Q"infoz_"{HashtablezInfoHandle="info_"^{HashtablezInfo}}"settings_"{CompressedTuple<unsigned long, absl::container_internal::StringHash, absl::container_internal::StringHashEq::Eq, std::__1::allocator<std::__1::basic_string<char> > >="value"Q}}"pending_resources_"{flat_hash_set<std::__1::basic_string<char>, absl::container_internal::StringHash, absl::container_internal::StringHashEq::Eq, std::__1::allocator<std::__1::basic_string<char> > >="ctrl_"*"slots_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}"size_"Q"capacity_"Q"infoz_"{HashtablezInfoHandle="info_"^{HashtablezInfo}}"settings_"{CompressedTuple<unsigned long, absl::container_internal::StringHash, absl::container_internal::StringHashEq::Eq, std::__1::allocator<std::__1::basic_string<char> > >="value"Q}}}"dummy_"{dummy_type="data"[224{empty_struct=}]})}, name: _resourceRouter
    // Error parsing type: {optional<youtube::elements::ServingContext>="engaged_"B""(?="data_"{ServingContext="sync_lock_"{Mutex="mu_"{atomic<long>="__a_"Aq}}"resource_tags_"{list<long long, std::__1::allocator<long long> >="__end_"{__list_node_base<long long, void *>="__prev_"^{__list_node_base<long long, void *>}"__next_"^{__list_node_base<long long, void *>}}"__size_alloc_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<long long, void *> > >="__value_"Q}}"on_context_updated_"{function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C]}"__f_"^{__base<void ()>}}}"max_tokens_"i}"dummy_"{dummy_type="data"[72{empty_struct=}]})}, name: _servingContext
    struct optional<(anonymous namespace)::ELMResourceRouterDelegate> _elmResourceRouterDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifySubscribersOfURI:(id)arg1;
- (void)setResourceDelegate:(id)arg1;
- (void)loadResources:(vector_8b617614 *)arg1;
- (void)preloadTemplates;
- (void)unsubscribe:(id)arg1 fromTemplateURI:(id)arg2;
- (void)subscribe:(id)arg1 toTemplateURI:(id)arg2;
- (id)allURIs;
- (void)clearCachedTemplates;
- (void)templateForURI:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cacheSerializedTemplate:(id)arg1 withURI:(id)arg2 runtimeConfig:(id)arg3;
- (shared_ptr_38209d8d)cachedTemplateForURI:(id)arg1;
- (id)init;
- (id)initWithBaseURL:(id)arg1 maxTags:(unsigned long long)arg2;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
