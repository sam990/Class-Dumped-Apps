//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESVideoBSAutoBitrateModel, IESVideoBSGroupModel, NSArray, NSString;

@interface IESVideoBSSettingsResponse : MTLModel <MTLJSONSerializing>
{
    NSArray *_gearSet;
    IESVideoBSGroupModel *_adaptiveGroup;
    IESVideoBSGroupModel *_definitionGroup;
    IESVideoBSGroupModel *_flowGroup;
    long long _defaultType;
    NSArray *_bandWidthMap;
    IESVideoBSAutoBitrateModel *_autoBitrateModel;
}

+ (id)autoBitrateModelJSONTransformer;
+ (id)bandWidthMapJSONTransformer;
+ (id)defaultTypeJSONTransformer;
+ (id)flowGroupJSONTransformer;
+ (id)definitionGroupJSONTransformer;
+ (id)adaptiveGroupJSONTransformer;
+ (id)gearSetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) IESVideoBSAutoBitrateModel *autoBitrateModel; // @synthesize autoBitrateModel=_autoBitrateModel;
@property(retain, nonatomic) NSArray *bandWidthMap; // @synthesize bandWidthMap=_bandWidthMap;
@property(nonatomic) long long defaultType; // @synthesize defaultType=_defaultType;
@property(retain, nonatomic) IESVideoBSGroupModel *flowGroup; // @synthesize flowGroup=_flowGroup;
@property(retain, nonatomic) IESVideoBSGroupModel *definitionGroup; // @synthesize definitionGroup=_definitionGroup;
@property(retain, nonatomic) IESVideoBSGroupModel *adaptiveGroup; // @synthesize adaptiveGroup=_adaptiveGroup;
@property(copy, nonatomic) NSArray *gearSet; // @synthesize gearSet=_gearSet;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

