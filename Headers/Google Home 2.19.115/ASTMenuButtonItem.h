//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTMenuActionableItem-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString, NSValue, UIColor;

@interface ASTMenuButtonItem : NSObject <NSCopying, ASTMenuActionableItem>
{
    _Bool _enabled;
    _Bool _uppercaseTitle;
    _Bool _flat;
    _Bool _hidden;
    _Bool _adjustsImageWhenDisabled;
    _Bool _selected;
    id _target;
    SEL _action;
    NSString *_accessibilityIdentifier;
    long long _identifier;
    NSString *_title;
    NSString *_imageName;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    unsigned long long _additionalAccessibilityTraits;
    NSNumber *_disabledAlpha;
    UIColor *_titleColor;
    UIColor *_disabledTitleColor;
    UIColor *_inkColor;
    NSValue *_contentEdgeInsetsValue;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_borderWidth;
    NSNumber *_cornerRadius;
    UIColor *_borderColor;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSNumber *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSNumber *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSValue *contentEdgeInsetsValue; // @synthesize contentEdgeInsetsValue=_contentEdgeInsetsValue;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(retain, nonatomic) UIColor *disabledTitleColor; // @synthesize disabledTitleColor=_disabledTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSNumber *disabledAlpha; // @synthesize disabledAlpha=_disabledAlpha;
@property(nonatomic) unsigned long long additionalAccessibilityTraits; // @synthesize additionalAccessibilityTraits=_additionalAccessibilityTraits;
@property(nonatomic) _Bool adjustsImageWhenDisabled; // @synthesize adjustsImageWhenDisabled=_adjustsImageWhenDisabled;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isFlat) _Bool flat; // @synthesize flat=_flat;
@property(nonatomic, getter=isUppercaseTitle) _Bool uppercaseTitle; // @synthesize uppercaseTitle=_uppercaseTitle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

