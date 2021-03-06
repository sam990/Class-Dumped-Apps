//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSArray, NSString;

@interface AWEPOIPhotoModel : AWEBaseApiModel
{
    NSString *_title;
    AWEURLModel *_imageLarge;
    AWEURLModel *_imageThumb;
    NSString *_watermark;
    NSArray *_tags;
}

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *watermark; // @synthesize watermark=_watermark;
@property(retain, nonatomic) AWEURLModel *imageThumb; // @synthesize imageThumb=_imageThumb;
@property(retain, nonatomic) AWEURLModel *imageLarge; // @synthesize imageLarge=_imageLarge;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

