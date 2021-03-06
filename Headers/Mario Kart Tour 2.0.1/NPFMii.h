//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIColor;

@interface NPFMii : NSObject
{
    int _favoriteColor;
    int _format;
    int _type;
    int _expression;
    int _clothesColor;
    NSString *_miiId;
    NSData *_coreData;
    NSData *_storeData;
    NSString *_imageOrigin;
    NSString *_etag;
    UIColor *_bgColor;
    long long _cameraXRotate;
    long long _cameraYRotate;
    long long _cameraZRotate;
    long long _characterXRotate;
    long long _characterYRotate;
    long long _characterZRotate;
    NSString *_urlTemplate;
    long long _version;
}

+ (id)getMiiColorString:(int)arg1;
+ (int)getMiiColor:(id)arg1;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *urlTemplate; // @synthesize urlTemplate=_urlTemplate;
@property(nonatomic) long long characterZRotate; // @synthesize characterZRotate=_characterZRotate;
@property(nonatomic) long long characterYRotate; // @synthesize characterYRotate=_characterYRotate;
@property(nonatomic) long long characterXRotate; // @synthesize characterXRotate=_characterXRotate;
@property(nonatomic) long long cameraZRotate; // @synthesize cameraZRotate=_cameraZRotate;
@property(nonatomic) long long cameraYRotate; // @synthesize cameraYRotate=_cameraYRotate;
@property(nonatomic) long long cameraXRotate; // @synthesize cameraXRotate=_cameraXRotate;
@property(nonatomic) int clothesColor; // @synthesize clothesColor=_clothesColor;
@property(copy, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) int expression; // @synthesize expression=_expression;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(copy, nonatomic) NSString *imageOrigin; // @synthesize imageOrigin=_imageOrigin;
@property(nonatomic) int favoriteColor; // @synthesize favoriteColor=_favoriteColor;
@property(copy, nonatomic) NSData *storeData; // @synthesize storeData=_storeData;
@property(copy, nonatomic) NSData *coreData; // @synthesize coreData=_coreData;
@property(copy, nonatomic) NSString *miiId; // @synthesize miiId=_miiId;
- (void).cxx_destruct;
- (id)getImageUrl;
- (id)init;

@end

