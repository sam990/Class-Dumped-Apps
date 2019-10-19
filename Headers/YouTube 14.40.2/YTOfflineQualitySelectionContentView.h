//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyleProvider.h"
#import "YTPageStyling.h"

@class NSString, YTFormatOptionsView, YTIOfflineabilityRenderer_Format, YTQTMButton;

@interface YTOfflineQualitySelectionContentView : UIView <YTPageStyleProvider, YTPageStyling>
{
    YTQTMButton *_rememberButton;
    UIView *_separatorOne;
    YTFormatOptionsView *_optionsView;
}

@property(readonly, nonatomic) YTFormatOptionsView *optionsView; // @synthesize optionsView=_optionsView;
- (void).cxx_destruct;
- (void)didPressRememberCheckbox;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic, getter=isRememberChecked) _Bool rememberChecked;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) YTIOfflineabilityRenderer_Format *selectedFormat;
- (id)initWithOfflineFormatOptionsView:(id)arg1 rememberChecked:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
