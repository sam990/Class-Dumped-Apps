//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCYDbWrapperParamsBuilder : NSObject
{
    struct Handle<std::__1::shared_ptr<scytale::DbWrapperParamsBuilder>, std::__1::shared_ptr<scytale::DbWrapperParamsBuilder>> _cppRefHandle;
}

+ (id)createBuilder:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)build;
- (id)setExclusiveLockingMode:(_Bool)arg1;
- (id)setCommitHook:(id)arg1;
- (id)setEnableWriteAheadLogging:(_Bool)arg1;
- (id)setAndroidCompatibility:(_Bool)arg1;
- (id)setDataStoreFileName:(id)arg1;
- (id)initWithCpp:(const shared_ptr_fc0be075 *)arg1;

@end

