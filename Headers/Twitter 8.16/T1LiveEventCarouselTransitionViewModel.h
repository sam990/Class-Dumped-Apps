//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterEntityImageInfo, TFNTwitterLiveEventCarouselEntry;

@interface T1LiveEventCarouselTransitionViewModel : NSObject
{
    _Bool _showTransitionTitle;
    _Bool _showDisplayName;
    _Bool _showDisplayUsername;
    _Bool _showVerifiedIcon;
    _Bool _showVideoDurationString;
    _Bool _showBroadcastBadgeView;
    _Bool _broadcastLive;
    _Bool _showReplayButton;
    _Bool _allowReplayOfCurrentItem;
    TFNTwitterLiveEventCarouselEntry *_carouselEntry;
    TFNTwitterEntityImageInfo *_thumbnailImageInfo;
    NSString *_displayName;
    NSString *_displayUsername;
    NSString *_displayVideoDurationString;
    NSString *_broadcastTypeString;
    unsigned long long _displayMode;
}

+ (id)viewModelWithCarouselEntry:(id)arg1 allowReplayOfCurrentItem:(_Bool)arg2 displayMode:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) _Bool allowReplayOfCurrentItem; // @synthesize allowReplayOfCurrentItem=_allowReplayOfCurrentItem;
@property(readonly, nonatomic) _Bool showReplayButton; // @synthesize showReplayButton=_showReplayButton;
@property(readonly, nonatomic, getter=isBroadcastLive) _Bool broadcastLive; // @synthesize broadcastLive=_broadcastLive;
@property(readonly, nonatomic) _Bool showBroadcastBadgeView; // @synthesize showBroadcastBadgeView=_showBroadcastBadgeView;
@property(readonly, copy, nonatomic) NSString *broadcastTypeString; // @synthesize broadcastTypeString=_broadcastTypeString;
@property(readonly, nonatomic) _Bool showVideoDurationString; // @synthesize showVideoDurationString=_showVideoDurationString;
@property(readonly, copy, nonatomic) NSString *displayVideoDurationString; // @synthesize displayVideoDurationString=_displayVideoDurationString;
@property(readonly, nonatomic) _Bool showVerifiedIcon; // @synthesize showVerifiedIcon=_showVerifiedIcon;
@property(readonly, nonatomic) _Bool showDisplayUsername; // @synthesize showDisplayUsername=_showDisplayUsername;
@property(readonly, copy, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(readonly, nonatomic) _Bool showDisplayName; // @synthesize showDisplayName=_showDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool showTransitionTitle; // @synthesize showTransitionTitle=_showTransitionTitle;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *thumbnailImageInfo; // @synthesize thumbnailImageInfo=_thumbnailImageInfo;
@property(retain, nonatomic) TFNTwitterLiveEventCarouselEntry *carouselEntry; // @synthesize carouselEntry=_carouselEntry;
- (void).cxx_destruct;
- (_Bool)isEqualToViewModel:(id)arg1;
- (id)initWithCarouselEntryBroadcast:(id)arg1 allowReplayOfCurrentItem:(_Bool)arg2 displayMode:(unsigned long long)arg3;
- (id)initWithCarouselEntryVideo:(id)arg1 allowReplayOfCurrentItem:(_Bool)arg2 displayMode:(unsigned long long)arg3;
- (id)initWithCarouselEntrySlate:(id)arg1 allowReplayOfCurrentItem:(_Bool)arg2 displayMode:(unsigned long long)arg3;

@end

