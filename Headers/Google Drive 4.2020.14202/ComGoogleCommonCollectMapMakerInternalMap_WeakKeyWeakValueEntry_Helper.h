//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonCollectMapMakerInternalMap_InternalEntryHelper-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectMapMakerInternalMap_WeakKeyWeakValueEntry_Helper : NSObject <ComGoogleCommonCollectMapMakerInternalMap_InternalEntryHelper>
{
}

+ (void)initialize;
+ (id)instance;
- (id)newEntryWithComGoogleCommonCollectMapMakerInternalMap_Segment:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withComGoogleCommonCollectMapMakerInternalMap_InternalEntry:(id)arg4;
- (void)setValueWithComGoogleCommonCollectMapMakerInternalMap_Segment:(id)arg1 withComGoogleCommonCollectMapMakerInternalMap_InternalEntry:(id)arg2 withId:(id)arg3;
- (id)copy__WithComGoogleCommonCollectMapMakerInternalMap_Segment:(id)arg1 withComGoogleCommonCollectMapMakerInternalMap_InternalEntry:(id)arg2 withComGoogleCommonCollectMapMakerInternalMap_InternalEntry:(id)arg3;
- (id)newSegmentWithComGoogleCommonCollectMapMakerInternalMap:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)valueStrength;
- (id)keyStrength;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

