//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGBrowserViewController;

@interface IGBrowserSectionController : IGListSectionController
{
    IGBrowserViewController *_browserViewController;
    unsigned long long _sourceType;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithBrowserViewController:(id)arg1 sourceType:(unsigned long long)arg2;

@end

