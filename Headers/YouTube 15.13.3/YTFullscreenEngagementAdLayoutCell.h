//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"

@class GIMMe, NSString, YTELMViewController;
@protocol ELMContext, YTResponder;

@interface YTFullscreenEngagementAdLayoutCell : UICollectionViewCell <YTCollectionViewCellProtocol>
{
    id <ELMContext> _elementsContext;
    YTELMViewController *_elementsViewController;
    id <YTResponder> parentResponder;
    id entry;
    GIMMe *_gimme;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) id entry; // @synthesize entry;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setElementRendererViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
