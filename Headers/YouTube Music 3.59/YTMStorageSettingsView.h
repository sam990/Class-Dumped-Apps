//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"

@class MDCSlider, NSString, QTMButton, UILabel;

@interface YTMStorageSettingsView : UIView <YTPageStyleProvider>
{
    UILabel *_storageLabel;
    UILabel *_storageDescriptionLabel;
    UILabel *_offlineInformationLabel;
    UILabel *_titleLabel;
    QTMButton *_qualitySelectButton;
    unsigned long long _qualityIndex;
    unsigned long long _storableSongCount;
    long long _pageStyle;
    MDCSlider *_slider;
    unsigned long long _availableStorage;
    unsigned long long _memoryPerSong;
}

@property(nonatomic) unsigned long long memoryPerSong; // @synthesize memoryPerSong=_memoryPerSong;
@property(readonly, nonatomic) unsigned long long availableStorage; // @synthesize availableStorage=_availableStorage;
@property(readonly, nonatomic) unsigned long long storableSongCount; // @synthesize storableSongCount=_storableSongCount;
@property(retain, nonatomic) MDCSlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
- (unsigned long long)selectedQualityBytesPerSong;
- (void)refreshLabels;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAvailableStorage:(unsigned long long)arg1 userMaximumTrackCount:(unsigned long long)arg2 allowableMaxTrackCount:(unsigned long long)arg3 memoryPerSong:(unsigned long long)arg4 pageStyle:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

