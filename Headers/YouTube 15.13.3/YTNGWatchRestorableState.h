//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, YTICommand;

@interface YTNGWatchRestorableState : NSObject <NSCoding>
{
    int _watchEndpointSource;
    YTICommand *_navEndpoint;
    unsigned long long _watchIdentityType;
    NSString *_watchIdentityID;
    NSDate *_watchDate;
}

@property(retain, nonatomic) NSDate *watchDate; // @synthesize watchDate=_watchDate;
@property(retain, nonatomic) NSString *watchIdentityID; // @synthesize watchIdentityID=_watchIdentityID;
@property(nonatomic) unsigned long long watchIdentityType; // @synthesize watchIdentityType=_watchIdentityType;
@property(nonatomic) int watchEndpointSource; // @synthesize watchEndpointSource=_watchEndpointSource;
@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
- (void).cxx_destruct;
- (id)keyedArchiver;
- (id)keyedUnarchiverFromData:(id)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
