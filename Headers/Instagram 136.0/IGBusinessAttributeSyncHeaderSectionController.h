//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGBusinessAttributeSyncHeaderViewModel, IGUserSession;

@interface IGBusinessAttributeSyncHeaderSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    long long _flowStep;
    IGBusinessAttributeSyncHeaderViewModel *_headerViewModel;
}

- (void).cxx_destruct;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 flowStep:(long long)arg2;

@end

