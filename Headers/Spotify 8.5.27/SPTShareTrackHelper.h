//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEntityService, SPTShareTestManager;

@interface SPTShareTrackHelper : NSObject
{
    id <SPTEntityService> _entityService;
    id <SPTShareTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)normalizeSharingEntityData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEntityService:(id)arg1 testManager:(id)arg2;

@end
