//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface PSPDFAudioSessionManager : NSObject
{
    NSHashTable *_recorders;
    unsigned long long _lastNumberOfActiveRecorders;
    NSHashTable *_players;
    unsigned long long _lastNumberOfActivePlayers;
    NSString *_defaultAudioSessionCategory;
    unsigned long long _defaultAudioSessionCategoryOptions;
}

@property(nonatomic) unsigned long long defaultAudioSessionCategoryOptions; // @synthesize defaultAudioSessionCategoryOptions=_defaultAudioSessionCategoryOptions;
@property(copy, nonatomic) NSString *defaultAudioSessionCategory; // @synthesize defaultAudioSessionCategory=_defaultAudioSessionCategory;
@property(nonatomic) unsigned long long lastNumberOfActivePlayers; // @synthesize lastNumberOfActivePlayers=_lastNumberOfActivePlayers;
@property(readonly, nonatomic) NSHashTable *players; // @synthesize players=_players;
@property(nonatomic) unsigned long long lastNumberOfActiveRecorders; // @synthesize lastNumberOfActiveRecorders=_lastNumberOfActiveRecorders;
@property(readonly, nonatomic) NSHashTable *recorders; // @synthesize recorders=_recorders;
- (void).cxx_destruct;
- (_Bool)configureAudioSession:(id *)arg1;
- (void)configureAudioSessionAndLogError;
- (void)removePlayer:(id)arg1;
- (void)addPlayer:(id)arg1;
- (void)removeRecorder:(id)arg1;
- (void)addRecorder:(id)arg1;
- (id)init;

@end

