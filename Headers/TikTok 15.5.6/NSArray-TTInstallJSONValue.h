//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import "GTMLogWriter-Protocol.h"

@class AWESearchNilInfoModel, NSString, RACSequence;

@interface NSArray (TTInstallJSONValue) <GTMLogWriter>
+ (id)live_arrayWithName:(id)arg1;
- (id)JSONRepresentation;
- (CDUnknownBlockType)btd_filter;
- (CDUnknownBlockType)btd_reduce;
- (CDUnknownBlockType)btd_map;
- (id)btd_safeJsonStringEncoded:(id *)arg1;
- (id)btd_safeJsonStringEncoded;
- (id)btd_jsonStringEncoded:(id *)arg1;
- (id)btd_jsonStringEncoded;
- (id)cj_objectAtIndex:(long long)arg1;
- (id)ep_compact:(CDUnknownBlockType)arg1;
- (id)arrayByRemoveNULL;
- (id)hmd_jsonData:(id *)arg1;
- (id)hmd_jsonData;
- (id)hmd_jsonString:(id *)arg1;
- (id)hmd_jsonString;
- (_Bool)hmd_isValidJSONObject;
- (id)hmd_objectAtIndex:(unsigned long long)arg1 class:(Class)arg2;
- (id)hmd_objectAtIndex:(unsigned long long)arg1;
- (id)live_firstObjectWhere:(CDUnknownBlockType)arg1;
- (long long)live_firstIndexWhere:(CDUnknownBlockType)arg1;
- (_Bool)live_containsWhere:(CDUnknownBlockType)arg1;
- (id)subarrayWithRotatableRange:(struct _NSRange)arg1;
- (id)live_filter:(CDUnknownBlockType)arg1;
- (id)live_map:(CDUnknownBlockType)arg1;
- (id)live_reversed;
- (id)iesLiveSafe_arrayByAddingObject:(id)arg1;
- (id)iesLiveSafe_subarrayWithRange:(struct _NSRange)arg1;
- (id)iesLiveSafe_objectsAtIndexes:(id)arg1;
- (id)iesLiveSafe_objectAtIndex:(unsigned long long)arg1;
- (id)iesLive_filter:(CDUnknownBlockType)arg1;
- (id)iesLive_settingMapToEntityUsingBlock:(CDUnknownBlockType)arg1;
- (id)iesLive_settingMapToEntityWithClass:(Class)arg1;
- (id)iesLive_settingMap:(CDUnknownBlockType)arg1;
- (void)live_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_live_commonSuperviewOfViews;
- (void)live_mas_redistributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4 itemWidth:(double)arg5 itemHeight:(double)arg6;
- (void)live_mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4 constraints:(CDUnknownBlockType)arg5;
- (void)live_mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (void)live_mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4 itemWidth:(double)arg5 itemHeight:(double)arg6;
- (id)mas_commonSuperviewOfViews;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedItemLength:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) RACSequence *rac_sequence;
- (id)bds_flatmap:(CDUnknownBlockType)arg1;
- (id)bds_filter:(CDUnknownBlockType)arg1;
- (id)ttad_arrayToJson;
- (id)tt_JSONRepresentation;
- (id)bd_safeObjectAtIndex:(unsigned long long)arg1;
- (id)bdt_safeObjectAtIndex:(unsigned long long)arg1;
- (id)JSONRepresentation;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1 class:(Class)arg2;
- (id)arrayToJson;
- (id)ttvideoengine_objectAtIndex:(long long)arg1 class:(Class)arg2;
- (id)ttvideoengine_objectAtIndex:(long long)arg1;
- (id)ttVideoEngine_map:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *yam_jsonString;
@property(readonly, nonatomic) id yam_midItem;
- (id)yam_reject:(CDUnknownBlockType)arg1;
- (id)yam_filter:(CDUnknownBlockType)arg1;
- (id)yam_map:(CDUnknownBlockType)arg1;
- (id)nb_safeDataAtIndex:(unsigned long long)arg1;
- (id)nb_safeArrayAtIndex:(unsigned long long)arg1;
- (id)nb_safeNumberAtIndex:(unsigned long long)arg1;
- (id)nb_safeStringAtIndex:(unsigned long long)arg1;
- (id)nb_safeObjectAtIndex:(unsigned long long)arg1 class:(Class)arg2;
- (id)GMSx_goo_filteredArrayUsingPredicate:(CDUnknownBlockType)arg1;
- (_Bool)GMSx_goo_anyObjectPassesTest:(CDUnknownBlockType)arg1;
- (id)GMSx_goo_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (id)GMSx_mdf_sortArray:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)GMSx_mdf_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)GMSx_mdf_anyObjectPassesTest:(CDUnknownBlockType)arg1;
- (id)GMSx_mdf_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (void)GMSx_logMessage:(id)arg1 level:(int)arg2;
- (id)gad_JSONSafeArray;
- (id)gad_JSONStringPretty:(_Bool)arg1 error:(id *)arg2;
- (id)namedViewsDictionary;
@property(retain, nonatomic) NSString *URLRequestID;
@property(nonatomic) _Bool animatedImage;
@property(retain, nonatomic) NSString *animationImageVID;
@property(nonatomic) _Bool animationTypeReciprocating;
- (id)mus_dictionaryWithIndex:(unsigned long long)arg1;
- (id)mus_stringWithIndex:(unsigned long long)arg1;
- (id)mus_objectAtIndex:(unsigned long long)arg1;
- (id)mus_JSONStringWithOptions:(unsigned long long)arg1;
- (id)mus_JSONString;
@property(readonly, nonatomic) _Bool awe_emptyListHitCoreTable;
@property(retain, nonatomic) AWESearchNilInfoModel *awe_searchListNilInfo;
- (id)bdplatform_serializatedString;
- (id)acc_dictionaryWithIndex:(unsigned long long)arg1;
- (id)acc_stringWithIndex:(unsigned long long)arg1;
- (id)acc_objectAtIndex:(unsigned long long)arg1;
- (id)acc_JSONStringWithOptions:(unsigned long long)arg1;
- (id)acc_JSONString;
- (id)iesplatform_serializatedString;
- (id)iessdk_serializatedString;
- (id)mtl_arrayByRemovingLastObject;
- (id)mtl_arrayByRemovingFirstObject;
- (id)mtl_arrayByRemovingObject:(id)arg1;
@property(readonly, nonatomic) id mtl_firstObject;
- (id)sgm_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectAtIndexOrNil:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

