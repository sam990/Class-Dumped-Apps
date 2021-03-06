//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFNeverAnimatingTableViewCell.h>

#import <PSPDFKitUI/PSPDFThemeObserver-Protocol.h>

@class NSString, UIImageView, UILabel, UITextView, UIView;

@interface PSPDFLabelValueBaseCell : PSPDFNeverAnimatingTableViewCell <PSPDFThemeObserver>
{
    UITextView *_titleTextView;
    UIView *_valueView;
}

- (void).cxx_destruct;
- (void)applyTheme:(id)arg1;
- (id)defaultValueView;
@property(readonly, nonatomic) UIView *valueView; // @synthesize valueView=_valueView;
@property(readonly, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

@end

