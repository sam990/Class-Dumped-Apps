//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterMediaColorPalette;

@interface TFNTwitterCardImageSpec : NSObject
{
    NSString *_uniqueIdentifier;
    NSString *_cachedDefaultURLString;
    NSString *_specKey;
    NSString *_baseURLString;
    NSString *_format;
    NSString *_defaultVariantName;
    long long _URLFormat;
    NSString *_altText;
    TFSTwitterMediaColorPalette *_colorPalette;
    struct CGSize _originalDimensions;
}

+ (id)imageSpecWithKey:(id)arg1 imageURLString:(id)arg2 originalDimensions:(struct CGSize)arg3 altText:(id)arg4 colorPalette:(id)arg5;
+ (id)imageSpecWithCardDataImageDictionary:(id)arg1 key:(id)arg2 colorPaletteArray:(id)arg3;
@property(readonly, nonatomic) TFSTwitterMediaColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(readonly, copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property(readonly, nonatomic) struct CGSize originalDimensions; // @synthesize originalDimensions=_originalDimensions;
@property(readonly, nonatomic) long long URLFormat; // @synthesize URLFormat=_URLFormat;
@property(readonly, copy, nonatomic) NSString *defaultVariantName; // @synthesize defaultVariantName=_defaultVariantName;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
@property(readonly, copy, nonatomic) NSString *specKey; // @synthesize specKey=_specKey;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImageSpec:(id)arg1;
- (id)description;
- (id)defaultImageURL;
- (id)defaultImageURLString;
- (id)initWithKey:(id)arg1 baseURLString:(id)arg2 format:(id)arg3 URLFormat:(long long)arg4 originalDimensions:(struct CGSize)arg5 defaultVariantName:(id)arg6 altText:(id)arg7 colorPalette:(id)arg8;

@end

