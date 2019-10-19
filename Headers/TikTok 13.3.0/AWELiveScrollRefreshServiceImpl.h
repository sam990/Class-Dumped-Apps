//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveScrollRefreshService-Protocol.h"

@class NSString;

@interface AWELiveScrollRefreshServiceImpl : NSObject <IESLiveScrollRefreshService>
{
}

+ (long long)getMJRefreshState:(long long)arg1;
- (void)endRefreshingForScrollView:(id)arg1;
- (void)scrollView:(id)arg1 setFooterTitleColor:(id)arg2;
- (void)scrollView:(id)arg1 setFooterTitleFont:(id)arg2;
- (void)scrollView:(id)arg1 setFooterTitle:(id)arg2 forState:(long long)arg3;
- (void)scrollView:(id)arg1 setFooterTitle:(id)arg2;
- (id)scrollView:(id)arg1 setFooterWithRefreshingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
