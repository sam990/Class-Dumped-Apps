//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPVASTModel.h"

@class MPVASTLinearAd, NSArray, NSString;

@interface MPVASTCreative : MPVASTModel
{
    NSString *_identifier;
    NSString *_sequence;
    NSString *_adID;
    MPVASTLinearAd *_linearAd;
    NSArray *_companionAds;
}

+ (id)modelMap;
@property(readonly, nonatomic) NSArray *companionAds; // @synthesize companionAds=_companionAds;
@property(readonly, nonatomic) MPVASTLinearAd *linearAd; // @synthesize linearAd=_linearAd;
@property(readonly, copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(readonly, copy, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
