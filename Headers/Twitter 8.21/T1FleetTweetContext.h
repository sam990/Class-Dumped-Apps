//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, TFNTwitterStatus;

@interface T1FleetTweetContext : NSObject
{
    NSData *_imageData;
    TFNTwitterStatus *_status;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWitImageData:(id)arg1 status:(id)arg2;

@end

