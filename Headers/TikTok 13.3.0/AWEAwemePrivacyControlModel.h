//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEAwemePrivacyControlModel : NSObject
{
    _Bool _isOn;
    _Bool _isSelected;
    _Bool _switchDisabled;
    _Bool _dummySwitchDisabled;
    long long _type;
    CDUnknownBlockType _switchBlock;
    CDUnknownBlockType _selectCellBlock;
    NSString *_tip;
    NSString *_selectTip;
    long long _index;
}

@property(nonatomic) _Bool dummySwitchDisabled; // @synthesize dummySwitchDisabled=_dummySwitchDisabled;
@property(nonatomic) _Bool switchDisabled; // @synthesize switchDisabled=_switchDisabled;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *selectTip; // @synthesize selectTip=_selectTip;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) CDUnknownBlockType selectCellBlock; // @synthesize selectCellBlock=_selectCellBlock;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
