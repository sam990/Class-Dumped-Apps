//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface SKTUIGridContactDisplayOptions : NSObject
{
    _Bool _wrapContactName;
    _Bool _wrapContactMethod;
    double _itemWidth;
    UIFont *_preferredTextFont;
    UIFont *_preferredDetailFont;
    struct CGSize _profileImageSize;
}

@property(readonly, nonatomic) _Bool wrapContactMethod; // @synthesize wrapContactMethod=_wrapContactMethod;
@property(readonly, nonatomic) _Bool wrapContactName; // @synthesize wrapContactName=_wrapContactName;
@property(retain, nonatomic) UIFont *preferredDetailFont; // @synthesize preferredDetailFont=_preferredDetailFont;
@property(readonly, nonatomic) UIFont *preferredTextFont; // @synthesize preferredTextFont=_preferredTextFont;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(readonly, nonatomic) struct CGSize profileImageSize; // @synthesize profileImageSize=_profileImageSize;
- (void).cxx_destruct;
- (id)initWithProfileImageSize:(struct CGSize)arg1 preferredTextFont:(id)arg2 wrapContactName:(_Bool)arg3 wrapContactMethod:(_Bool)arg4;

@end
