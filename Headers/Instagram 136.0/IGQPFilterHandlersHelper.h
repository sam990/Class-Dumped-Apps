//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGQPDataStore, IGUserSession, NSDictionary;

@interface IGQPFilterHandlersHelper : NSObject
{
    NSDictionary *_filtersKeyClassMap;
    IGQPDataStore *_dataStore;
    IGUserSession *_userSession;
}

+ (id)_registeredFilters;
- (void).cxx_destruct;
- (id)_filterHandlerFromFilter:(id)arg1 promotion:(id)arg2 surfaceID:(id)arg3;
- (id)filterHandlersFromClause:(id)arg1 promotion:(id)arg2 surfaceID:(id)arg3;
- (id)initWithDataStore:(id)arg1 userSession:(id)arg2;

@end

