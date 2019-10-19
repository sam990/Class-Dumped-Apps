//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APLevelDBWriteBatch-Protocol.h"

@class APLevelDB, NSString;

@interface APLevelDBWriteBatch : NSObject <APLevelDBWriteBatch>
{
    struct WriteBatch _batch;
    APLevelDB *_levelDB;
}

@property(retain, nonatomic) APLevelDB *levelDB; // @synthesize levelDB=_levelDB;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)commit;
- (void)clear;
- (void)removeKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)initWithLevelDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
