//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBDbappClient : NSObject
{
    struct Handle<std::__1::shared_ptr<dropbox::product::dbapp::syncapi_dbapp_code_gen::DbappClient>, std::__1::shared_ptr<dropbox::product::dbapp::syncapi_dbapp_code_gen::DbappClient>> _cppRefHandle;
}

+ (id)create:(id)arg1 config:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getDbCacheRoot;
- (void)updateOverquotaStatusFromAccountInfo:(long long)arg1 sharedQuota:(long long)arg2 totalQuota:(long long)arg3;
- (id)createCameraUploadViewModel:(_Bool)arg1;
- (id)createCameraUploadConsistencyChecker:(id)arg1;
- (id)createCameraUploadInstance:(id)arg1 appStatusHelper:(id)arg2;
- (void)deleteCameraUploadDbDirectory;
- (id)getContactBoltManagerInstance;
- (id)getContactManagerInstance;
- (id)getStormcrowInstance;
- (void)shutdown:(_Bool)arg1;
- (id)initWithCpp:(const shared_ptr_fd82a15b *)arg1;

@end

