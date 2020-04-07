//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol HAMMediaSourceDelegate;

@protocol HAMMediaSource <NSObject>
@property(nonatomic) __weak id <HAMMediaSourceDelegate> delegate;
@property(readonly, nonatomic) _Bool prepared;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)suspend;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (void)setRate:(float)arg1;
@end
