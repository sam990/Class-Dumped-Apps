//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class ACCMusicModel, NSMutableArray, UIView, UIViewController;
@protocol ACCScrollStringButtonProtocol;

@protocol ACCRecordSelectMusicComponentProtocol <ACCComponentProtocol>
@property(nonatomic) __weak UIViewController *selectMusicVC;
@property(nonatomic) _Bool hasSelectedMusic;
@property(retain, nonatomic) NSMutableArray *lastSectionFrames;
@property(retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicButton;
- (void)applyForceBindMusic:(ACCMusicModel *)arg1;
- (void)refreshMusicCoverWithMusic:(ACCMusicModel *)arg1;
@end

