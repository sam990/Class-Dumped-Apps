//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIAutomixTunerSettingRenderer;

@interface YTMAutomixTunerSettingResponderEvent : YTResponderEvent
{
    YTIAutomixTunerSettingRenderer *_automixTunerSetting;
}

+ (id)eventWithAutomixTunerSetting:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTIAutomixTunerSettingRenderer *automixTunerSetting; // @synthesize automixTunerSetting=_automixTunerSetting;
- (void).cxx_destruct;
- (id)initWithAutomixTunerSetting:(id)arg1 firstResponder:(id)arg2;

@end
