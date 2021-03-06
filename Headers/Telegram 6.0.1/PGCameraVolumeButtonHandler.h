//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGCameraVolumeButtonHandler : NSObject
{
    _Bool _enabled;
    _Bool _ignoring;
    CDUnknownBlockType _upButtonPressedBlock;
    CDUnknownBlockType _upButtonReleasedBlock;
    CDUnknownBlockType _downButtonPressedBlock;
    CDUnknownBlockType _downButtonReleasedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType downButtonReleasedBlock; // @synthesize downButtonReleasedBlock=_downButtonReleasedBlock;
@property(copy, nonatomic) CDUnknownBlockType downButtonPressedBlock; // @synthesize downButtonPressedBlock=_downButtonPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType upButtonReleasedBlock; // @synthesize upButtonReleasedBlock=_upButtonReleasedBlock;
@property(copy, nonatomic) CDUnknownBlockType upButtonPressedBlock; // @synthesize upButtonPressedBlock=_upButtonPressedBlock;
@property(nonatomic) _Bool ignoring; // @synthesize ignoring=_ignoring;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_ignoreFinished:(id)arg1;
- (void)ignoreEventsFor:(double)arg1 andDisable:(_Bool)arg2;
- (void)disableFor:(double)arg1;
- (void)enableIn:(double)arg1;
- (void)handleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithUpButtonPressedBlock:(CDUnknownBlockType)arg1 upButtonReleasedBlock:(CDUnknownBlockType)arg2 downButtonPressedBlock:(CDUnknownBlockType)arg3 downButtonReleasedBlock:(CDUnknownBlockType)arg4;

@end

