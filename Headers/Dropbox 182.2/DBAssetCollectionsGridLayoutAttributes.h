//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@protocol DBTopLayoutGuideProviding;

@interface DBAssetCollectionsGridLayoutAttributes : UICollectionViewLayoutAttributes
{
    id <DBTopLayoutGuideProviding> _topLayoutGuideProvider;
}

@property(nonatomic) __weak id <DBTopLayoutGuideProviding> topLayoutGuideProvider; // @synthesize topLayoutGuideProvider=_topLayoutGuideProvider;
- (void).cxx_destruct;
- (id)addShouldBlurSectionHeaderBackgroundUpdateObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldBlurSectionHeaderBackground;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

