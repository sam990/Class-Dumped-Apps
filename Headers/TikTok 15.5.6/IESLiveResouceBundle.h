//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString;

@interface IESLiveResouceBundle : NSObject
{
    _Bool _isImageFromAssets;
    IESLiveResouceBundle *_parent;
    NSString *_bundleName;
    NSBundle *_bundle;
    NSBundle *_mainBundle;
    NSString *_category;
    NSDictionary *_assetManagers;
}

+ (id)assetBundleWithBundleName:(id)arg1;
+ (id)loadAssetBundleWithCategory:(id)arg1;
+ (id)loadBundleNamesWithCategory:(id)arg1;
+ (void)switchToBundle:(id)arg1 forCategory:(id)arg2;
+ (id)assetBundleWithCategory:(id)arg1;
+ (id)assetBundleNameWithDynamicKey:(id)arg1;
+ (void)useBundleName:(id)arg1 forDynamicKey:(id)arg2;
+ (id)assetBundleNameWithCategory:(id)arg1;
+ (void)useBundle:(id)arg1 forCategory:(id)arg2;
+ (void)applyAdjunct:(id)arg1 forCategory:(id)arg2;
@property(nonatomic) _Bool isImageFromAssets; // @synthesize isImageFromAssets=_isImageFromAssets;
@property(copy, nonatomic) NSDictionary *assetManagers; // @synthesize assetManagers=_assetManagers;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain, nonatomic) IESLiveResouceBundle *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (CDUnknownBlockType)infoDic;
- (id)objectForKey:(id)arg1 type:(id)arg2;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (CDUnknownBlockType)alphaColor;
- (CDUnknownBlockType)colorName;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)image;
- (CDUnknownBlockType)config;
- (CDUnknownBlockType)is;
- (CDUnknownBlockType)value;
- (CDUnknownBlockType)pageNoQuery;
- (CDUnknownBlockType)page;
- (CDUnknownBlockType)afstring;
- (CDUnknownBlockType)astring;
- (CDUnknownBlockType)fstring;
- (CDUnknownBlockType)string;
- (CDUnknownBlockType)style;
- (void)applyAdjunct:(id)arg1;
- (CDUnknownBlockType)afilePath;
- (CDUnknownBlockType)bundlePath;
- (CDUnknownBlockType)filePathInfolder;
- (CDUnknownBlockType)filePath;

@end

