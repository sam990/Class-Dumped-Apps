//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class IGListAdapter;

@interface IGListAdapterProxy : NSProxy
{
    id _collectionViewTarget;
    id _scrollViewTarget;
    IGListAdapter *_interceptor;
}

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithCollectionViewTarget:(id)arg1 scrollViewTarget:(id)arg2 interceptor:(id)arg3;

@end
