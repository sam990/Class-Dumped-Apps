//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAStickerPickerSession : SCAUserTrackedEvent
{
}

- (void)setWithStickerPick:(_Bool)arg1;
- (void)setWithSearch:(_Bool)arg1;
- (void)setWithBitmojiTabVisible:(_Bool)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setStickerSubsectionViewCount:(long long)arg1;
- (void)setStickerSourceTab:(long long)arg1;
- (void)setStickerSessionId:(id)arg1;
- (void)setStickerSectionsViewed:(id)arg1;
- (void)setStickerSectionsViewCount:(long long)arg1;
- (void)setStickerSectionsEntryEvents:(id)arg1;
- (void)setStickerPickerType:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSessionStartTime:(id)arg1;
- (void)setSessionEndTime:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSearchSequenceId:(long long)arg1;
- (void)setContextualStickerLoadTime:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
