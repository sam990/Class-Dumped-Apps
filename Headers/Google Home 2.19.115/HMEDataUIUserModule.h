//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMEErrorCenter;

@interface HMEDataUIUserModule : NSObject
{
    id <HMEErrorCenter> _errorCenter;
    CDUnknownBlockType _errorCoordinatorFactory;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType errorCoordinatorFactory; // @synthesize errorCoordinatorFactory=_errorCoordinatorFactory;
@property(readonly, nonatomic) id <HMEErrorCenter> errorCenter; // @synthesize errorCenter=_errorCenter;
- (void).cxx_destruct;
- (id)init;

@end

