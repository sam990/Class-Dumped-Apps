//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEntityStoreQueryTable-Protocol.h>

@class NSArray, NSString;

@interface YTOfflineActionWrapperEntityQueryTable : NSObject <YTEntityStoreQueryTable>
{
    Class _entityClass;
    unsigned long long _entityType;
    NSString *_name;
    NSArray *_columns;
    NSArray *_indexes;
}

@property(readonly, nonatomic) NSArray *indexes; // @synthesize indexes=_indexes;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
