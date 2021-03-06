//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMenuSheetItemView.h>

#import <TelegramUI/UIPickerViewDataSource-Protocol.h>
#import <TelegramUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSNumber, NSString, TGSecretTimerPickerView;

@interface TGSecretTimerPickerItemView : TGMenuSheetItemView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    _Bool _dark;
    NSArray *_timerValues;
    TGSecretTimerPickerView *_pickerView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)requiresDivider;
- (double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2;
- (void)setDark;
@property(readonly, nonatomic) NSNumber *value;
- (void)setPallete:(id)arg1;
- (id)initWithValues:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

