//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMMVModel;

@interface VEEditorSessionConfig : NSObject
{
    _Bool _isVideoNeedReverse;
    _Bool _useNewMudule;
    _Bool _shouldCheckPlayBack;
    _Bool _useLVModel;
    _Bool _needSeekWhenPlayerAndItemNotReady;
    IESMMMVModel *_mvModel;
}

@property(nonatomic) _Bool needSeekWhenPlayerAndItemNotReady; // @synthesize needSeekWhenPlayerAndItemNotReady=_needSeekWhenPlayerAndItemNotReady;
@property(nonatomic) _Bool useLVModel; // @synthesize useLVModel=_useLVModel;
@property(retain, nonatomic) IESMMMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(nonatomic) _Bool shouldCheckPlayBack; // @synthesize shouldCheckPlayBack=_shouldCheckPlayBack;
@property(nonatomic) _Bool useNewMudule; // @synthesize useNewMudule=_useNewMudule;
@property(nonatomic) _Bool isVideoNeedReverse; // @synthesize isVideoNeedReverse=_isVideoNeedReverse;
- (void).cxx_destruct;
- (id)init;

@end

