//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveFilterActions-Protocol.h"

@class IESLiveRoomFilter, LiveRoomModel, NSString, RACDisposable;
@protocol HTSLiveFilterReactions, IESActionDispatcher;

@interface HTSLiveFilterStore : NSObject <HTSLiveFilterActions>
{
    _Bool _isDraw;
    _Bool _showFilterRedDot;
    id <HTSLiveFilterReactions> _reaction;
    LiveRoomModel *_roomModel;
    unsigned long long _currentFilterIndex;
    IESLiveRoomFilter *_selectedFilter;
    id <IESActionDispatcher> _dispatcher;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) _Bool showFilterRedDot; // @synthesize showFilterRedDot=_showFilterRedDot;
@property(retain, nonatomic) IESLiveRoomFilter *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(nonatomic) _Bool isDraw; // @synthesize isDraw=_isDraw;
@property(nonatomic) unsigned long long currentFilterIndex; // @synthesize currentFilterIndex=_currentFilterIndex;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) __weak id <HTSLiveFilterReactions> reaction; // @synthesize reaction=_reaction;
- (void).cxx_destruct;
- (void)applyFilter:(id)arg1;
- (void)updateFilterUsed:(_Bool)arg1;
- (void)changeFilterIndex:(unsigned long long)arg1 isDraw:(_Bool)arg2;
- (void)setup;
- (id)initWitRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

