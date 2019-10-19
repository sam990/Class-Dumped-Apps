//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber;

@interface WABackupInformation : NSObject
{
    NSDictionary *_data;
}

@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *sizeOfVideos;
@property(readonly, nonatomic) NSNumber *size;
@property(readonly, nonatomic) NSDictionary *fileSizes;
@property(readonly, nonatomic) NSNumber *version;
@property(readonly, nonatomic) NSNumber *includeVideos;
@property(readonly, nonatomic) NSDate *date;
- (void)postUpdatedNotification;
- (_Bool)replaceData:(id)arg1;
@property(readonly, nonatomic) _Bool exists;
- (void)logWithMessage:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBackupInformation:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end
