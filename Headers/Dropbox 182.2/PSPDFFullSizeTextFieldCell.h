//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFTableViewCell.h>

@class PSPDFTextField, UILabel;

@interface PSPDFFullSizeTextFieldCell : PSPDFTableViewCell
{
    PSPDFTextField *_textField;
}

@property(readonly, nonatomic) PSPDFTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

@end

