//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedOliveDataProviding-Protocol.h"

@class NSString;
@protocol GCAConfigurationFlags, HMEDeviceData, HMEUserData;

@interface HMEFeedOliveModelController : NSObject <HMEFeedOliveDataProviding>
{
    id <GCAConfigurationFlags> _flags;
    id <HMEUserData> _userData;
    id <HMEDeviceData> _deviceData;
    long long _oliveLinkState;
}

@property(nonatomic) long long oliveLinkState; // @synthesize oliveLinkState=_oliveLinkState;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) id <HMEUserData> userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)fetchOliveLinkStateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool oliveBannerEnabled;
- (id)initWithDeviceData:(id)arg1 userData:(id)arg2 flags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

