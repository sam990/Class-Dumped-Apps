//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface IGCustomAlertLayoutConfig : NSObject
{
    _Bool _showDismissX;
    _Bool _showActionButtonTopLine;
    _Bool _showContentBottomSeparator;
    UIFont *_descriptionFont;
    UIColor *_descriptionColor;
    UIFont *_actionButtonFont;
    double _maxContentWidth;
    double _bottomPaddingOnTitle;
    long long _mediaStyle;
    struct UIEdgeInsets _contentInsets;
}

+ (id)downloadDataAlertConfig;
+ (id)screenshotDetectionEnabledAlertConfig;
+ (id)storiesAutoArchiveAlertConfig;
+ (id)profileBioLinksAlertConfig;
+ (id)hashtagFollowingAlertConfig;
+ (id)sendCodeOnMessengerAlertConfig;
+ (id)existingAccountAlertConfig;
+ (id)facebookConnectAlertConfig;
+ (id)contactImportAlertConfig;
+ (id)favoritesAlertConfig;
+ (id)titleAboveImageConfig;
+ (id)defaultAlertConfig;
+ (id)betaChannelAlertConfig;
@property(readonly, nonatomic) _Bool showContentBottomSeparator; // @synthesize showContentBottomSeparator=_showContentBottomSeparator;
@property(readonly, nonatomic) _Bool showActionButtonTopLine; // @synthesize showActionButtonTopLine=_showActionButtonTopLine;
@property(readonly, nonatomic) _Bool showDismissX; // @synthesize showDismissX=_showDismissX;
@property(readonly, nonatomic) long long mediaStyle; // @synthesize mediaStyle=_mediaStyle;
@property(readonly, nonatomic) double bottomPaddingOnTitle; // @synthesize bottomPaddingOnTitle=_bottomPaddingOnTitle;
@property(readonly, nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIFont *actionButtonFont; // @synthesize actionButtonFont=_actionButtonFont;
@property(readonly, nonatomic) UIColor *descriptionColor; // @synthesize descriptionColor=_descriptionColor;
@property(readonly, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
- (void).cxx_destruct;
- (id)initWithDescriptionFont:(id)arg1 descriptionColor:(id)arg2 actionButtonFont:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4 maxContentWidth:(double)arg5 bottomPaddingOnTitle:(double)arg6 mediaStyle:(long long)arg7 showDismissX:(_Bool)arg8 showActionButtonTopLine:(_Bool)arg9 showContentBottomSeparator:(_Bool)arg10;

@end

