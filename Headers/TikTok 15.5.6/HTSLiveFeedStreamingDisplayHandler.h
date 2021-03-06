//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveFeedAdVideo, LiveRoomModel, NSTimer;
@protocol IESLiveSettings;

@interface HTSLiveFeedStreamingDisplayHandler : NSObject
{
    _Bool _isCompactMode;
    id _currentStreamingObject;
    NSTimer *_compactStreamingLoopNextTimer;
    LiveRoomModel *_currentRoom;
    IESLiveFeedAdVideo *_currentAdVideo;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IESLiveFeedAdVideo *currentAdVideo; // @synthesize currentAdVideo=_currentAdVideo;
@property(retain, nonatomic) LiveRoomModel *currentRoom; // @synthesize currentRoom=_currentRoom;
@property(nonatomic) __weak NSTimer *compactStreamingLoopNextTimer; // @synthesize compactStreamingLoopNextTimer=_compactStreamingLoopNextTimer;
@property(nonatomic) __weak id currentStreamingObject; // @synthesize currentStreamingObject=_currentStreamingObject;
@property(nonatomic) _Bool isCompactMode; // @synthesize isCompactMode=_isCompactMode;
- (void).cxx_destruct;
- (void)beginStreamingLoopWithObjects:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 forStreamingController:(id)arg3;
- (void)adjustCompactStreamingController:(id)arg1 collectionView:(id)arg2;
- (struct CGRect)streamingViewFrameFromCellFrame:(struct CGRect)arg1;
- (struct CGRect)regularStreamingViewFrameFromCellFrame:(struct CGRect)arg1;
- (void)previewAdVideo:(id)arg1 streamingController:(id)arg2 targetCell:(id)arg3;
- (void)previewLiveStream:(id)arg1 streamingController:(id)arg2 targetCell:(id)arg3;
- (void)adjustRegularStreamingController:(id)arg1 collectionView:(id)arg2;
- (void)adjustStreamingController:(id)arg1 collectionView:(id)arg2;
- (id)initWithLayoutStyle:(unsigned long long)arg1;
- (void)dealloc;

@end

