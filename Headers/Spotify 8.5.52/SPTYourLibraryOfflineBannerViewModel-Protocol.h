//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTYourLibraryOfflineBannerViewModelDelegate;

@protocol SPTYourLibraryOfflineBannerViewModel <NSObject>
@property(readonly, copy, nonatomic) NSString *downloadingDetails;
@property(readonly, copy, nonatomic) NSString *completedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) float percentCompleted;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTYourLibraryOfflineBannerViewModelDelegate> delegate;
- (void)loadViewModel;
@end
