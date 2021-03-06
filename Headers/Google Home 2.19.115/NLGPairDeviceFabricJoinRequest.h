//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGPairDeviceRequest.h"

@class NLWeaveDeviceDescriptor, NSData;

@interface NLGPairDeviceFabricJoinRequest : NLGPairDeviceRequest
{
    NSData *_fabricConfigData;
    NLWeaveDeviceDescriptor *_weaveDeviceDescriptor;
}

@property(retain, nonatomic) NLWeaveDeviceDescriptor *weaveDeviceDescriptor; // @synthesize weaveDeviceDescriptor=_weaveDeviceDescriptor;
@property(retain, nonatomic) NSData *fabricConfigData; // @synthesize fabricConfigData=_fabricConfigData;
- (void).cxx_destruct;
- (void)weaveResponseIdentifyDeviceDidFinishWithError:(id)arg1;
- (void)weaveResponseIdentifyDeviceDidFinish:(id)arg1;
- (void)weaveResponseJoinExistingFabricDidFinishWithError:(id)arg1;
- (void)weaveResponseJoinExistingFabricDidFinish:(id)arg1;
- (void)beginFabricJoin;
- (void)execute;

@end

