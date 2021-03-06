//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIView;
@protocol TVLPlayerController;

@protocol TVLPlayer <NSObject>
@property(nonatomic) long long playerViewAlignMode;
@property(nonatomic, getter=isHardwareDecodeEnabled) _Bool hardwareDecodeEnabled;
@property(readonly, nonatomic) long long playbackState;
@property(nonatomic) unsigned long long audioRenderDeviceType;
@property(copy, nonatomic) NSDictionary *SEI;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) UIView *playerView;
@property(nonatomic) __weak id <TVLPlayerController> controller;
- (NSDictionary *)versionInfo;
- (void)setOptionValue:(id)arg1 forIdentifier:(id)arg2;
- (NSString *)getStringValueForKey:(int)arg1;
- (void)setFloatValue:(float)arg1 forKey:(int)arg2;
- (float)getFloatValueForKey:(int)arg1;
- (int)getCurrentTime;
- (NSString *)getPlayerVersion;
- (NSString *)getIPAddress;
- (long long)getInt64ValueForKey:(int)arg1;
- (void)setValue:(int)arg1 forKey:(int)arg2;
- (void)setRecordPath:(NSString *)arg1;
- (_Bool)isContainerOfPlayerCore:(id)arg1;
- (void)takeScreenShot:(void (^)(UIImage *))arg1;
- (void)setHardwareDecode:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayerViewScaleMode:(long long)arg1;
- (void)setImageLayoutType:(unsigned long long)arg1;
- (NSString *)playerCoreVersion;
- (long long)numberOfBytesTransferred;
- (long long)numberOfBytesPlayed;
- (void)reset;
- (void)close;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)replaceCurrentURLWithPlayURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
@end

