//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class NSString;

@interface AWEGoodsOrderShareModel : MTLModel
{
    NSString *_originUserID;
    NSString *_originItemID;
    NSString *_promotionID;
    NSString *_goodsTitle;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *goodsTitle; // @synthesize goodsTitle=_goodsTitle;
@property(copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(copy, nonatomic) NSString *originItemID; // @synthesize originItemID=_originItemID;
@property(copy, nonatomic) NSString *originUserID; // @synthesize originUserID=_originUserID;
- (void).cxx_destruct;

@end
