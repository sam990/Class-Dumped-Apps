//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSNumber, NSString;

@interface AWSPinpointTargetingADMChannelRequest : AWSModel
{
    NSString *_clientId;
    NSString *_clientSecret;
    NSNumber *_enabled;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;

@end

