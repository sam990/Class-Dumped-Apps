//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class UIColor;

@interface IGFollowButtonBackgroundStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIColor *_solid_color;
    UIColor *_outline_color;
    UIColor *_solidWithOutline_outlineColor;
    UIColor *_solidWithOutline_solidColor;
}

+ (id)solidWithOutlineWithOutlineColor:(id)arg1 solidColor:(id)arg2;
+ (id)solidWithColor:(id)arg1;
+ (id)outlineWithColor:(id)arg1;
+ (id)clear;
- (void).cxx_destruct;
- (void)matchClear:(CDUnknownBlockType)arg1 solid:(CDUnknownBlockType)arg2 outline:(CDUnknownBlockType)arg3 solidWithOutline:(CDUnknownBlockType)arg4;

@end

