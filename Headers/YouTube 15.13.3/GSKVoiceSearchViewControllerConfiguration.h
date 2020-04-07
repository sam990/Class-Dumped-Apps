//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSKSpeechSessionConfig, NSString, NSURL, UIColor;
@protocol GSKVoiceSearchAnalytics, GSKVoiceSearchSoundController;

@interface GSKVoiceSearchViewControllerConfiguration : NSObject
{
    _Bool _showLanguagePicker;
    NSURL *_audioRecordPath;
    GSKSpeechSessionConfig *_speechSessionConfig;
    id <GSKVoiceSearchSoundController> _soundController;
    UIColor *_languagePickerHeaderColor;
    id <GSKVoiceSearchAnalytics> _analyticsLogger;
    NSString *_stickyText;
}

+ (id)createDefaultConfiguration;
@property(copy, nonatomic) NSString *stickyText; // @synthesize stickyText=_stickyText;
@property(retain, nonatomic) id <GSKVoiceSearchAnalytics> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) _Bool showLanguagePicker; // @synthesize showLanguagePicker=_showLanguagePicker;
@property(retain, nonatomic) UIColor *languagePickerHeaderColor; // @synthesize languagePickerHeaderColor=_languagePickerHeaderColor;
@property(retain, nonatomic) id <GSKVoiceSearchSoundController> soundController; // @synthesize soundController=_soundController;
@property(retain, nonatomic) GSKSpeechSessionConfig *speechSessionConfig; // @synthesize speechSessionConfig=_speechSessionConfig;
@property(copy, nonatomic) NSURL *audioRecordPath; // @synthesize audioRecordPath=_audioRecordPath;
- (void).cxx_destruct;

@end
