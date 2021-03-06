//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistEmptyViewAdditionalCallToAction-Protocol.h"

@class NSString, SPTFreeTierPlaylistLogger;
@protocol SPTAssistedCurationUIService, SPTFreeTierPlaylistViewModel;

@interface SPTFreeTierPlaylistAdditionalCallToActionAddSongsImplementation : NSObject <SPTFreeTierPlaylistEmptyViewAdditionalCallToAction>
{
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    SPTFreeTierPlaylistLogger *_logger;
}

@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *educationalText;
- (void)performAction:(id)arg1;
@property(readonly, nonatomic) _Bool enabled;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithPlaylistViewModel:(id)arg1 assistedCurationUIService:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

