//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterMomentSportEventsFetcher-Protocol.h>

@class NSString;

@interface TFNTwitterAPIMomentSportEventsFetcher : NSObject <TFNTwitterMomentSportEventsFetcher>
{
    _Bool _fetching;
    NSString *_accountID;
}

@property(getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)fetchSportEventsWithIDs:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

