//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface AWEModernFeedSectionMeta : NSObject <NSCopying>
{
    _Bool _showAccessoryCell;
    _Bool _hideCell;
    double _concreteCellHeight;
    double _accessoryCellHeight;
}

@property(nonatomic) _Bool hideCell; // @synthesize hideCell=_hideCell;
@property(nonatomic) _Bool showAccessoryCell; // @synthesize showAccessoryCell=_showAccessoryCell;
@property(nonatomic) double accessoryCellHeight; // @synthesize accessoryCellHeight=_accessoryCellHeight;
@property(nonatomic) double concreteCellHeight; // @synthesize concreteCellHeight=_concreteCellHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
