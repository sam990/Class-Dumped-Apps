//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol HMDFileUploadProtocol <NSObject>
- (void)uploadFileAtPath:(NSString *)arg1 logType:(NSString *)arg2 scene:(NSString *)arg3 commonParams:(NSDictionary *)arg4 withBlock:(void (^)(_Bool))arg5;
@end
