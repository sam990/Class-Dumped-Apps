//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTCTDeviceId, ASTCTProvider;

@interface ASTAPICommonMediaControlArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTCTDeviceId *deviceId; // @dynamic deviceId;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasProvider; // @dynamic hasProvider;
@property(retain, nonatomic) ASTCTProvider *provider; // @dynamic provider;

@end

