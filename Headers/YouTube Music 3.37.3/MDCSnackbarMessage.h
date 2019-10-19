//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "UIAccessibilityIdentification-Protocol.h"

@class MDCSnackbarMessageAction, NSAttributedString, NSString, UIColor;
@protocol OS_dispatch_queue;

@interface MDCSnackbarMessage : NSObject <NSCopying, UIAccessibilityIdentification>
{
    _Bool _enableRippleBehavior;
    _Bool _hasSetTextAlignment;
    NSString *accessibilityIdentifier;
    NSAttributedString *_attributedText;
    MDCSnackbarMessageAction *_action;
    UIColor *_buttonTextColor;
    double _duration;
    CDUnknownBlockType _completionHandler;
    NSString *_category;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
}

+ (_Bool)usesLegacySnackbar;
+ (void)setUsesLegacySnackbar:(_Bool)arg1;
+ (id)messageWithAttributedText:(id)arg1;
+ (id)messageWithText:(id)arg1;
@property(nonatomic) _Bool hasSetTextAlignment; // @synthesize hasSetTextAlignment=_hasSetTextAlignment;
@property(nonatomic) _Bool enableRippleBehavior; // @synthesize enableRippleBehavior=_enableRippleBehavior;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) MDCSnackbarMessageAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier;
- (void).cxx_destruct;
- (void)executeActionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeCompletionHandlerWithUserInteraction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *voiceNotificationText;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)viewClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
