//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUUnlockablesOndemandAssetImageBox-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUUnlockablesOndemandAssetStickerBox <NSObject, NSCoding, NSCopying, SOJUUnlockablesOndemandAssetImageBox>
@property(readonly, copy, nonatomic) NSString *resourceUrl;
@property(readonly, copy, nonatomic) NSString *templateId;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *rotation;
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, copy, nonatomic) NSNumber *width;
@property(readonly, copy, nonatomic) NSNumber *posY;
@property(readonly, copy, nonatomic) NSNumber *posX;
@property(readonly, copy, nonatomic) NSString *imagePngBase64;
@end
