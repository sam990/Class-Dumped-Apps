//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, NSString;

@interface TGModernGalleryVideoView : UIView
{
    CDUnknownBlockType _deallocBlock;
    NSString *_key;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) CDUnknownBlockType deallocBlock; // @synthesize deallocBlock=_deallocBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
- (void)cleanupPlayer;
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 player:(id)arg2 key:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 player:(id)arg2;

@end

