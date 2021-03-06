//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface BKBloksFlexboxDecorationConfig : NSObject
{
    _Bool _clipping;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_borderThemedColor;
    double _cornerRadius;
    UIColor *_cornerBackgroundColor;
    UIColor *_cornerBackgroundThemedColor;
    double _shadowOpacity;
    UIColor *_shadowColor;
    UIColor *_shadowThemedColor;
}

+ (id)newWithBorderColor:(id)arg1 borderThemedColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4 cornerBackgroundColor:(id)arg5 cornerBackgroundThemedColor:(id)arg6 shadowOpacity:(double)arg7 shadowColor:(id)arg8 shadowThemedColor:(id)arg9 clipping:(_Bool)arg10;
@property(readonly, nonatomic) _Bool clipping; // @synthesize clipping=_clipping;
@property(readonly, nonatomic) UIColor *shadowThemedColor; // @synthesize shadowThemedColor=_shadowThemedColor;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) UIColor *cornerBackgroundThemedColor; // @synthesize cornerBackgroundThemedColor=_cornerBackgroundThemedColor;
@property(readonly, nonatomic) UIColor *cornerBackgroundColor; // @synthesize cornerBackgroundColor=_cornerBackgroundColor;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) UIColor *borderThemedColor; // @synthesize borderThemedColor=_borderThemedColor;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

