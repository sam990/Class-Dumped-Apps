//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNodeDelegate-Protocol.h"

@class CarouselItemCompactPostNode, Comment, Subreddit;

@protocol CarouselItemCompactPostNodeDelegate <CarouselItemNodeDelegate>
- (void)carouselItemCompactPostNode:(CarouselItemCompactPostNode *)arg1 didTapSubreddit:(Subreddit *)arg2;
- (void)carouselItemCompactPostNode:(CarouselItemCompactPostNode *)arg1 didTapComment:(Comment *)arg2;
@end

