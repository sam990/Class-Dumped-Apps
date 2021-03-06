//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface TFNViewCacheEntryMetadata : NSObject
{
    id <NSObject><NSCopying> _viewIdentifier;
    long long _firstViewIndex;
    long long _lastViewIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long lastViewIndex; // @synthesize lastViewIndex=_lastViewIndex;
@property(readonly, nonatomic) long long firstViewIndex; // @synthesize firstViewIndex=_firstViewIndex;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (id)uniqueIdentifierForViewAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long viewCount;
- (id)willDequeueView;
- (id)willEnqueueView;
- (id)initWithViewIdentifier:(id)arg1;

@end

