//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

#import "GDKAutoSizable-Protocol.h"

@class NSString, UIFont;
@protocol GDKAutoSizablePresenter;

@interface GDKAutoSizableTextCVO : GOOBaseContentViewObject <GDKAutoSizable>
{
    _Bool _showSeparator;
    id <GDKAutoSizablePresenter> _autoSizablePresenter;
    NSString *_text;
    UIFont *_font;
}

@property(readonly, nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <GDKAutoSizablePresenter> autoSizablePresenter; // @synthesize autoSizablePresenter=_autoSizablePresenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long heightCacheHash;
@property(readonly, nonatomic) NSString *heightCacheKey;
- (id)nonBindingContentView;
- (Class)contentViewClass;
- (id)initWithText:(id)arg1 showSeparator:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

