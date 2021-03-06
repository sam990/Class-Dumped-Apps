//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDAFlagReading-Protocol.h"

@class NSString, NSUserDefaults;

@interface GDAExperimentalFlagReader : NSObject <GDAFlagReading>
{
    NSUserDefaults *_userDefaults;
}

@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (_Bool)localFlagsOnly;
- (id)stringForFlagName:(id)arg1 stageLimit:(unsigned long long)arg2;
- (id)numberForFlagName:(id)arg1 stageLimit:(unsigned long long)arg2;
- (id)boolForFlagName:(id)arg1 stageLimit:(unsigned long long)arg2;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

