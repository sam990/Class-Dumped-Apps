//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol TFNPickableValue, TFNValuePicker;

@protocol TFNValuePickerDataSource <NSObject>

@optional
- (NSString *)confirmationMessageForPicker:(id <TFNValuePicker>)arg1;
- (NSString *)showMoreValuesMessageForPicker:(id <TFNValuePicker>)arg1;
- (NSArray *)addValueMessagesForPicker:(id <TFNValuePicker>)arg1;
- (NSString *)addValueMessageForPicker:(id <TFNValuePicker>)arg1;
- (NSString *)picker:(id <TFNValuePicker>)arg1 messageForValue:(id <TFNPickableValue>)arg2;
- (NSString *)unpickableTextForPicker:(id <TFNValuePicker>)arg1;
- (NSSet *)unpickableValuesForPicker:(id <TFNValuePicker>)arg1;
- (NSSet *)initiallyPickedValuesForPicker:(id <TFNValuePicker>)arg1;
- (id <TFNPickableValue>)initiallyPickedValueForPicker:(id <TFNValuePicker>)arg1;
- (NSArray *)valueSectionNamesForPicker:(id <TFNValuePicker>)arg1;
- (NSArray *)valueSectionsForPicker:(id <TFNValuePicker>)arg1;
- (NSArray *)valuesForPicker:(id <TFNValuePicker>)arg1;
@end
