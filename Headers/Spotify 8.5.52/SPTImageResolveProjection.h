//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SPTImageResolveProjection : NSObject
{
    NSData *_projectionID;
    NSString *_URLTemplate;
    struct CGSize _size;
}

@property(readonly, nonatomic) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSData *projectionID; // @synthesize projectionID=_projectionID;
- (void).cxx_destruct;
- (_Bool)isEqualToProjection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProjectionID:(id)arg1 size:(struct CGSize)arg2 URLTemplate:(id)arg3;

@end
