//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SCChatUploadMediaMetadata : NSObject <NSCopying>
{
    NSString *_uploadMediaId;
    long long _preUploadState;
    NSData *_dataToUpload;
}

@property(readonly, copy, nonatomic) NSData *dataToUpload; // @synthesize dataToUpload=_dataToUpload;
@property(readonly, nonatomic) long long preUploadState; // @synthesize preUploadState=_preUploadState;
@property(readonly, copy, nonatomic) NSString *uploadMediaId; // @synthesize uploadMediaId=_uploadMediaId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUploadMediaId:(id)arg1 preUploadState:(long long)arg2 dataToUpload:(id)arg3;

@end
