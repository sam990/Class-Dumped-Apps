//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHAssetCollection, PHFetchResult, UIImage;

@interface GDAMediaCollection : NSObject
{
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    NSString *_title;
    UIImage *_thumbnail;
}

+ (id)firstNonHiddenAsset:(id)arg1;
+ (id)mediaCollectionFromAssetCollection:(id)arg1 withAssetFetchResult:(id)arg2;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)formattedDescriptionOfAssets;

@end

