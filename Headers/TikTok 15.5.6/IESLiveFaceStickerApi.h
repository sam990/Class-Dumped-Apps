//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class LiveRoomModel, NSString;

@interface IESLiveFaceStickerApi : HTSLiveApi
{
    LiveRoomModel *_roomModel;
    NSString *_heartBeatID;
    NSString *_effectID;
    long long _nextHeartBeatDuration;
}

@property(nonatomic) long long nextHeartBeatDuration; // @synthesize nextHeartBeatDuration=_nextHeartBeatDuration;
@property(copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(copy, nonatomic) NSString *heartBeatID; // @synthesize heartBeatID=_heartBeatID;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)cancelFaceStickerHeartBeat;
- (void)startFaceStickerHeartBeatWithEffectId:(id)arg1;
- (id)initWithRoomModel:(id)arg1;

@end

