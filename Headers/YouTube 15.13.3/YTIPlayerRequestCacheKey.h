//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTInnerTubeResponseCacheKey-Protocol.h>

@class NSMutableArray, NSString;

@interface YTIPlayerRequestCacheKey : NSObject <YTInnerTubeResponseCacheKey>
{
    NSMutableArray *_contents;
}

@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPlayerRequest:(id)arg1 service:(long long)arg2 omitClickTrackingParamsFromCacheKeys:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
