//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTSearchSuggestionCollectionViewCell;

@protocol YTSearchSuggestionCollectionViewCellDelegate <NSObject>
- (void)searchSuggestionCell:(YTSearchSuggestionCollectionViewCell *)arg1 didDeleteSuggestion:(NSString *)arg2;
- (void)searchSuggestionCell:(YTSearchSuggestionCollectionViewCell *)arg1 didAppendSuggestion:(NSString *)arg2;
@end
