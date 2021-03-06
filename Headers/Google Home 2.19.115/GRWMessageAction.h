//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GRWApp, NSDictionary, NSString, NSURL, UIColor;

@interface GRWMessageAction : NSObject <NSSecureCoding>
{
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_inkColor;
    NSDictionary *_schemes;
    NSURL *_URL;
    NSString *_promotionCode;
    GRWApp *_app;
    long long _type;
    long long _style;
}

+ (id)styleAsString:(long long)arg1;
+ (id)typeAsString:(long long)arg1;
+ (id)actionWithTitle:(id)arg1 titleColor:(id)arg2 inkColor:(id)arg3 promotionCode:(id)arg4 app:(id)arg5 type:(long long)arg6 style:(long long)arg7 URL:(id)arg8;
+ (id)actionWithTitle:(id)arg1 schemes:(id)arg2 promotionCode:(id)arg3 app:(id)arg4 type:(long long)arg5 style:(long long)arg6 URL:(id)arg7;
+ (id)actionWithDismissType;
+ (id)actionWithNegativeType;
+ (id)actionWithPositiveType;
+ (_Bool)supportsSecureCoding;
+ (long long)actionStyleForStyle:(int)arg1;
+ (long long)actionTypeForType:(int)arg1;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) GRWApp *app; // @synthesize app=_app;
@property(readonly, copy, nonatomic) NSString *promotionCode; // @synthesize promotionCode=_promotionCode;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSDictionary *schemes; // @synthesize schemes=_schemes;
@property(readonly, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)styleAsString;
- (id)typeAsString;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAction:(id)arg1;
- (_Bool)isValid;
- (id)initWithTitle:(id)arg1 schemes:(id)arg2 promotionCode:(id)arg3 app:(id)arg4 type:(long long)arg5 style:(long long)arg6 URL:(id)arg7;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 inkColor:(id)arg3 promotionCode:(id)arg4 app:(id)arg5 type:(long long)arg6 style:(long long)arg7 URL:(id)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;

@end

