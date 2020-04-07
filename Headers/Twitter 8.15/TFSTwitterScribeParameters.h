//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSTwitterScribeParameters-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol TFSTwitterScribeParameters;

@interface TFSTwitterScribeParameters : NSObject <TFSTwitterScribeParameters>
{
    id <TFSTwitterScribeParameters> _navigationMetadata;
    NSDictionary *_initialParameters;
    NSMutableDictionary *_parameters;
}

+ (id)parametersWithItem:(id)arg1;
+ (id)parametersWithProfileID:(long long)arg1;
+ (id)parametersWithProfileIDNumber:(id)arg1;
+ (id)parametersWithDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSDictionary *initialParameters; // @synthesize initialParameters=_initialParameters;
@property(retain, nonatomic) id <TFSTwitterScribeParameters> navigationMetadata; // @synthesize navigationMetadata=_navigationMetadata;
- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)setAssociationParameters:(id)arg1 forType:(long long)arg2;
@property(copy, nonatomic) NSDictionary *associations;
- (void)addItem:(id)arg1;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSString *referringEvent;
@property(copy, nonatomic) NSString *profileID;
@property(copy, nonatomic) NSString *category;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)JSONDictionary;
- (void)addParameters:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithParameterDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
