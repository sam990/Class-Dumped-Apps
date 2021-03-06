//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IESLiveSettings, IESLiveWebImageService;

@interface IESLiveBadgeFactory : NSObject
{
    _Bool _enableAnimatedImage;
    id <IESLiveWebImageService> _webImageService;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(nonatomic) _Bool enableAnimatedImage; // @synthesize enableAnimatedImage=_enableAnimatedImage;
- (void).cxx_destruct;
- (id)p_getBadgeIcon:(id)arg1;
- (id)p_composeIconWithImage:(id)arg1 title:(id)arg2 fontColor:(id)arg3;
- (id)p_getFansclubIcon:(id)arg1 name:(id)arg2 fontColor:(id)arg3;
- (id)p_composeNobleIconWithImage:(id)arg1 level:(id)arg2 fontColor:(id)arg3;
- (id)p_getNobleIcon:(id)arg1 level:(id)arg2 fontColor:(id)arg3;
- (id)p_composeCityIconWithImage:(id)arg1 title:(id)arg2 fontColor:(id)arg3;
- (id)p_getCityIcon:(id)arg1 name:(id)arg2 fontColor:(id)arg3;
- (id)p_composeBrotherGroupIconWithImage:(id)arg1 title:(id)arg2 fontColor:(id)arg3;
- (id)p_getBrotherGroupIcon:(id)arg1 name:(id)arg2 level:(id)arg3 fontColor:(id)arg4;
- (id)p_getIconKeyByModel:(id)arg1;
- (id)badgeImageNodesWithBadgeList:(id)arg1;
- (void)calculateRangeNum:(unsigned long long *)arg1 rangeWidth:(unsigned long long *)arg2 rangeHeight:(unsigned long long *)arg3 badgeList:(id)arg4;
- (void)appendBadgeListIn:(id)arg1 rangeNum:(unsigned long long *)arg2 rangeWidth:(unsigned long long *)arg3 rangeHeight:(unsigned long long *)arg4 badgeList:(id)arg5;

@end

