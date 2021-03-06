//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "IGListDiffable-Protocol.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWEGeneralActivityModel : AWEBaseApiModel <IGListDiffable>
{
    NSString *_title;
    NSString *_linkDescription;
    NSString *_linkURL;
    AWEURLModel *_bannerURL;
    NSString *_activityCardID;
    NSNumber *_aladdinID;
}

+ (id)bannerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *aladdinID; // @synthesize aladdinID=_aladdinID;
@property(copy, nonatomic) NSString *activityCardID; // @synthesize activityCardID=_activityCardID;
@property(retain, nonatomic) AWEURLModel *bannerURL; // @synthesize bannerURL=_bannerURL;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *linkDescription; // @synthesize linkDescription=_linkDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

