//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@protocol IGFilteredFeedViewControllerType;

@protocol IGFilteredFeedViewControllerDelegate <NSObject>
- (void)filteredFeedViewControllerWasSelected:(id <IGFilteredFeedViewControllerType>)arg1;
- (_Bool)shouldSetInitialTopOffsetForFilteredFeedViewController:(id <IGFilteredFeedViewControllerType>)arg1;
- (double)initialTopOffsetForFilteredFeedViewController:(id <IGFilteredFeedViewControllerType>)arg1;
@end

