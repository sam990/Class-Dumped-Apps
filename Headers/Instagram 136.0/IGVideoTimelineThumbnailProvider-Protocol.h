//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@protocol IGVideoTimelineThumbnailProviderDelegate;

@protocol IGVideoTimelineThumbnailProvider <NSObject>
@property(readonly, nonatomic) long long thumbnailCount;
@property(nonatomic) __weak id <IGVideoTimelineThumbnailProviderDelegate> delegate;
- (void)cancel;
- (void)generateThumbnailsWithCount:(long long)arg1 displaySize:(struct CGSize)arg2;
@end

