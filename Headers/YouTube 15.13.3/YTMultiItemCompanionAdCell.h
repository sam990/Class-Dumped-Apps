//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCompanionAdExtensionCell.h>

#import <Module_Framework/YTCellActionProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSString, YTMultiItemCompanionAdView;
@protocol YTResponder;

@interface YTMultiItemCompanionAdCell : YTCompanionAdExtensionCell <YTCellActionProtocol, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTMultiItemCompanionAdView *_companionAdView;
    id <YTResponder> _parentResponder;
}

- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)setEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
