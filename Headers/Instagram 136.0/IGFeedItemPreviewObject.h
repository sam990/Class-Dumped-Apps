//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, UIImage;

@interface IGFeedItemPreviewObject : NSObject
{
    UIImage *_placeholderImage;
    IGFeedItem *_feedItem;
    struct CGRect _sourceRect;
}

@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)initWithPlaceholderImage:(id)arg1 sourceRect:(struct CGRect)arg2 feedItem:(id)arg3;

@end

